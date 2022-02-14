
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_buffer_object {int dummy; } ;
struct TYPE_3__ {int vma_node; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct qxl_bo {TYPE_2__ tbo; } ;
struct file {int private_data; } ;


 int FUNC_0 (int *,int ) ;
 struct qxl_bo* FUNC_1 (struct ttm_buffer_object*) ;

__attribute__((used)) static int FUNC_2(struct ttm_buffer_object *VAR_0, struct file *VAR_1)
{
 struct qxl_bo *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(&VAR_2->tbo.base.vma_node,
       VAR_1->private_data);
}
