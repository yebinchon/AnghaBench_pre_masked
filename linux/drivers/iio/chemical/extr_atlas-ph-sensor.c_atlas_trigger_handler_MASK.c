
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
struct atlas_data {int buffer; TYPE_1__* chip; int regmap; } ;
typedef int irqreturn_t ;
typedef int __be32 ;
struct TYPE_2__ {int num_channels; int data_reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 struct atlas_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct iio_poll_func *VAR_3 = VAR_2;
 struct iio_dev *VAR_4 = VAR_3->indio_dev;
 struct atlas_data *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_4(VAR_5->regmap, VAR_5->chip->data_reg,
         (u8 *) &VAR_5->buffer,
         sizeof(__be32) * (VAR_5->chip->num_channels - 2));

 if (!VAR_6)
  FUNC_2(VAR_4, VAR_5->buffer,
    FUNC_0(VAR_4));

 FUNC_3(VAR_4->trig);

 return VAR_0;
}
