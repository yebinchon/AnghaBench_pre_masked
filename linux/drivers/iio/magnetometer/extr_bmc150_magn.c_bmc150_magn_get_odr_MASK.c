
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct bmc150_magn_data {int regmap; } ;
struct TYPE_3__ {size_t reg_val; int freq; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct bmc150_magn_data *VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8;
 u8 VAR_9, VAR_10;

 VAR_7 = FUNC_1(VAR_5->regmap, VAR_1, &VAR_8);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_10 = (VAR_8 & VAR_0) >> VAR_2;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++)
  if (VAR_4[VAR_9].reg_val == VAR_10) {
   *VAR_6 = VAR_4[VAR_9].freq;
   return 0;
  }

 return -VAR_3;
}
