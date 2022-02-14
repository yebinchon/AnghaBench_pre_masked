
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pc87427_data {int fan_enabled; int pwm_enabled; int temp_enabled; } ;
struct device {int kobj; } ;


 int VAR_0 ;
 struct pc87427_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int *) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_4)
{
 struct pc87427_data *VAR_5 = FUNC_0(VAR_4);
 int VAR_6;

 FUNC_1(VAR_4, &VAR_0);
 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  if (!(VAR_5->fan_enabled & (1 << VAR_6)))
   continue;
  FUNC_2(&VAR_4->kobj, &VAR_1[VAR_6]);
 }
 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  if (!(VAR_5->pwm_enabled & (1 << VAR_6)))
   continue;
  FUNC_2(&VAR_4->kobj, &VAR_2[VAR_6]);
 }
 for (VAR_6 = 0; VAR_6 < 6; VAR_6++) {
  if (!(VAR_5->temp_enabled & (1 << VAR_6)))
   continue;
  FUNC_2(&VAR_4->kobj, &VAR_3[VAR_6]);
 }
}
