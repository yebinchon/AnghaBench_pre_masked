
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {TYPE_1__* vma; } ;
struct ttm_buffer_object {int dummy; } ;
struct TYPE_4__ {int (* fault ) (struct vm_fault*) ;} ;
struct TYPE_3__ {scalar_t__ vm_private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm_fault*) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static vm_fault_t FUNC_1(struct vm_fault *VAR_2)
{
 struct ttm_buffer_object *VAR_3;
 vm_fault_t VAR_4;

 VAR_3 = (struct ttm_buffer_object *)VAR_2->vma->vm_private_data;
 if (VAR_3 == ((void*)0))
  return VAR_0;
 VAR_4 = VAR_1->fault(VAR_2);
 return VAR_4;
}
