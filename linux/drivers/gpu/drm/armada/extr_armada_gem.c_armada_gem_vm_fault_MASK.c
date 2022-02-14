
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {unsigned long address; TYPE_1__* vma; } ;
struct drm_gem_object {int dummy; } ;
struct armada_gem_object {unsigned long phys_addr; } ;
struct TYPE_2__ {unsigned long vm_start; struct drm_gem_object* vm_private_data; } ;


 unsigned long VAR_0 ;
 struct armada_gem_object* FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (TYPE_1__*,unsigned long,unsigned long) ;

__attribute__((used)) static vm_fault_t FUNC_2(struct vm_fault *VAR_1)
{
 struct drm_gem_object *VAR_2 = VAR_1->vma->vm_private_data;
 struct armada_gem_object *VAR_3 = FUNC_0(VAR_2);
 unsigned long VAR_4 = VAR_3->phys_addr >> VAR_0;

 VAR_4 += (VAR_1->address - VAR_1->vma->vm_start) >> VAR_0;
 return FUNC_1(VAR_1->vma, VAR_1->address, VAR_4);
}
