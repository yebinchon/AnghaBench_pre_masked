
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct si1133_data {scalar_t__ scan_mask; int completion; int regmap; } ;
struct iio_dev {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 struct si1133_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int ,scalar_t__*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct iio_dev *VAR_5 = VAR_4;
 struct si1133_data *VAR_6 = FUNC_2(VAR_5);
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_6->regmap, VAR_2, &VAR_7);
 if (VAR_8) {
  FUNC_1(&VAR_5->dev, "Error reading IRQ\n");
  goto out;
 }

 if (VAR_7 != VAR_6->scan_mask)
  return VAR_1;

out:
 FUNC_0(&VAR_6->completion);

 return VAR_0;
}
