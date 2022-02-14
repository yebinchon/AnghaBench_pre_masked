
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcp4725_data {int dac_value; int vref_reg; int vdd_reg; int ref_mode; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mcp4725_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_4,
      struct iio_chan_spec const *VAR_5,
      int *VAR_6, int *VAR_7, long VAR_8)
{
 struct mcp4725_data *VAR_9 = FUNC_0(VAR_4);
 int VAR_10;

 switch (VAR_8) {
 case 129:
  *VAR_6 = VAR_9->dac_value;
  return VAR_2;
 case 128:
  if (VAR_9->ref_mode == VAR_3)
   VAR_10 = FUNC_1(VAR_9->vdd_reg);
  else
   VAR_10 = FUNC_1(VAR_9->vref_reg);

  if (VAR_10 < 0)
   return VAR_10;

  *VAR_6 = VAR_10 / 1000;
  *VAR_7 = 12;
  return VAR_1;
 }
 return -VAR_0;
}
