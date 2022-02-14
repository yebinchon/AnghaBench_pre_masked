
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
struct as3935_state {int* buffer; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct as3935_state*,int ,int*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct as3935_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int**,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct iio_poll_func *VAR_5 = VAR_4;
 struct iio_dev *VAR_6 = VAR_5->indio_dev;
 struct as3935_state *VAR_7 = FUNC_2(VAR_6);
 int VAR_8, VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_0, &VAR_8);
 if (VAR_9)
  goto err_read;

 VAR_7->buffer[0] = VAR_8 & VAR_1;
 FUNC_3(VAR_6, &VAR_7->buffer,
        FUNC_1(VAR_6));
err_read:
 FUNC_4(VAR_6->trig);

 return VAR_2;
}
