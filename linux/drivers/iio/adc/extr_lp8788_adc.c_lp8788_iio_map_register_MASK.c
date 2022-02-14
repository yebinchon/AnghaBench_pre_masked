
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8788_platform_data {struct iio_map* adc_pdata; } ;
struct lp8788_adc {struct iio_map* map; } ;
struct iio_map {int dummy; } ;
struct iio_dev {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct iio_dev*,struct iio_map*) ;
 struct iio_map* VAR_0 ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
    struct lp8788_platform_data *VAR_2,
    struct lp8788_adc *VAR_3)
{
 struct iio_map *VAR_4;
 int VAR_5;

 VAR_4 = (!VAR_2 || !VAR_2->adc_pdata) ?
  VAR_0 : VAR_2->adc_pdata;

 VAR_5 = FUNC_1(VAR_1, VAR_4);
 if (VAR_5) {
  FUNC_0(&VAR_1->dev, "iio map err: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_3->map = VAR_4;
 return 0;
}
