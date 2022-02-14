
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mcp320x {int lock; TYPE_1__* chip_info; int reg; int spi; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int differential; int address; } ;
struct TYPE_4__ {int driver_data; } ;
struct TYPE_3__ {int resolution; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct mcp320x* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct mcp320x*,int ,int ,int,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_3,
       struct iio_chan_spec const *VAR_4, int *VAR_5,
       int *VAR_6, long VAR_7)
{
 struct mcp320x *VAR_8 = FUNC_0(VAR_3);
 int VAR_9 = -VAR_0;
 int VAR_10 = 0;

 FUNC_2(&VAR_8->lock);

 VAR_10 = FUNC_5(VAR_8->spi)->driver_data;

 switch (VAR_7) {
 case 129:
  VAR_9 = FUNC_1(VAR_8, VAR_4->address,
   VAR_4->differential, VAR_10, VAR_5);
  if (VAR_9 < 0)
   goto out;

  VAR_9 = VAR_2;
  break;

 case 128:
  VAR_9 = FUNC_4(VAR_8->reg);
  if (VAR_9 < 0)
   goto out;


  *VAR_5 = VAR_9 / 1000;
  *VAR_6 = VAR_8->chip_info->resolution;
  VAR_9 = VAR_1;
  break;
 }

out:
 FUNC_3(&VAR_8->lock);

 return VAR_9;
}
