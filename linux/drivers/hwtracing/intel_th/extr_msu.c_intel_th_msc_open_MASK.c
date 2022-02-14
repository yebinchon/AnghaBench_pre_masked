
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc_iter {int dev; } ;
struct msc {int dummy; } ;
struct intel_th_device {int dev; } ;
struct inode {int dummy; } ;
struct file {struct msc_iter* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct msc_iter*) ;
 int FUNC_1 (struct msc_iter*) ;
 int FUNC_2 (int ) ;
 struct msc* FUNC_3 (int *) ;
 struct msc_iter* FUNC_4 (struct msc*) ;
 int FUNC_5 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2, struct file *VAR_3)
{
 struct intel_th_device *VAR_4 = VAR_3->private_data;
 struct msc *VAR_5 = FUNC_3(&VAR_4->dev);
 struct msc_iter *VAR_6;

 if (!FUNC_2(VAR_0))
  return -VAR_1;

 VAR_6 = FUNC_4(VAR_5);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_3->private_data = VAR_6;

 return FUNC_5(VAR_2, VAR_3);
}
