
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc2632_state {int powerdown_cache_mask; int spi_dev; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct ltc2632_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int,int ,int ) ;
 int FUNC_2 (char const*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct iio_dev *VAR_1,
        uintptr_t VAR_2,
        const struct iio_chan_spec *VAR_3,
        const char *VAR_4,
        size_t VAR_5)
{
 bool VAR_6;
 int VAR_7;
 struct ltc2632_state *VAR_8 = FUNC_0(VAR_1);

 VAR_7 = FUNC_2(VAR_4, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_6)
  VAR_8->powerdown_cache_mask |= (1 << VAR_3->channel);
 else
  VAR_8->powerdown_cache_mask &= ~(1 << VAR_3->channel);

 VAR_7 = FUNC_1(VAR_8->spi_dev,
    VAR_0,
    VAR_3->channel, 0, 0);

 return VAR_7 ? VAR_7 : VAR_5;
}
