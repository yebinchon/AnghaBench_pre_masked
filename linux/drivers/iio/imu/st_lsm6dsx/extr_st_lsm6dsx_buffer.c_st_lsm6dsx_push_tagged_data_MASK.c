
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st_lsm6dsx_sensor {scalar_t__ ts_ref; } ;
struct st_lsm6dsx_hw {int enable_mask; struct iio_dev** iio_devs; } ;
struct iio_dev {int dummy; } ;
typedef scalar_t__ s64 ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;





 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 struct st_lsm6dsx_sensor* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int*,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct st_lsm6dsx_hw *VAR_6, u8 VAR_7,
       u8 *VAR_8, s64 VAR_9)
{
 struct st_lsm6dsx_sensor *VAR_10;
 struct iio_dev *VAR_11;







 switch (VAR_7) {
 case 128:
  VAR_11 = VAR_6->iio_devs[VAR_5];
  break;
 case 132:
  VAR_11 = VAR_6->iio_devs[VAR_1];
  break;
 case 131:
  if (VAR_6->enable_mask & FUNC_0(VAR_2))
   VAR_11 = VAR_6->iio_devs[VAR_2];
  else if (VAR_6->enable_mask & FUNC_0(VAR_3))
   VAR_11 = VAR_6->iio_devs[VAR_3];
  else
   VAR_11 = VAR_6->iio_devs[VAR_4];
  break;
 case 130:
  if ((VAR_6->enable_mask & FUNC_0(VAR_2)) &&
      (VAR_6->enable_mask & FUNC_0(VAR_3)))
   VAR_11 = VAR_6->iio_devs[VAR_3];
  else
   VAR_11 = VAR_6->iio_devs[VAR_4];
  break;
 case 129:
  VAR_11 = VAR_6->iio_devs[VAR_4];
  break;
 default:
  return -VAR_0;
 }

 VAR_10 = FUNC_1(VAR_11);
 FUNC_2(VAR_11, VAR_8,
        VAR_9 + VAR_10->ts_ref);

 return 0;
}
