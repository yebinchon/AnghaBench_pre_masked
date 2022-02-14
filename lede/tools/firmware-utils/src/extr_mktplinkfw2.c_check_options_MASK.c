
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct fw_header {int dummy; } ;
struct TYPE_11__ {int hw_rev; void* hw_ver_add; void* hw_id; } ;
struct TYPE_10__ {int rootfs_ofs; int fw_max_len; scalar_t__ kernel_ep; scalar_t__ kernel_la; } ;
struct TYPE_9__ {int file_size; int * file_name; } ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,...) ;
 TYPE_7__* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_7__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_3 (int ,int *) ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 TYPE_2__* VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 scalar_t__ VAR_20 ;
 TYPE_1__ VAR_21 ;
 int VAR_22 ;
 int FUNC_5 (int *,char*,int *,int *,...) ;
 void* FUNC_6 (int *,int *,int ) ;
 int * VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_26;

 if (VAR_8.file_name) {
  VAR_26 = FUNC_4(&VAR_8);
  if (VAR_26)
   return VAR_26;

  return 0;
 } else if (VAR_3) {
  FUNC_2("no firmware for inspection specified");
  return -1;
 }

 if (VAR_17 == ((void*)0)) {
  FUNC_2("hardware id must be specified");
  return -1;
 }

 VAR_0 = &VAR_2;

 if (VAR_14 == ((void*)0)) {
  FUNC_2("flash layout is not specified");
  return -1;
 }

 VAR_0->hw_id = FUNC_6(VAR_17, ((void*)0), 0);

 VAR_0->hw_rev = 1;
 VAR_0->hw_ver_add = 0;

 if (VAR_18)
  VAR_0->hw_rev = FUNC_6(VAR_18, ((void*)0), 0);
 if (VAR_19)
  VAR_0->hw_ver_add = FUNC_6(VAR_19, ((void*)0), 0);

 VAR_13 = FUNC_3(VAR_15, VAR_14);
 if (VAR_13 == ((void*)0)) {
  FUNC_2("unknown flash layout \"%s\"", VAR_14);
  return -1;
 }

 if (!VAR_11)
  VAR_11 = VAR_13->kernel_la;
 if (!VAR_9)
  VAR_9 = VAR_13->kernel_ep;
 if (!VAR_22)
  VAR_22 = VAR_13->rootfs_ofs;

 if (VAR_10.file_name == ((void*)0)) {
  FUNC_2("no kernel image specified");
  return -1;
 }

 VAR_26 = FUNC_4(&VAR_10);
 if (VAR_26)
  return VAR_26;

 VAR_12 = VAR_10.file_size;

 if (VAR_1) {
  if (VAR_10.file_size >
      VAR_13->fw_max_len - sizeof(struct fw_header)) {
   FUNC_2("kernel image is too big");
   return -1;
  }
 } else {
  if (VAR_21.file_name == ((void*)0)) {
   FUNC_2("no rootfs image specified");
   return -1;
  }

  VAR_26 = FUNC_4(&VAR_21);
  if (VAR_26)
   return VAR_26;

  if (VAR_20) {
   VAR_12 += sizeof(struct fw_header);
   VAR_22 = FUNC_0(VAR_12, VAR_20);
   VAR_12 -= sizeof(struct fw_header);

   FUNC_1("rootfs offset aligned to 0x%u", VAR_22);

   if (VAR_12 + VAR_21.file_size >
       VAR_13->fw_max_len - sizeof(struct fw_header)) {
    FUNC_2("images are too big");
    return -1;
   }
  } else {
   if (VAR_10.file_size >
       VAR_22 - sizeof(struct fw_header)) {
    FUNC_2("kernel image is too big");
    return -1;
   }

   if (VAR_21.file_size >
       (VAR_13->fw_max_len - VAR_22)) {
    FUNC_2("rootfs image is too big");
    return -1;
   }
  }
 }

 if (VAR_16 == ((void*)0)) {
  FUNC_2("no output file specified");
  return -1;
 }

 VAR_26 = FUNC_5(VAR_4, "%d.%d.%d", &VAR_5, &VAR_7, &VAR_6);
 if (VAR_26 != 3) {
  FUNC_2("invalid firmware version '%s'", VAR_4);
  return -1;
 }

 VAR_26 = FUNC_5(VAR_23, "%d.%d", &VAR_24, &VAR_25);
 if (VAR_26 != 2) {
  FUNC_2("invalid secondary version '%s'", VAR_23);
  return -1;
 }

 return 0;
}
