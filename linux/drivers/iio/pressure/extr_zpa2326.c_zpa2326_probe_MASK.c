
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpa2326_private {struct regmap* regmap; int frequency; void* vdd; void* vref; } ;
struct regmap {int dummy; } ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*,unsigned int) ;
 int FUNC_3 (struct device*,struct iio_dev*) ;
 int FUNC_4 (struct device*,struct iio_dev*,int *,int ,int *) ;
 void* FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct iio_dev*) ;
 struct zpa2326_private* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct regmap*,int ,unsigned int*) ;
 int VAR_3 ;
 int FUNC_9 (struct iio_dev*,int) ;
 struct iio_dev* FUNC_10 (struct device*,char const*,struct regmap*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct device*,struct iio_dev*,struct zpa2326_private*,int) ;
 int FUNC_14 (struct device*,struct iio_dev*,struct zpa2326_private*,int) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct iio_dev*,struct zpa2326_private*) ;
 int FUNC_17 (struct iio_dev*,struct zpa2326_private*) ;
 int FUNC_18 (struct iio_dev*) ;
 int VAR_4 ;

int FUNC_19(struct device *VAR_5,
    const char *VAR_6,
    int VAR_7,
    unsigned int VAR_8,
    struct regmap *VAR_9)
{
 struct iio_dev *VAR_10;
 struct zpa2326_private *VAR_11;
 int VAR_12;
 unsigned int VAR_13;

 VAR_10 = FUNC_10(VAR_5, VAR_6, VAR_9);
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_7(VAR_10);

 VAR_11->vref = FUNC_5(VAR_5, "vref");
 if (FUNC_0(VAR_11->vref))
  return FUNC_1(VAR_11->vref);

 VAR_11->vdd = FUNC_5(VAR_5, "vdd");
 if (FUNC_0(VAR_11->vdd))
  return FUNC_1(VAR_11->vdd);


 VAR_11->frequency = FUNC_12();






 VAR_11->regmap = VAR_9;

 VAR_12 = FUNC_4(VAR_5, VAR_10, ((void*)0),
           VAR_4,
           &VAR_3);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_14(VAR_5, VAR_10, VAR_11, VAR_7);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_13(VAR_5, VAR_10, VAR_11, VAR_7);
 if (VAR_12)
  return VAR_12;


 VAR_12 = FUNC_17(VAR_10, VAR_11);
 if (VAR_12)
  return VAR_12;


 VAR_12 = FUNC_8(VAR_9, VAR_2, &VAR_13);
 if (VAR_12)
  goto sleep;

 if (VAR_13 != VAR_8) {
  FUNC_2(VAR_5, "found device with unexpected id %02x", VAR_13);
  VAR_12 = -VAR_0;
  goto sleep;
 }

 VAR_12 = FUNC_9(VAR_10, VAR_7);
 if (VAR_12)
  goto sleep;


 VAR_12 = FUNC_18(VAR_10);
 if (VAR_12)
  goto poweroff;

 FUNC_3(VAR_5, VAR_10);

 FUNC_15(VAR_5);

 VAR_12 = FUNC_6(VAR_10);
 if (VAR_12) {
  FUNC_11(VAR_5);
  goto poweroff;
 }

 return 0;

sleep:

 FUNC_18(VAR_10);
poweroff:
 FUNC_16(VAR_10, VAR_11);

 return VAR_12;
}
