
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kxsd9_state {int dev; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 long VAR_1 ;
 struct kxsd9_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
      struct iio_chan_spec const *VAR_3,
      int VAR_4,
      int VAR_5,
      long VAR_6)
{
 int VAR_7 = -VAR_0;
 struct kxsd9_state *VAR_8 = FUNC_0(VAR_2);

 FUNC_2(VAR_8->dev);

 if (VAR_6 == VAR_1) {

  if (VAR_4)
   return -VAR_0;
  VAR_7 = FUNC_1(VAR_2, VAR_5);
 }

 FUNC_3(VAR_8->dev);
 FUNC_4(VAR_8->dev);

 return VAR_7;
}
