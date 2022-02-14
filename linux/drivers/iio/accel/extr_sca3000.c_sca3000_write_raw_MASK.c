
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sca3000_state {int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;


 struct sca3000_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sca3000_state*,int) ;
 int FUNC_4 (struct sca3000_state*,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1,
        struct iio_chan_spec const *VAR_2,
        int VAR_3, int VAR_4, long VAR_5)
{
 struct sca3000_state *VAR_6 = FUNC_0(VAR_1);
 int VAR_7;

 switch (VAR_5) {
 case 128:
  if (VAR_4)
   return -VAR_0;
  FUNC_1(&VAR_6->lock);
  VAR_7 = FUNC_4(VAR_6, VAR_3);
  FUNC_2(&VAR_6->lock);
  return VAR_7;
 case 129:
  if (VAR_4)
   return -VAR_0;
  FUNC_1(&VAR_6->lock);
  VAR_7 = FUNC_3(VAR_6, VAR_3);
  FUNC_2(&VAR_6->lock);
  return VAR_7;
 default:
  return -VAR_0;
 }

 return VAR_7;
}
