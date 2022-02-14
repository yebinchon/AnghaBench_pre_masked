
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcp3911 {int lock; int vref; } ;
struct TYPE_2__ {int parent; } ;
struct iio_dev {TYPE_1__ dev; } ;
struct iio_chan_spec {int channel; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 struct mcp3911* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct mcp3911*,int ,int*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_4,
       struct iio_chan_spec const *VAR_5, int *VAR_6,
       int *VAR_7, long VAR_8)
{
 struct mcp3911 *VAR_9 = FUNC_3(VAR_4);
 int VAR_10 = -VAR_0;

 FUNC_5(&VAR_9->lock);
 switch (VAR_8) {
 case 129:
  VAR_10 = FUNC_4(VAR_9,
       FUNC_0(VAR_5->channel), VAR_6, 3);
  if (VAR_10)
   goto out;

  VAR_10 = VAR_2;
  break;

 case 130:
  VAR_10 = FUNC_4(VAR_9,
       FUNC_1(VAR_5->channel), VAR_6, 3);
  if (VAR_10)
   goto out;

  VAR_10 = VAR_2;
  break;

 case 128:
  if (VAR_9->vref) {
   VAR_10 = FUNC_7(VAR_9->vref);
   if (VAR_10 < 0) {
    FUNC_2(VAR_4->dev.parent,
     "failed to get vref voltage: %d\n",
           VAR_10);
    goto out;
   }

   *VAR_6 = VAR_10 / 1000;
  } else {
   *VAR_6 = VAR_3;
  }

  *VAR_7 = 24;
  VAR_10 = VAR_1;
  break;
 }

out:
 FUNC_6(&VAR_9->lock);
 return VAR_10;
}
