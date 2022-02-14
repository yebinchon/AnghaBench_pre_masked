
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sx9500_data {int completion; int mutex; TYPE_1__* client; } ;
struct iio_chan_spec {int channel; } ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sx9500_data*,int ) ;
 int FUNC_4 (struct sx9500_data*) ;
 int FUNC_5 (struct sx9500_data*,int ) ;
 int FUNC_6 (struct sx9500_data*) ;
 int FUNC_7 (struct sx9500_data*,struct iio_chan_spec const*,int*) ;
 int FUNC_8 (struct sx9500_data*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct sx9500_data *VAR_1,
     const struct iio_chan_spec *VAR_2,
     int *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_1->mutex);

 VAR_4 = FUNC_5(VAR_1, VAR_2->channel);
 if (VAR_4 < 0)
  goto out;

 VAR_4 = FUNC_6(VAR_1);
 if (VAR_4 < 0)
  goto out_dec_chan;

 FUNC_1(&VAR_1->mutex);

 if (VAR_1->client->irq > 0)
  VAR_4 = FUNC_9(&VAR_1->completion);
 else
  VAR_4 = FUNC_8(VAR_1);

 FUNC_0(&VAR_1->mutex);

 if (VAR_4 < 0)
  goto out_dec_data_rdy;

 VAR_4 = FUNC_7(VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  goto out_dec_data_rdy;

 VAR_4 = FUNC_4(VAR_1);
 if (VAR_4 < 0)
  goto out_dec_chan;

 VAR_4 = FUNC_3(VAR_1, VAR_2->channel);
 if (VAR_4 < 0)
  goto out;

 VAR_4 = VAR_0;

 goto out;

out_dec_data_rdy:
 FUNC_4(VAR_1);
out_dec_chan:
 FUNC_3(VAR_1, VAR_2->channel);
out:
 FUNC_1(&VAR_1->mutex);
 FUNC_2(&VAR_1->completion);

 return VAR_4;
}
