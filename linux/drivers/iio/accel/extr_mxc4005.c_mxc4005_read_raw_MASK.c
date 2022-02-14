
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxc4005_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int shift; int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; int address; int type; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iio_dev*) ;
 struct mxc4005_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct mxc4005_data*,int ) ;
 int FUNC_3 (struct mxc4005_data*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_4,
       struct iio_chan_spec const *VAR_5,
       int *VAR_6, int *VAR_7, long VAR_8)
{
 struct mxc4005_data *VAR_9 = FUNC_1(VAR_4);
 int VAR_10;

 switch (VAR_8) {
 case 129:
  switch (VAR_5->type) {
  case 130:
   if (FUNC_0(VAR_4))
    return -VAR_0;

   VAR_10 = FUNC_2(VAR_9, VAR_5->address);
   if (VAR_10 < 0)
    return VAR_10;
   *VAR_6 = FUNC_4(VAR_10 >> VAR_5->scan_type.shift,
          VAR_5->scan_type.realbits - 1);
   return VAR_2;
  default:
   return -VAR_1;
  }
 case 128:
  VAR_10 = FUNC_3(VAR_9);
  if (VAR_10 < 0)
   return VAR_10;

  *VAR_6 = 0;
  *VAR_7 = VAR_10;
  return VAR_3;
 default:
  return -VAR_1;
 }
}
