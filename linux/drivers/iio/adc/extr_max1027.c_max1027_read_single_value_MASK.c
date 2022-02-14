
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max1027_state {int reg; int * buffer; int spi; } ;
struct iio_dev {int dev; } ;
struct iio_chan_spec {scalar_t__ type; int channel; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (struct iio_dev*) ;
 struct max1027_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (int ,int*,int) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_9,
         struct iio_chan_spec const *VAR_10,
         int *VAR_11)
{
 int VAR_12;
 struct max1027_state *VAR_13 = FUNC_5(VAR_9);

 if (FUNC_4(VAR_9)) {
  FUNC_3(&VAR_9->dev, "trigger mode already enabled");
  return -VAR_0;
 }


 VAR_13->reg = VAR_7 | VAR_6 | VAR_3;
 VAR_12 = FUNC_8(VAR_13->spi, &VAR_13->reg, 1);
 if (VAR_12 < 0) {
  FUNC_2(&VAR_9->dev,
   "Failed to configure setup register\n");
  return VAR_12;
 }


 VAR_13->reg = VAR_4 | FUNC_0(VAR_10->channel) |
    VAR_5;
 if (VAR_10->type == VAR_1)
  VAR_13->reg |= VAR_8;
 VAR_12 = FUNC_8(VAR_13->spi, &VAR_13->reg, 1);
 if (VAR_12 < 0) {
  FUNC_2(&VAR_9->dev,
   "Failed to configure conversion register\n");
  return VAR_12;
 }






 FUNC_6(1);


 VAR_12 = FUNC_7(VAR_13->spi, VAR_13->buffer, (VAR_10->type == VAR_1) ? 4 : 2);
 if (VAR_12 < 0)
  return VAR_12;

 *VAR_11 = FUNC_1(VAR_13->buffer[0]);

 return VAR_2;
}
