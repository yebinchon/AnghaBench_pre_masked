
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mma8452_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (scalar_t__**) ;
 scalar_t__ VAR_0 ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct mma8452_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct mma8452_data*) ;
 scalar_t__** VAR_1 ;
 scalar_t__ FUNC_4 (char*,scalar_t__,char*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
        struct device_attribute *VAR_3,
        char *VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_1(VAR_2);
 struct mma8452_data *VAR_6 = FUNC_2(VAR_5);
 int VAR_7 = FUNC_3(VAR_6);
 int VAR_8;
 u16 VAR_9 = 0;
 size_t VAR_10 = 0;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++) {
  if (VAR_9 == VAR_1[VAR_8][VAR_7])
   continue;

  VAR_9 = VAR_1[VAR_8][VAR_7];

  VAR_10 += FUNC_4(VAR_4 + VAR_10, VAR_0 - VAR_10, "%d ", VAR_9);
 }
 VAR_4[VAR_10 - 1] = '\n';

 return VAR_10;
}
