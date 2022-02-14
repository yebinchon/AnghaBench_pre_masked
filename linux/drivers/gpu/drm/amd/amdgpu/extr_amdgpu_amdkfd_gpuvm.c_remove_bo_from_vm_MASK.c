
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_bo_va_list {int bo_list; int bo_va; scalar_t__ va; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (struct amdgpu_device*,int ) ;
 int FUNC_1 (struct kfd_bo_va_list*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__,struct kfd_bo_va_list*) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_0,
  struct kfd_bo_va_list *VAR_1, unsigned long VAR_2)
{
 FUNC_3("\t remove VA 0x%llx - 0x%llx in entry %p\n",
   VAR_1->va,
   VAR_1->va + VAR_2, VAR_1);
 FUNC_0(VAR_0, VAR_1->bo_va);
 FUNC_2(&VAR_1->bo_list);
 FUNC_1(VAR_1);
}
