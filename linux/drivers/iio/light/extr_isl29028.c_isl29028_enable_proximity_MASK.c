
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isl29028_chip {int prox_sampling_frac; int prox_sampling_int; int regmap; } ;
struct TYPE_2__ {int sleep_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct isl29028_chip*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct isl29028_chip *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_4->prox_sampling_int,
        VAR_4->prox_sampling_frac);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_4->regmap, VAR_2,
     VAR_1,
     VAR_0);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_5 = FUNC_0(VAR_4->prox_sampling_int,
          VAR_4->prox_sampling_frac);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_2(VAR_3[VAR_5].sleep_time);

 return 0;
}
