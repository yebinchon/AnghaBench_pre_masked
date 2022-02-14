
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
typedef int dev_t ;
struct TYPE_2__ {struct device* drv_class; int drv_cdev; int major; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *,int ,int,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 struct device* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct device*) ;
 struct device* FUNC_9 (struct device*,int *,int ,int *,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static int FUNC_12(void)
{
 dev_t VAR_5;
 struct device *VAR_6;

 if (FUNC_3(&VAR_5, 0, 1, VAR_0)) {
  FUNC_10("QAT: unable to allocate chrdev region\n");
  return -VAR_1;
 }

 VAR_3.drv_class = FUNC_7(VAR_2, VAR_0);
 if (FUNC_0(VAR_3.drv_class)) {
  FUNC_10("QAT: class_create failed for adf_ctl\n");
  goto err_chrdev_unreg;
 }
 VAR_3.major = FUNC_1(VAR_5);
 FUNC_6(&VAR_3.drv_cdev, &VAR_4);
 if (FUNC_4(&VAR_3.drv_cdev, VAR_5, 1)) {
  FUNC_10("QAT: cdev add failed\n");
  goto err_class_destr;
 }

 VAR_6 = FUNC_9(VAR_3.drv_class, ((void*)0),
       FUNC_2(VAR_3.major, 0),
       ((void*)0), VAR_0);
 if (FUNC_0(VAR_6)) {
  FUNC_10("QAT: failed to create device\n");
  goto err_cdev_del;
 }
 return 0;
err_cdev_del:
 FUNC_5(&VAR_3.drv_cdev);
err_class_destr:
 FUNC_8(VAR_3.drv_class);
err_chrdev_unreg:
 FUNC_11(VAR_5, 1);
 return -VAR_1;
}
