
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int mlock; } ;
struct iio_chan_spec {size_t channel; } ;
struct dac7612 {int* cache; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_1 (struct dac7612*,size_t,int) ;
 struct dac7612* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
        const struct iio_chan_spec *VAR_4,
        int VAR_5, int VAR_6, long VAR_7)
{
 struct dac7612 *VAR_8 = FUNC_2(VAR_3);
 int VAR_9;

 if (VAR_7 != VAR_2)
  return -VAR_1;

 if ((VAR_5 >= FUNC_0(VAR_0)) || VAR_5 < 0 || VAR_6)
  return -VAR_1;

 if (VAR_5 == VAR_8->cache[VAR_4->channel])
  return 0;

 FUNC_3(&VAR_3->mlock);
 VAR_9 = FUNC_1(VAR_8, VAR_4->channel, VAR_5);
 FUNC_4(&VAR_3->mlock);

 return VAR_9;
}
