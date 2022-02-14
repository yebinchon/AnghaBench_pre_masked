
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {scalar_t__* active_scan_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int ) ;
 int FUNC_3 (struct iio_dev*,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_1,
      (u8)VAR_1->active_scan_mask[0]);
 if (VAR_2 < 0)
  goto st_accel_buffer_predisable;

 VAR_2 = FUNC_3(VAR_1, 1);
 if (VAR_2 < 0)
  goto st_accel_buffer_enable_all_axis;

 return 0;

st_accel_buffer_enable_all_axis:
 FUNC_2(VAR_1, VAR_0);
st_accel_buffer_predisable:
 FUNC_1(VAR_1);
 return VAR_2;
}
