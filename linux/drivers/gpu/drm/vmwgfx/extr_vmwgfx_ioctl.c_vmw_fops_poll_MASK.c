
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_private {int dummy; } ;
struct poll_table_struct {int dummy; } ;
struct file {struct drm_file* private_data; } ;
struct drm_file {TYPE_1__* minor; } ;
typedef int __poll_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,struct poll_table_struct*) ;
 int FUNC_1 (struct vmw_private*,int ) ;
 struct vmw_private* FUNC_2 (int ) ;

__poll_t FUNC_3(struct file *VAR_1, struct poll_table_struct *VAR_2)
{
 struct drm_file *VAR_3 = VAR_1->private_data;
 struct vmw_private *VAR_4 =
  FUNC_2(VAR_3->minor->dev);

 FUNC_1(VAR_4, VAR_0);
 return FUNC_0(VAR_1, VAR_2);
}
