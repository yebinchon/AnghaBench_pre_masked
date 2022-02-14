
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ltr501_data {int reg_ps_rate; } ;
struct TYPE_3__ {int time_val; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static int FUNC_2(struct ltr501_data *VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_3->reg_ps_rate, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_6 < 0 || VAR_6 >= FUNC_0(VAR_2))
  return -VAR_0;

 *VAR_4 = VAR_2[VAR_6].time_val;

 return VAR_1;
}
