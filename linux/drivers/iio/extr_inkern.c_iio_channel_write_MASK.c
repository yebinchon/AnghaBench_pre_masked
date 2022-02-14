
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_channel {int channel; TYPE_2__* indio_dev; } ;
typedef enum iio_chan_info_enum { ____Placeholder_iio_chan_info_enum } iio_chan_info_enum ;
struct TYPE_4__ {TYPE_1__* info; } ;
struct TYPE_3__ {int (* write_raw ) (TYPE_2__*,int ,int,int,int) ;} ;


 int FUNC_0 (TYPE_2__*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct iio_channel *VAR_0, int VAR_1, int VAR_2,
        enum iio_chan_info_enum VAR_3)
{
 return VAR_0->indio_dev->info->write_raw(VAR_0->indio_dev,
      VAR_0->channel, VAR_1, VAR_2, VAR_3);
}
