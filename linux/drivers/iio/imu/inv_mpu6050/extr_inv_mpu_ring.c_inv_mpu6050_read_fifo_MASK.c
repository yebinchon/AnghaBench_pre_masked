
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct TYPE_4__ {int accl_fifo_enable; int gyro_fifo_enable; } ;
struct inv_mpu6050_state {scalar_t__ chip_type; int lock; scalar_t__ skip_samples; TYPE_3__* reg; int map; TYPE_2__* hw; TYPE_1__ chip_config; } ;
struct iio_poll_func {int timestamp; struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
typedef int s64 ;
typedef int irqreturn_t ;
struct TYPE_6__ {int fifo_r_w; int fifo_count_h; int int_status; } ;
struct TYPE_5__ {size_t fifo_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 size_t FUNC_2 (int *) ;
 struct inv_mpu6050_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inv_mpu6050_state*) ;
 int FUNC_7 (struct inv_mpu6050_state*,int ,size_t) ;
 int FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int *,size_t) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int*) ;

irqreturn_t FUNC_14(int VAR_7, void *VAR_8)
{
 struct iio_poll_func *VAR_9 = VAR_8;
 struct iio_dev *VAR_10 = VAR_9->indio_dev;
 struct inv_mpu6050_state *VAR_11 = FUNC_3(VAR_10);
 size_t VAR_12;
 int VAR_13;
 u8 VAR_14[VAR_5];
 u16 VAR_15;
 s64 VAR_16;
 int VAR_17;
 size_t VAR_18, VAR_19;

 FUNC_9(&VAR_11->lock);


 VAR_13 = FUNC_13(VAR_11->map, VAR_11->reg->int_status, &VAR_17);
 if (VAR_13) {
  FUNC_0(FUNC_12(VAR_11->map),
   "failed to ack interrupt\n");
  goto flush_fifo;
 }
 if (!(VAR_17 & VAR_2)) {
  FUNC_1(FUNC_12(VAR_11->map),
   "spurious interrupt with status 0x%x\n", VAR_17);
  goto end_session;
 }

 if (!(VAR_11->chip_config.accl_fifo_enable |
  VAR_11->chip_config.gyro_fifo_enable))
  goto end_session;
 VAR_12 = 0;
 if (VAR_11->chip_config.accl_fifo_enable)
  VAR_12 += VAR_3;

 if (VAR_11->chip_config.gyro_fifo_enable)
  VAR_12 += VAR_3;

 if (VAR_11->chip_type == VAR_0)
  VAR_12 += VAR_1;





 VAR_13 = FUNC_11(VAR_11->map, VAR_11->reg->fifo_count_h, VAR_14,
      VAR_4);
 if (VAR_13)
  goto end_session;
 VAR_15 = FUNC_2(&VAR_14[0]);






 VAR_19 = 3 * VAR_12;
 if (VAR_15 >= VAR_11->hw->fifo_size - VAR_19) {
  FUNC_1(FUNC_12(VAR_11->map), "fifo overflow reset\n");
  goto flush_fifo;
 }


 VAR_19 = VAR_15 / VAR_12;
 FUNC_7(VAR_11, VAR_9->timestamp, VAR_19);
 for (VAR_18 = 0; VAR_18 < VAR_19; ++VAR_18) {
  VAR_13 = FUNC_11(VAR_11->map, VAR_11->reg->fifo_r_w,
       VAR_14, VAR_12);
  if (VAR_13)
   goto flush_fifo;

  if (VAR_11->skip_samples) {
   VAR_11->skip_samples--;
   continue;
  }
  VAR_16 = FUNC_6(VAR_11);
  FUNC_4(VAR_10, VAR_14, VAR_16);
 }

end_session:
 FUNC_10(&VAR_11->lock);
 FUNC_5(VAR_10->trig);

 return VAR_6;

flush_fifo:

 FUNC_8(VAR_10);
 FUNC_10(&VAR_11->lock);
 FUNC_5(VAR_10->trig);

 return VAR_6;
}
