
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llcc_drv_data {int bcast_regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(int VAR_9, struct llcc_drv_data *VAR_10)
{
 int VAR_11 = 0;

 switch (VAR_9) {
 case 131:
 case 130:
  VAR_11 = FUNC_1(VAR_10->bcast_regmap, VAR_1,
       VAR_3);
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_1(VAR_10->bcast_regmap, VAR_0,
       VAR_2);
  if (VAR_11)
   return VAR_11;
  break;
 case 129:
 case 128:
  VAR_11 = FUNC_1(VAR_10->bcast_regmap, VAR_8,
       VAR_3);
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_1(VAR_10->bcast_regmap, VAR_7,
       VAR_2);
  if (VAR_11)
   return VAR_11;
  break;
 default:
  VAR_11 = -VAR_5;
  FUNC_0(VAR_6, VAR_4, "Unexpected error type: %d\n",
       VAR_9);
 }
 return VAR_11;
}
