
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct amdgpu_bo {scalar_t__ metadata_size; int * metadata; int metadata_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (void*,scalar_t__,int ) ;

int FUNC_2 (struct amdgpu_bo *VAR_3, void *VAR_4,
       uint32_t VAR_5, uint64_t VAR_6)
{
 void *VAR_7;

 if (!VAR_5) {
  if (VAR_3->metadata_size) {
   FUNC_0(VAR_3->metadata);
   VAR_3->metadata = ((void*)0);
   VAR_3->metadata_size = 0;
  }
  return 0;
 }

 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 FUNC_0(VAR_3->metadata);
 VAR_3->metadata_flags = VAR_6;
 VAR_3->metadata = VAR_7;
 VAR_3->metadata_size = VAR_5;

 return 0;
}
