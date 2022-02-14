
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_private_data; } ;
struct file {int dummy; } ;
struct etnaviv_gem_object {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* mmap ) (struct etnaviv_gem_object*,struct vm_area_struct*) ;} ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct file*,struct vm_area_struct*) ;
 int FUNC_2 (struct etnaviv_gem_object*,struct vm_area_struct*) ;
 struct etnaviv_gem_object* FUNC_3 (int ) ;

int FUNC_4(struct file *VAR_0, struct vm_area_struct *VAR_1)
{
 struct etnaviv_gem_object *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3) {
  FUNC_0("mmap failed: %d", VAR_3);
  return VAR_3;
 }

 VAR_2 = FUNC_3(VAR_1->vm_private_data);
 return VAR_2->ops->mmap(VAR_2, VAR_1);
}
