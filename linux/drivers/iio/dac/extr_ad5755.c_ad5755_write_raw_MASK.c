
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct ad5755_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ad5755_state*,struct iio_chan_spec const*,long,int,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct iio_dev*,unsigned int,int) ;
 struct ad5755_state* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1,
 const struct iio_chan_spec *VAR_2, int VAR_3, int VAR_4, long VAR_5)
{
 struct ad5755_state *VAR_6 = FUNC_2(VAR_1);
 unsigned int VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_6, VAR_2, VAR_5, 1,
     &VAR_8, &VAR_7, &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_3 <<= VAR_7;
 VAR_3 += VAR_9;

 if (VAR_3 < 0 || VAR_3 > 0xffff)
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_8, VAR_3);
}
