
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max6639_platform_data {int ppr; scalar_t__ pwm_polarity; int rpm_range; } ;
struct max6639_data {int ppr; int rpm_range; int* temp_therm; int* temp_alert; int* temp_ot; int* pwm; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 struct max6639_platform_data* FUNC_8 (int *) ;
 int FUNC_9 (struct i2c_client*,int ,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_7,
          struct max6639_data *VAR_8)
{
 struct max6639_platform_data *VAR_9 =
  FUNC_8(&VAR_7->dev);
 int VAR_10;
 int VAR_11 = 1;
 int VAR_12;


 VAR_12 = FUNC_9(VAR_7, VAR_6,
      VAR_4);
 if (VAR_12)
  goto exit;


 if (VAR_9 && VAR_9->ppr > 0 &&
   VAR_9->ppr < 5)
  VAR_8->ppr = VAR_9->ppr;
 else
  VAR_8->ppr = 2;
 VAR_8->ppr -= 1;

 if (VAR_9)
  VAR_11 = FUNC_10(VAR_9->rpm_range);
 VAR_8->rpm_range = VAR_11;

 for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {


  VAR_12 = FUNC_9(VAR_7,
    FUNC_4(VAR_10),
    VAR_8->ppr << 6);
  if (VAR_12)
   goto exit;


  VAR_12 = FUNC_9(VAR_7,
   FUNC_1(VAR_10),
   VAR_0 | VAR_11);
  if (VAR_12)
   goto exit;


  if (VAR_9 && VAR_9->pwm_polarity == 0)
   VAR_12 = FUNC_9(VAR_7,
    FUNC_2(VAR_10), 0x00);
  else
   VAR_12 = FUNC_9(VAR_7,
    FUNC_2(VAR_10), 0x02);
  if (VAR_12)
   goto exit;





  VAR_12 = FUNC_9(VAR_7,
   FUNC_3(VAR_10),
   VAR_1 | 0x03);
  if (VAR_12)
   goto exit;


  VAR_8->temp_therm[VAR_10] = 80;
  VAR_8->temp_alert[VAR_10] = 90;
  VAR_8->temp_ot[VAR_10] = 100;
  VAR_12 = FUNC_9(VAR_7,
    FUNC_7(VAR_10),
    VAR_8->temp_therm[VAR_10]);
  if (VAR_12)
   goto exit;
  VAR_12 = FUNC_9(VAR_7,
    FUNC_0(VAR_10),
    VAR_8->temp_alert[VAR_10]);
  if (VAR_12)
   goto exit;
  VAR_12 = FUNC_9(VAR_7,
    FUNC_5(VAR_10), VAR_8->temp_ot[VAR_10]);
  if (VAR_12)
   goto exit;


  VAR_8->pwm[VAR_10] = 120;
  VAR_12 = FUNC_9(VAR_7,
    FUNC_6(VAR_10), VAR_8->pwm[VAR_10]);
  if (VAR_12)
   goto exit;
 }

 VAR_12 = FUNC_9(VAR_7, VAR_6,
  VAR_3 | VAR_2 |
  VAR_5);
exit:
 return VAR_12;
}
