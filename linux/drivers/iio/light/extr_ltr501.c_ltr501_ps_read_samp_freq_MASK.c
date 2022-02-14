
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ltr501_data {int reg_ps_rate; } ;
struct TYPE_3__ {int freq_val; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static int FUNC_2(struct ltr501_data *VAR_3,
        int *VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_3->reg_ps_rate, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_7 < 0 || VAR_7 >= FUNC_0(VAR_2))
  return -VAR_0;

 *VAR_4 = VAR_2[VAR_7].freq_val / 1000000;
 *VAR_5 = VAR_2[VAR_7].freq_val % 1000000;

 return VAR_1;
}
