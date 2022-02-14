
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint64_t ;
struct page {int dummy; } ;
struct TYPE_2__ {int ptr; struct page** pages; int ready; } ;
struct amdgpu_device {int num_vmhubs; TYPE_1__ gart; } ;
typedef int dma_addr_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct amdgpu_device*,int *) ;
 int FUNC_2 (struct amdgpu_device*,unsigned int,int,int *,unsigned int,int ) ;
 int FUNC_3 (struct amdgpu_device*,int ,int,int ) ;
 int FUNC_4 () ;

int FUNC_5(struct amdgpu_device *VAR_3, uint64_t VAR_4,
       int VAR_5, struct page **VAR_6, dma_addr_t *VAR_7,
       uint64_t VAR_8)
{



 int VAR_9, VAR_10;

 if (!VAR_3->gart.ready) {
  FUNC_0(1, "trying to bind memory to uninitialized GART !\n");
  return -VAR_2;
 }
 if (!VAR_3->gart.ptr)
  return 0;

 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_7, VAR_8,
      VAR_3->gart.ptr);
 if (VAR_9)
  return VAR_9;

 FUNC_4();
 FUNC_1(VAR_3, ((void*)0));
 for (VAR_10 = 0; VAR_10 < VAR_3->num_vmhubs; VAR_10++)
  FUNC_3(VAR_3, 0, VAR_10, 0);
 return 0;
}
