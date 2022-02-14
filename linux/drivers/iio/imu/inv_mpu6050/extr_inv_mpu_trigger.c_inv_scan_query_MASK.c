
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gyro_fifo_enable; int accl_fifo_enable; } ;
struct inv_mpu6050_state {TYPE_1__ chip_config; } ;
struct iio_dev {int active_scan_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct inv_mpu6050_state* FUNC_0 (struct iio_dev*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct iio_dev *VAR_6)
{
 struct inv_mpu6050_state *VAR_7 = FUNC_0(VAR_6);

 VAR_7->chip_config.gyro_fifo_enable =
  FUNC_1(VAR_3,
    VAR_6->active_scan_mask) ||
  FUNC_1(VAR_4,
    VAR_6->active_scan_mask) ||
  FUNC_1(VAR_5,
    VAR_6->active_scan_mask);

 VAR_7->chip_config.accl_fifo_enable =
  FUNC_1(VAR_0,
    VAR_6->active_scan_mask) ||
  FUNC_1(VAR_1,
    VAR_6->active_scan_mask) ||
  FUNC_1(VAR_2,
    VAR_6->active_scan_mask);
}
