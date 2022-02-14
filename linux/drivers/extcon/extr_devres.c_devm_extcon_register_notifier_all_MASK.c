
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct extcon_dev_notifier_devres {struct notifier_block* nb; struct extcon_dev* edev; } ;
struct extcon_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct extcon_dev_notifier_devres*) ;
 struct extcon_dev_notifier_devres* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct extcon_dev_notifier_devres*) ;
 int FUNC_3 (struct extcon_dev*,struct notifier_block*) ;

int FUNC_4(struct device *VAR_3, struct extcon_dev *VAR_4,
    struct notifier_block *VAR_5)
{
 struct extcon_dev_notifier_devres *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_2, sizeof(*VAR_6),
    VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_4, VAR_5);
 if (VAR_7) {
  FUNC_2(VAR_6);
  return VAR_7;
 }

 VAR_6->edev = VAR_4;
 VAR_6->nb = VAR_5;
 FUNC_0(VAR_3, VAR_6);

 return 0;
}
