
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct iio_dev*,int ) ;
 int FUNC_1 (struct iio_dev*,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_9)
{
 int VAR_10, VAR_11;

 VAR_10 = FUNC_1(VAR_9, VAR_0,
      VAR_1);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_10 = FUNC_1(VAR_9, VAR_2,
      VAR_3);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_11 = 4;
 do {
  FUNC_3(20);
  VAR_10 = FUNC_0(VAR_9,
      VAR_5);
  if (VAR_10 < 0)
   return VAR_10;
 } while ((VAR_10 & VAR_4) && VAR_11--);

 VAR_10 = FUNC_1(VAR_9, VAR_0, 0);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_9, VAR_6);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_10 & VAR_7) {
  FUNC_2(&VAR_9->dev, "Verify EEPROM failed");
  VAR_10 = -VAR_8;
 }

 return VAR_10;
}
