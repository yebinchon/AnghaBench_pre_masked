
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct kfd_local_mem_info {int vram_width; } ;
struct kfd_dev {int dummy; } ;
struct crat_subtype_memory {int length; int visibility_type; int width; int length_high; int length_low; int proximity_domain; int flags; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(int *VAR_3,
  struct kfd_dev *VAR_4, uint8_t VAR_5, uint64_t VAR_6,
  struct crat_subtype_memory *VAR_7,
  uint32_t VAR_8,
  const struct kfd_local_mem_info *VAR_9)
{
 *VAR_3 -= sizeof(struct crat_subtype_memory);
 if (*VAR_3 < 0)
  return -VAR_2;

 FUNC_1((void *)VAR_7, 0, sizeof(struct crat_subtype_memory));
 VAR_7->type = VAR_1;
 VAR_7->length = sizeof(struct crat_subtype_memory);
 VAR_7->flags |= VAR_0;

 VAR_7->proximity_domain = VAR_8;

 FUNC_2("Fill gpu memory affinity - type 0x%x size 0x%llx\n",
   VAR_5, VAR_6);

 VAR_7->length_low = FUNC_0(VAR_6);
 VAR_7->length_high = FUNC_3(VAR_6);

 VAR_7->width = VAR_9->vram_width;
 VAR_7->visibility_type = VAR_5;

 return 0;
}
