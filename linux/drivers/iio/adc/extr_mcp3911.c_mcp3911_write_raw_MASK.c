
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcp3911 {int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;


 int VAR_0 ;

 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct mcp3911* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct mcp3911*,int ,int ,int ,int) ;
 int FUNC_3 (struct mcp3911*,int ,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_3,
       struct iio_chan_spec const *VAR_4, int VAR_5,
       int VAR_6, long VAR_7)
{
 struct mcp3911 *VAR_8 = FUNC_1(VAR_3);
 int VAR_9 = -VAR_0;

 FUNC_4(&VAR_8->lock);
 switch (VAR_7) {
 case 128:
  if (VAR_6 != 0) {
   VAR_9 = -VAR_0;
   goto out;
  }


  VAR_9 = FUNC_3(VAR_8, FUNC_0(VAR_4->channel), VAR_5,
        3);
  if (VAR_9)
   goto out;


  VAR_9 = FUNC_2(VAR_8, VAR_1,
    VAR_2,
    VAR_2, 2);
  break;
 }

out:
 FUNC_5(&VAR_8->lock);
 return VAR_9;
}
