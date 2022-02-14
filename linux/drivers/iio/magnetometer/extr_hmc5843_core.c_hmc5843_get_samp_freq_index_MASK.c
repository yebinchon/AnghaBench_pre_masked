
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hmc5843_data {TYPE_1__* variant; } ;
struct TYPE_2__ {int n_regval_to_samp_freq; int** regval_to_samp_freq; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct hmc5843_data *VAR_1,
           int VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->variant->n_regval_to_samp_freq; VAR_4++)
  if (VAR_2 == VAR_1->variant->regval_to_samp_freq[VAR_4][0] &&
      VAR_3 == VAR_1->variant->regval_to_samp_freq[VAR_4][1])
   return VAR_4;

 return -VAR_0;
}
