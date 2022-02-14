
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct drm_dp_aux_dev* private_data; } ;
struct drm_dp_aux_dev {int dummy; } ;


 int VAR_0 ;
 struct drm_dp_aux_dev* FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct inode*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 unsigned int VAR_3 = FUNC_1(VAR_1);
 struct drm_dp_aux_dev *VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  return -VAR_0;

 VAR_2->private_data = VAR_4;
 return 0;
}
