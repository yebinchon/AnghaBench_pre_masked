
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct bmc150_magn_data {int regmap; } ;
struct TYPE_3__ {int freq; int reg_val; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct bmc150_magn_data *VAR_5, int VAR_6)
{
 int VAR_7;
 u8 VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  if (VAR_4[VAR_8].freq == VAR_6) {
   VAR_7 = FUNC_1(VAR_5->regmap,
       VAR_1,
       VAR_0,
       VAR_4[VAR_8].
       reg_val <<
       VAR_2);
   if (VAR_7 < 0)
    return VAR_7;
   return 0;
  }
 }

 return -VAR_3;
}
