
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl6030_gpadc_data {int dev; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct twl6030_gpadc_data*,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ,int) ;

__attribute__((used)) static int FUNC_4(struct twl6030_gpadc_data *VAR_4)
{
 int VAR_5;
 int VAR_6;
 u8 VAR_7[VAR_1];
 s8 VAR_8, VAR_9;
 VAR_5 = FUNC_3(VAR_3, VAR_7,
   VAR_2, VAR_1);
 if (VAR_5 < 0) {
  FUNC_0(VAR_4->dev, "calibration failed\n");
  return VAR_5;
 }

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {

  switch (VAR_6) {
  case 0:
   VAR_8 = VAR_7[0];
   VAR_9 = VAR_7[1];
   break;
  case 1:
  case 3:
  case 4:
  case 5:
  case 6:
   VAR_8 = VAR_7[4];
   VAR_9 = VAR_7[5];
   break;
  case 2:
   VAR_8 = VAR_7[12];
   VAR_9 = VAR_7[13];
   break;
  case 7:
   VAR_8 = VAR_7[6];
   VAR_9 = VAR_7[7];
   break;
  case 8:
   VAR_8 = VAR_7[2];
   VAR_9 = VAR_7[3];
   break;
  case 9:
   VAR_8 = VAR_7[8];
   VAR_9 = VAR_7[9];
   break;
  case 10:
   VAR_8 = VAR_7[10];
   VAR_9 = VAR_7[11];
   break;
  case 14:
   VAR_8 = VAR_7[14];
   VAR_9 = VAR_7[15];
   break;
  default:
   continue;
  }

  VAR_8 = FUNC_2(VAR_8);
  VAR_9 = FUNC_2(VAR_9);

  FUNC_1(VAR_4, VAR_6, VAR_8, VAR_9);
 }

 return 0;
}
