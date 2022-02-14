
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint32_t ;
typedef size_t u8 ;
struct vc4_exec_info {scalar_t__ ct0ca; int found_flush; int found_increment_semaphore_packet; int found_start_tile_binning_packet; scalar_t__ ct0ea; TYPE_1__* args; } ;
struct drm_device {int dummy; } ;
struct cmd_info {scalar_t__ len; int name; scalar_t__ (* func ) (struct vc4_exec_info*,void*,void*) ;} ;
struct TYPE_2__ {scalar_t__ bin_cl_size; } ;


 size_t FUNC_0 (struct cmd_info*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct cmd_info* VAR_3 ;
 int FUNC_2 (void*,void*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct vc4_exec_info*,void*,void*) ;

int
FUNC_4(struct drm_device *VAR_4,
      void *VAR_5,
      void *VAR_6,
      struct vc4_exec_info *VAR_7)
{
 uint32_t VAR_8 = VAR_7->args->bin_cl_size;
 uint32_t VAR_9 = 0;
 uint32_t VAR_10 = 0;

 while (VAR_10 < VAR_8) {
  void *VAR_11 = VAR_5 + VAR_9;
  void *VAR_12 = VAR_6 + VAR_10;
  u8 VAR_13 = *(uint8_t *)VAR_12;
  const struct cmd_info *VAR_14;

  if (VAR_13 >= FUNC_0(VAR_3)) {
   FUNC_1("0x%08x: packet %d out of bounds\n",
      VAR_10, VAR_13);
   return -VAR_0;
  }

  VAR_14 = &VAR_3[VAR_13];
  if (!VAR_14->name) {
   FUNC_1("0x%08x: packet %d invalid\n",
      VAR_10, VAR_13);
   return -VAR_0;
  }

  if (VAR_10 + VAR_14->len > VAR_8) {
   FUNC_1("0x%08x: packet %d (%s) length 0x%08x "
      "exceeds bounds (0x%08x)\n",
      VAR_10, VAR_13, VAR_14->name, VAR_14->len,
      VAR_10 + VAR_8);
   return -VAR_0;
  }

  if (VAR_13 != VAR_1)
   FUNC_2(VAR_11, VAR_12, VAR_14->len);

  if (VAR_14->func && VAR_14->func(VAR_7,
          VAR_11 + 1,
          VAR_12 + 1)) {
   FUNC_1("0x%08x: packet %d (%s) failed to validate\n",
      VAR_10, VAR_13, VAR_14->name);
   return -VAR_0;
  }

  VAR_10 += VAR_14->len;

  if (VAR_13 != VAR_1)
   VAR_9 += VAR_14->len;


  if (VAR_13 == VAR_2)
   break;
 }

 VAR_7->ct0ea = VAR_7->ct0ca + VAR_9;

 if (!VAR_7->found_start_tile_binning_packet) {
  FUNC_1("Bin CL missing VC4_PACKET_START_TILE_BINNING\n");
  return -VAR_0;
 }
 if (!VAR_7->found_increment_semaphore_packet || !VAR_7->found_flush) {
  FUNC_1("Bin CL missing VC4_PACKET_INCREMENT_SEMAPHORE + "
     "VC4_PACKET_FLUSH\n");
  return -VAR_0;
 }

 return 0;
}
