
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tfp410 {scalar_t__ hpd_irq; scalar_t__ hpd; scalar_t__ ddc; int bridge; int hpd_work; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct tfp410* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct tfp410 *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->hpd_irq >= 0)
  FUNC_0(&VAR_1->hpd_work);

 FUNC_2(&VAR_1->bridge);

 if (VAR_1->ddc)
  FUNC_4(VAR_1->ddc);
 if (VAR_1->hpd)
  FUNC_3(VAR_1->hpd);

 return 0;
}
