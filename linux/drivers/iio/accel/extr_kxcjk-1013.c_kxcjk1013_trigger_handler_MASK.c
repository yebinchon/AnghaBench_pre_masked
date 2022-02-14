
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kxcjk1013_data {int timestamp; scalar_t__ buffer; int mutex; int client; } ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int *) ;
 struct kxcjk1013_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct iio_poll_func *VAR_5 = VAR_4;
 struct iio_dev *VAR_6 = VAR_5->indio_dev;
 struct kxcjk1013_data *VAR_7 = FUNC_1(VAR_6);
 int VAR_8;

 FUNC_4(&VAR_7->mutex);
 VAR_8 = FUNC_0(VAR_7->client,
       VAR_2,
       VAR_0 * 2,
       (u8 *)VAR_7->buffer);
 FUNC_5(&VAR_7->mutex);
 if (VAR_8 < 0)
  goto err;

 FUNC_2(VAR_6, VAR_7->buffer,
        VAR_7->timestamp);
err:
 FUNC_3(VAR_6->trig);

 return VAR_1;
}
