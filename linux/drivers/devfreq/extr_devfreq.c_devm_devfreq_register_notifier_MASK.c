
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct device {int dummy; } ;
struct devfreq_notifier_devres {unsigned int list; struct notifier_block* nb; struct devfreq* devfreq; } ;
struct devfreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct devfreq*,struct notifier_block*,unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,struct devfreq_notifier_devres*) ;
 struct devfreq_notifier_devres* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct devfreq_notifier_devres*) ;

int FUNC_4(struct device *VAR_3,
    struct devfreq *VAR_4,
    struct notifier_block *VAR_5,
    unsigned int VAR_6)
{
 struct devfreq_notifier_devres *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_2, sizeof(*VAR_7),
    VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6);
 if (VAR_8) {
  FUNC_3(VAR_7);
  return VAR_8;
 }

 VAR_7->devfreq = VAR_4;
 VAR_7->nb = VAR_5;
 VAR_7->list = VAR_6;
 FUNC_1(VAR_3, VAR_7);

 return 0;
}
