
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct extcon_dev_notifier_devres {unsigned int id; struct notifier_block* nb; struct extcon_dev* edev; } ;
struct extcon_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct extcon_dev_notifier_devres*) ;
 struct extcon_dev_notifier_devres* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct extcon_dev_notifier_devres*) ;
 int FUNC_3 (struct extcon_dev*,unsigned int,struct notifier_block*) ;

int FUNC_4(struct device *VAR_3, struct extcon_dev *VAR_4,
    unsigned int VAR_5, struct notifier_block *VAR_6)
{
 struct extcon_dev_notifier_devres *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_2, sizeof(*VAR_7),
    VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6);
 if (VAR_8) {
  FUNC_2(VAR_7);
  return VAR_8;
 }

 VAR_7->edev = VAR_4;
 VAR_7->id = VAR_5;
 VAR_7->nb = VAR_6;
 FUNC_0(VAR_3, VAR_7);

 return 0;
}
