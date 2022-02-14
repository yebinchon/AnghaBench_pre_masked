
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct devfreq_notifier_devres {int list; int nb; int devfreq; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0, void *VAR_1)
{
 struct devfreq_notifier_devres *VAR_2 = VAR_1;

 FUNC_0(VAR_2->devfreq, VAR_2->nb, VAR_2->list);
}
