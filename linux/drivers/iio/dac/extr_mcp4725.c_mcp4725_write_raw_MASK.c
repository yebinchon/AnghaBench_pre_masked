
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcp4725_data {int dac_value; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;

 struct mcp4725_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
          struct iio_chan_spec const *VAR_2,
          int VAR_3, int VAR_4, long VAR_5)
{
 struct mcp4725_data *VAR_6 = FUNC_0(VAR_1);
 int VAR_7;

 switch (VAR_5) {
 case 128:
  VAR_7 = FUNC_1(VAR_1, VAR_3);
  VAR_6->dac_value = VAR_3;
  break;
 default:
  VAR_7 = -VAR_0;
  break;
 }

 return VAR_7;
}
