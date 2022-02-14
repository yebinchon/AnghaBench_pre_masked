
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;
struct ad7291_chip_info {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ad7291_chip_info*,int ,int*) ;
 int FUNC_1 (struct iio_chan_spec const*,int,int) ;
 struct ad7291_chip_info* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_4,
       const struct iio_chan_spec *VAR_5,
       enum iio_event_type VAR_6,
       enum iio_event_direction VAR_7,
       enum iio_event_info VAR_8,
       int *VAR_9, int *VAR_10)
{
 struct ad7291_chip_info *VAR_11 = FUNC_2(VAR_4);
 int VAR_12;
 u16 VAR_13;

 VAR_12 = FUNC_0(VAR_11, FUNC_1(VAR_5, VAR_7, VAR_8),
         &VAR_13);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_8 == VAR_1 || VAR_5->type == VAR_3)
  *VAR_9 = VAR_13 & VAR_0;

 else
  *VAR_9 = FUNC_3(VAR_13, 11);

 return VAR_2;
}
