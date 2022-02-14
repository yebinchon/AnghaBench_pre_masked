
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int mlock; int dev; } ;
struct iio_chan_spec {int address; } ;
struct axp288_adc_info {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int*,int ,int ) ;
 int FUNC_1 (struct axp288_adc_info*,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 struct axp288_adc_info* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_3,
   struct iio_chan_spec const *VAR_4,
   int *VAR_5, int *VAR_6, long VAR_7)
{
 int VAR_8;
 struct axp288_adc_info *VAR_9 = FUNC_3(VAR_3);

 FUNC_4(&VAR_3->mlock);
 switch (VAR_7) {
 case 128:
  if (FUNC_1(VAR_9, VAR_1,
     VAR_4->address)) {
   FUNC_2(&VAR_3->dev, "GPADC mode\n");
   VAR_8 = -VAR_2;
   break;
  }
  VAR_8 = FUNC_0(VAR_5, VAR_4->address, VAR_9->regmap);
  if (FUNC_1(VAR_9, VAR_0,
      VAR_4->address))
   FUNC_2(&VAR_3->dev, "TS pin restore\n");
  break;
 default:
  VAR_8 = -VAR_2;
 }
 FUNC_5(&VAR_3->mlock);

 return VAR_8;
}
