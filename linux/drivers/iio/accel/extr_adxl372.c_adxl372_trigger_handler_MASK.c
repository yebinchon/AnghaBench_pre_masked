
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
struct adxl372_state {scalar_t__ fifo_mode; int * fifo_buf; scalar_t__ fifo_set_size; int regmap; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct adxl372_state*,int *,int *,int*) ;
 struct adxl372_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct iio_poll_func *VAR_5 = VAR_4;
 struct iio_dev *VAR_6 = VAR_5->indio_dev;
 struct adxl372_state *VAR_7 = FUNC_2(VAR_6);
 u8 VAR_8, VAR_9;
 u16 VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = FUNC_1(VAR_7, &VAR_8, &VAR_9, &VAR_10);
 if (VAR_12 < 0)
  goto err;

 if (VAR_7->fifo_mode != VAR_0 &&
     FUNC_0(VAR_8)) {






  VAR_10 -= VAR_7->fifo_set_size;


  VAR_12 = FUNC_5(VAR_7->regmap, VAR_1,
     VAR_7->fifo_buf,
     VAR_10 * sizeof(u16));
  if (VAR_12 < 0)
   goto err;


  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11 += VAR_7->fifo_set_size)
   FUNC_3(VAR_6, &VAR_7->fifo_buf[VAR_11]);
 }
err:
 FUNC_4(VAR_6->trig);
 return VAR_2;
}
