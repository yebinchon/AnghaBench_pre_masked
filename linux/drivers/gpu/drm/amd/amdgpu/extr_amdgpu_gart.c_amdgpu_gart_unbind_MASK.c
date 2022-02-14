
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint64_t ;
typedef unsigned int u64 ;
struct TYPE_2__ {int ptr; int ** pages; int ready; } ;
struct amdgpu_device {unsigned int dummy_page_addr; int num_vmhubs; TYPE_1__ gart; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct amdgpu_device*,int *) ;
 int FUNC_2 (struct amdgpu_device*,int ,int,int ) ;
 int FUNC_3 (struct amdgpu_device*,int ,unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 () ;

int FUNC_5(struct amdgpu_device *VAR_3, uint64_t VAR_4,
   int VAR_5)
{
 unsigned VAR_6;
 unsigned VAR_7;
 int VAR_8, VAR_9;
 u64 VAR_10;

 uint64_t VAR_11 = 0;

 if (!VAR_3->gart.ready) {
  FUNC_0(1, "trying to unbind memory from uninitialized GART !\n");
  return -VAR_2;
 }

 VAR_6 = VAR_4 / VAR_1;
 VAR_7 = VAR_6 / VAR_0;
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++, VAR_7++) {



  VAR_10 = VAR_3->dummy_page_addr;
  if (!VAR_3->gart.ptr)
   continue;

  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++, VAR_6++) {
   FUNC_3(VAR_3, VAR_3->gart.ptr,
            VAR_6, VAR_10, VAR_11);
   VAR_10 += VAR_1;
  }
 }
 FUNC_4();
 FUNC_1(VAR_3, ((void*)0));
 for (VAR_8 = 0; VAR_8 < VAR_3->num_vmhubs; VAR_8++)
  FUNC_2(VAR_3, 0, VAR_8, 0);

 return 0;
}
