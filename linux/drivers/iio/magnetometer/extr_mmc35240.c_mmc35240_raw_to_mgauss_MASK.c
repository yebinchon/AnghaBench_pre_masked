
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc35240_data {size_t res; int* axis_coef; int* axis_scale; } ;
typedef int __le16 ;
struct TYPE_2__ {int* sens; int nfo; } ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct mmc35240_data *VAR_2, int VAR_3,
      __le16 VAR_4[], int *VAR_5)
{
 int VAR_6[3];
 int VAR_7[3];
 int VAR_8;

 VAR_6[130] = FUNC_0(VAR_4[130]);
 VAR_6[129] = FUNC_0(VAR_4[129]);
 VAR_6[128] = FUNC_0(VAR_4[128]);

 VAR_7[130] = VAR_1[VAR_2->res].sens[130];
 VAR_7[129] = VAR_1[VAR_2->res].sens[129];
 VAR_7[128] = VAR_1[VAR_2->res].sens[128];

 VAR_8 = VAR_1[VAR_2->res].nfo;

 switch (VAR_3) {
 case 130:
  *VAR_5 = (VAR_6[130] - VAR_8) * 1000 / VAR_7[130];
  break;
 case 129:
  *VAR_5 = (VAR_6[129] - VAR_8) * 1000 / VAR_7[129] -
   (VAR_6[128] - VAR_8) * 1000 / VAR_7[128];
  break;
 case 128:
  *VAR_5 = (VAR_6[129] - VAR_8) * 1000 / VAR_7[129] +
   (VAR_6[128] - VAR_8) * 1000 / VAR_7[128];
  break;
 default:
  return -VAR_0;
 }

 *VAR_5 = (*VAR_5) * VAR_2->axis_coef[VAR_3] / VAR_2->axis_scale[VAR_3];

 return 0;
}
