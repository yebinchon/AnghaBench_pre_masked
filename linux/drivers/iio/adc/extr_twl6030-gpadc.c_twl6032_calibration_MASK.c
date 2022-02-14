
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl6030_gpadc_data {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct twl6030_gpadc_data*,int,int,int) ;
 int FUNC_2 (int*,int,int,int,int,int) ;
 int FUNC_3 (int ,int*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct twl6030_gpadc_data *VAR_4)
{
 int VAR_5, VAR_6 = 0, VAR_7 = 0, VAR_8;
 u8 VAR_9[VAR_0];
 int VAR_10;

 VAR_10 = FUNC_3(VAR_2, VAR_9,
   VAR_1, VAR_0);
 if (VAR_10 < 0) {
  FUNC_0(VAR_4->dev, "calibration failed\n");
  return VAR_10;
 }







 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {

  switch (VAR_5) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 11:
  case 14:
   VAR_6 = FUNC_2(VAR_9, 2, 0, 0x1f,
        0x06, 2);
   VAR_7 = FUNC_2(VAR_9, 3, 1, 0x3f,
        0x06, 2);
   break;
  case 8:
   VAR_8 = FUNC_2(VAR_9, 2, 0, 0x1f,
        0x06, 2);
   VAR_6 = VAR_8 + FUNC_2(VAR_9, 7, 6,
        0x18, 0x1E, 1);

   VAR_8 = FUNC_2(VAR_9, 3, 1, 0x3F,
        0x06, 2);
   VAR_7 = VAR_8 + FUNC_2(VAR_9, 9, 7,
        0x1F, 0x06, 2);
   break;
  case 9:
   VAR_8 = FUNC_2(VAR_9, 2, 0, 0x1f,
        0x06, 2);
   VAR_6 = VAR_8 + FUNC_2(VAR_9, 13, 11,
        0x18, 0x1E, 1);

   VAR_8 = FUNC_2(VAR_9, 3, 1, 0x3f,
        0x06, 2);
   VAR_7 = VAR_8 + FUNC_2(VAR_9, 15, 13,
        0x1F, 0x06, 1);
   break;
  case 10:
   VAR_6 = FUNC_2(VAR_9, 10, 8, 0x0f,
        0x0E, 3);
   VAR_7 = FUNC_2(VAR_9, 14, 12, 0x0f,
        0x0E, 3);
   break;
  case 7:
  case 18:
   VAR_8 = FUNC_2(VAR_9, 2, 0, 0x1f,
        0x06, 2);

   VAR_6 = (VAR_9[4] & 0x7E) >> 1;
   if (VAR_9[4] & 0x01)
    VAR_6 = -VAR_6;
   VAR_6 += VAR_8;

   VAR_8 = FUNC_2(VAR_9, 3, 1, 0x3f,
        0x06, 2);

   VAR_7 = (VAR_9[5] & 0xFE) >> 1;
   if (VAR_9[5] & 0x01)
    VAR_7 = -VAR_7;

   VAR_7 += VAR_8;
   break;
  default:

   continue;
  }

  FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
 }

 return 0;
}
