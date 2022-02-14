
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int filter; } ;
struct mma9553_data {int mutex; TYPE_1__ conf; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mma9553_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct mma9553_data*,int ,int *,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3,
     const struct iio_chan_spec *VAR_4,
     unsigned int VAR_5)
{
 struct mma9553_data *VAR_6 = FUNC_0(VAR_3);
 u8 VAR_7 = !VAR_5;
 int VAR_8;

 if ((VAR_5 != 0) && (VAR_5 != 1))
  return -VAR_0;
 FUNC_2(&VAR_6->mutex);
 VAR_8 = FUNC_1(VAR_6, VAR_2,
     &VAR_6->conf.filter, VAR_7,
     VAR_1);
 FUNC_3(&VAR_6->mutex);

 return VAR_8;
}
