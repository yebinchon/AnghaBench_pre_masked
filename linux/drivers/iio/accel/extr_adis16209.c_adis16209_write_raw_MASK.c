
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; size_t scan_index; } ;
struct adis {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

 long VAR_1 ;

 int ** VAR_2 ;
 int FUNC_1 (struct adis*,int ,int) ;
 struct adis* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
          struct iio_chan_spec const *VAR_4,
          int VAR_5,
          int VAR_6,
          long VAR_7)
{
 struct adis *VAR_8 = FUNC_2(VAR_3);
 int VAR_9;

 if (VAR_7 != VAR_1)
  return -VAR_0;

 switch (VAR_4->type) {
 case 129:
 case 128:
  VAR_9 = FUNC_0(13, 0);
  break;
 default:
  return -VAR_0;
 }

 return FUNC_1(VAR_8, VAR_2[VAR_4->scan_index][0],
     VAR_5 & VAR_9);
}
