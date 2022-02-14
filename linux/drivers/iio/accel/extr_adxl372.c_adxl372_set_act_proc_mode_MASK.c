
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adxl372_state {int act_proc_mode; int regmap; } ;
typedef enum adxl372_act_proc_mode { ____Placeholder_adxl372_act_proc_mode } adxl372_act_proc_mode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct adxl372_state *VAR_2,
         enum adxl372_act_proc_mode VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->regmap,
     VAR_0,
     VAR_1,
     FUNC_0(VAR_3));
 if (VAR_4 < 0)
  return VAR_4;

 VAR_2->act_proc_mode = VAR_3;

 return VAR_4;
}
