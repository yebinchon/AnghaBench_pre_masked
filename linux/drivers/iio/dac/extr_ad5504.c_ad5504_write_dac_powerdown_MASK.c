
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct ad5504_state {int pwr_down_mask; int pwr_down_mode; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ad5504_state*,int ,int) ;
 struct ad5504_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (char const*,int*) ;

__attribute__((used)) static ssize_t FUNC_5(struct iio_dev *VAR_2,
 uintptr_t VAR_3, const struct iio_chan_spec *VAR_4, const char *VAR_5,
 size_t VAR_6)
{
 bool VAR_7;
 int VAR_8;
 struct ad5504_state *VAR_9 = FUNC_3(VAR_2);

 VAR_8 = FUNC_4(VAR_5, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7)
  VAR_9->pwr_down_mask |= (1 << VAR_4->channel);
 else
  VAR_9->pwr_down_mask &= ~(1 << VAR_4->channel);

 VAR_8 = FUNC_2(VAR_9, VAR_0,
    FUNC_1(VAR_9->pwr_down_mode) |
    FUNC_0(VAR_9->pwr_down_mask));


 FUNC_2(VAR_9, VAR_1, 0);

 return VAR_8 ? VAR_8 : VAR_6;
}
