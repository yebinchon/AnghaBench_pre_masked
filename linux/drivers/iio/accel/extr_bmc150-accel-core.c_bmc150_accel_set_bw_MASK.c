
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bmc150_accel_data {int bw_bits; int regmap; } ;
struct TYPE_3__ {int val; int val2; int bw_bits; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct bmc150_accel_data *VAR_3, int VAR_4,
          int VAR_5)
{
 int VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); ++VAR_6) {
  if (VAR_2[VAR_6].val == VAR_4 &&
      VAR_2[VAR_6].val2 == VAR_5) {
   VAR_7 = FUNC_1(VAR_3->regmap,
    VAR_0,
    VAR_2[VAR_6].bw_bits);
   if (VAR_7 < 0)
    return VAR_7;

   VAR_3->bw_bits =
    VAR_2[VAR_6].bw_bits;
   return 0;
  }
 }

 return -VAR_1;
}
