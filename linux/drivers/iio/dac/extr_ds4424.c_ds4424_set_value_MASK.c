
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
struct ds4424_data {int* raw; int lock; int client; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,int ,int) ;
 struct ds4424_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_0,
        int VAR_1, struct iio_chan_spec const *VAR_2)
{
 struct ds4424_data *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 FUNC_3(&VAR_3->lock);
 VAR_4 = FUNC_1(VAR_3->client,
   FUNC_0(VAR_2->channel), VAR_1);
 if (VAR_4 < 0)
  goto fail;

 VAR_3->raw[VAR_2->channel] = VAR_1;

fail:
 FUNC_4(&VAR_3->lock);
 return VAR_4;
}
