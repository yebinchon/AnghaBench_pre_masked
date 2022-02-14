
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7793_state {int** scale_avail; } ;
typedef int ssize_t ;


 int FUNC_0 (int**) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct ad7793_state* FUNC_2 (struct iio_dev*) ;
 scalar_t__ FUNC_3 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
   struct device_attribute *VAR_1, char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_1(VAR_0);
 struct ad7793_state *VAR_4 = FUNC_2(VAR_3);
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->scale_avail); VAR_5++)
  VAR_6 += FUNC_3(VAR_2 + VAR_6, "%d.%09u ", VAR_4->scale_avail[VAR_5][0],
          VAR_4->scale_avail[VAR_5][1]);

 VAR_6 += FUNC_3(VAR_2 + VAR_6, "\n");

 return VAR_6;
}
