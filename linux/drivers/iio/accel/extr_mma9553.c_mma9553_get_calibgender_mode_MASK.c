
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int filter; } ;
struct mma9553_data {TYPE_1__ conf; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 struct mma9553_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
     const struct iio_chan_spec *VAR_2)
{
 struct mma9553_data *VAR_3 = FUNC_0(VAR_1);
 u8 VAR_4;

 VAR_4 = FUNC_1(VAR_3->conf.filter, VAR_0);




 return !VAR_4;
}
