
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {unsigned int* active_scan_mask; int masklength; } ;
struct adxl372_state {int fifo_set_size; int watermark; int fifo_mode; int fifo_format; } ;
struct TYPE_3__ {unsigned int bits; int fifo_format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (struct adxl372_state*) ;
 int FUNC_2 (struct adxl372_state*,int ,int ) ;
 int FUNC_3 (unsigned int*,int ) ;
 struct adxl372_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_6)
{
 struct adxl372_state *VAR_7 = FUNC_4(VAR_6);
 unsigned int VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_5(VAR_6);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_7, VAR_3, 0);
 if (VAR_10 < 0)
  goto err;

 VAR_8 = *VAR_6->active_scan_mask;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_5); VAR_9++) {
  if (VAR_8 == VAR_5[VAR_9].bits)
   break;
 }

 if (VAR_9 == FUNC_0(VAR_5)) {
  VAR_10 = -VAR_4;
  goto err;
 }

 VAR_7->fifo_format = VAR_5[VAR_9].fifo_format;
 VAR_7->fifo_set_size = FUNC_3(VAR_6->active_scan_mask,
       VAR_6->masklength);






 if ((VAR_7->watermark * VAR_7->fifo_set_size) > VAR_1)
  VAR_7->watermark = (VAR_1 / VAR_7->fifo_set_size);

 VAR_7->fifo_mode = VAR_2;

 VAR_10 = FUNC_1(VAR_7);
 if (VAR_10 < 0) {
  VAR_7->fifo_mode = VAR_0;
  FUNC_2(VAR_7, 0, 0);
  goto err;
 }

 return 0;

err:
 FUNC_6(VAR_6);
 return VAR_10;
}
