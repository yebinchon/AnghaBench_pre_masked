
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {TYPE_2__* vm_file; scalar_t__ vm_private_data; } ;
struct ttm_buffer_object {TYPE_1__* bdev; } ;
struct TYPE_4__ {scalar_t__ f_mapping; } ;
struct TYPE_3__ {scalar_t__ dev_mapping; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ttm_buffer_object*) ;

__attribute__((used)) static void FUNC_2(struct vm_area_struct *VAR_0)
{
 struct ttm_buffer_object *VAR_1 =
     (struct ttm_buffer_object *)VAR_0->vm_private_data;

 FUNC_0(VAR_1->bdev->dev_mapping != VAR_0->vm_file->f_mapping);

 FUNC_1(VAR_1);
}
