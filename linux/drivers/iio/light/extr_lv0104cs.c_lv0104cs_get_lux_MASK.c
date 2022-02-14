
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct lv0104cs_private {size_t scale; size_t int_time; int client; } ;
struct TYPE_4__ {int regval; } ;
struct TYPE_3__ {int regval; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;




 TYPE_2__* VAR_3 ;
 int FUNC_0 (int ,int*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct lv0104cs_private *VAR_5,
    int *VAR_6, int *VAR_7)
{
 u8 VAR_8 = VAR_1;
 u16 VAR_9;
 int VAR_10;

 VAR_8 |= VAR_4[VAR_5->scale].regval;
 VAR_8 |= VAR_3[VAR_5->int_time].regval;
 VAR_10 = FUNC_1(VAR_5->client, VAR_8);
 if (VAR_10)
  return VAR_10;


 switch (VAR_5->int_time) {
 case 133:
  FUNC_2(50);
  break;

 case 134:
  FUNC_2(150);
  break;

 case 132:
  FUNC_2(250);
  break;

 default:
  return -VAR_0;
 }

 VAR_10 = FUNC_0(VAR_5->client, &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_5->client, VAR_2);
 if (VAR_10)
  return VAR_10;


 switch (VAR_5->scale) {
 case 131:
  *VAR_6 = VAR_9 * 4;
  *VAR_7 = 0;
  return 0;

 case 130:
  *VAR_6 = VAR_9;
  *VAR_7 = 0;
  return 0;

 case 129:
  *VAR_6 = VAR_9 / 2;
  *VAR_7 = (VAR_9 % 2) * 500000;
  return 0;

 case 128:
  *VAR_6 = VAR_9 / 8;
  *VAR_7 = (VAR_9 % 8) * 125000;
  return 0;

 default:
  return -VAR_0;
 }
}
