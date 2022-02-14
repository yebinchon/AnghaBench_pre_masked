
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {TYPE_1__* vma; } ;
struct ttm_buffer_object {int bdev; } ;
struct TYPE_5__ {int mclk_lock; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct TYPE_6__ {int (* fault ) (struct vm_fault*) ;} ;
struct TYPE_4__ {scalar_t__ vm_private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct radeon_device* FUNC_1 (int ) ;
 int FUNC_2 (struct vm_fault*) ;
 TYPE_3__* VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static vm_fault_t FUNC_4(struct vm_fault *VAR_2)
{
 struct ttm_buffer_object *VAR_3;
 struct radeon_device *VAR_4;
 vm_fault_t VAR_5;

 VAR_3 = (struct ttm_buffer_object *)VAR_2->vma->vm_private_data;
 if (VAR_3 == ((void*)0)) {
  return VAR_0;
 }
 VAR_4 = FUNC_1(VAR_3->bdev);
 FUNC_0(&VAR_4->pm.mclk_lock);
 VAR_5 = VAR_1->fault(VAR_2);
 FUNC_3(&VAR_4->pm.mclk_lock);
 return VAR_5;
}
