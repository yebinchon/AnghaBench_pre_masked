
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nct6683_data {int have_pwm; int * pwm; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct nct6683_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct nct6683_data*,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1)
{
 struct nct6683_data *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!(VAR_2->have_pwm & (1 << VAR_3)))
   continue;
  VAR_2->pwm[VAR_3] = FUNC_2(VAR_2, FUNC_0(VAR_3));
 }
}
