
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_gpadc {int dev; int palmas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct palmas_gpadc *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6->palmas, VAR_3,
   VAR_4,
   VAR_5,
   VAR_5);
 if (VAR_7 < 0) {
  FUNC_0(VAR_6->dev, "GPADC_CTRL1 update failed: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_1(VAR_6->palmas, VAR_3,
   VAR_0,
   VAR_2 |
   VAR_1,
   0);
 if (VAR_7 < 0) {
  FUNC_0(VAR_6->dev, "AUTO_CTRL update failed: %d\n", VAR_7);
  return VAR_7;
 }

 FUNC_2(100);

 VAR_7 = FUNC_1(VAR_6->palmas, VAR_3,
   VAR_4,
   VAR_5, 0);
 if (VAR_7 < 0)
  FUNC_0(VAR_6->dev, "GPADC_CTRL1 update failed: %d\n", VAR_7);

 return VAR_7;
}
