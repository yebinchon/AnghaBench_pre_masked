
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t uint32_t ;
struct amdgpu_bo {size_t metadata_size; int metadata_flags; int metadata; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,size_t) ;

int FUNC_1(struct amdgpu_bo *VAR_1, void *VAR_2,
      size_t VAR_3, uint32_t *VAR_4,
      uint64_t *VAR_5)
{
 if (!VAR_2 && !VAR_4)
  return -VAR_0;

 if (VAR_2) {
  if (VAR_3 < VAR_1->metadata_size)
   return -VAR_0;

  if (VAR_1->metadata_size)
   FUNC_0(VAR_2, VAR_1->metadata, VAR_1->metadata_size);
 }

 if (VAR_4)
  *VAR_4 = VAR_1->metadata_size;
 if (VAR_5)
  *VAR_5 = VAR_1->metadata_flags;

 return 0;
}
