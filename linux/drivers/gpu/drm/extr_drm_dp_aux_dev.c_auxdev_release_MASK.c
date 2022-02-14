
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct drm_dp_aux_dev* private_data; } ;
struct drm_dp_aux_dev {int refcount; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 struct drm_dp_aux_dev *VAR_3 = VAR_2->private_data;

 FUNC_0(&VAR_3->refcount, VAR_0);
 return 0;
}
