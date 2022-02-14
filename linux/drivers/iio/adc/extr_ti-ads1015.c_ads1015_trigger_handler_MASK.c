
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; int masklength; int active_scan_mask; } ;
struct ads1015_data {int lock; } ;
typedef int s16 ;
typedef int irqreturn_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct ads1015_data*,int,int*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct iio_dev*) ;
 struct ads1015_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_1, void *VAR_2)
{
 struct iio_poll_func *VAR_3 = VAR_2;
 struct iio_dev *VAR_4 = VAR_3->indio_dev;
 struct ads1015_data *VAR_5 = FUNC_3(VAR_4);
 s16 VAR_6[8];
 int VAR_7, VAR_8, VAR_9;

 FUNC_6(VAR_6, 0, sizeof(VAR_6));

 FUNC_7(&VAR_5->lock);
 VAR_7 = FUNC_1(VAR_4->active_scan_mask,
         VAR_4->masklength);
 VAR_8 = FUNC_0(VAR_5, VAR_7, &VAR_9);
 if (VAR_8 < 0) {
  FUNC_8(&VAR_5->lock);
  goto err;
 }

 VAR_6[0] = VAR_9;
 FUNC_8(&VAR_5->lock);

 FUNC_4(VAR_4, VAR_6,
        FUNC_2(VAR_4));

err:
 FUNC_5(VAR_4->trig);

 return VAR_0;
}
