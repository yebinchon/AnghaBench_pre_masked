
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bmc150_magn_data {scalar_t__ max_odr; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {scalar_t__ freq; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct bmc150_magn_data* FUNC_2 (struct iio_dev*) ;
 scalar_t__ FUNC_3 (char*,scalar_t__,char*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
      struct device_attribute *VAR_3,
      char *VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_1(VAR_2);
 struct bmc150_magn_data *VAR_6 = FUNC_2(VAR_5);
 size_t VAR_7 = 0;
 u8 VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++) {
  if (VAR_1[VAR_8].freq > VAR_6->max_odr)
   break;
  VAR_7 += FUNC_3(VAR_4 + VAR_7, VAR_0 - VAR_7, "%d ",
     VAR_1[VAR_8].freq);
 }

 VAR_4[VAR_7 - 1] = '\n';

 return VAR_7;
}
