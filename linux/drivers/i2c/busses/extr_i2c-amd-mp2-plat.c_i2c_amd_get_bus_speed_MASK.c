
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dev; } ;
typedef enum speed_enum { ____Placeholder_speed_enum } speed_enum ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static enum speed_enum FUNC_2(struct platform_device *VAR_5)
{
 u32 VAR_6;
 int VAR_7;
 static const u32 VAR_8[] = {
  0, 100000, 400000, 1000000, 1400000, 3400000
 };

 VAR_6 = FUNC_1(&VAR_5->dev);

 for (VAR_7 = 1; VAR_7 < FUNC_0(VAR_8); VAR_7++) {
  if (VAR_6 < VAR_8[VAR_7])
   break;
 }
 VAR_6 = VAR_8[VAR_7 - 1];

 switch (VAR_6) {
 case 100000:
  return VAR_1;
 case 400000:
  return VAR_4;
 case 1000000:
  return VAR_0;
 case 1400000:
  return VAR_2;
 case 3400000:
  return VAR_3;
 default:
  return VAR_4;
 }
}
