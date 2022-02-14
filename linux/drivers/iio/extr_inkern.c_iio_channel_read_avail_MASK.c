
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_channel {int channel; TYPE_2__* indio_dev; } ;
typedef enum iio_chan_info_enum { ____Placeholder_iio_chan_info_enum } iio_chan_info_enum ;
struct TYPE_4__ {TYPE_1__* info; } ;
struct TYPE_3__ {int (* read_avail ) (TYPE_2__*,int ,int const**,int*,int*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*,int ,int const**,int*,int*,int) ;

__attribute__((used)) static int FUNC_2(struct iio_channel *VAR_1,
      const int **VAR_2, int *VAR_3, int *VAR_4,
      enum iio_chan_info_enum VAR_5)
{
 if (!FUNC_0(VAR_1->channel, VAR_5))
  return -VAR_0;

 return VAR_1->indio_dev->info->read_avail(VAR_1->indio_dev, VAR_1->channel,
       VAR_2, VAR_3, VAR_4, VAR_5);
}
