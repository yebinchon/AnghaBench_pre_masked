
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms5611_state {int lock; } ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
typedef int s32 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 struct ms5611_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iio_dev*,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_1, void *VAR_2)
{
 struct iio_poll_func *VAR_3 = VAR_2;
 struct iio_dev *VAR_4 = VAR_3->indio_dev;
 struct ms5611_state *VAR_5 = FUNC_1(VAR_4);
 s32 VAR_6[4];
 int VAR_7;

 FUNC_5(&VAR_5->lock);
 VAR_7 = FUNC_4(VAR_4, &VAR_6[1], &VAR_6[0]);
 FUNC_6(&VAR_5->lock);
 if (VAR_7 < 0)
  goto err;

 FUNC_2(VAR_4, VAR_6,
        FUNC_0(VAR_4));

err:
 FUNC_3(VAR_4->trig);

 return VAR_0;
}
