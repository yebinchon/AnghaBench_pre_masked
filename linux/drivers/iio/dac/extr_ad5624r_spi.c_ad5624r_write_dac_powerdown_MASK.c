
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct ad5624r_state {int pwr_down_mask; int pwr_down_mode; int us; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,int) ;
 struct ad5624r_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char const*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct iio_dev *VAR_1,
 uintptr_t VAR_2, const struct iio_chan_spec *VAR_3, const char *VAR_4,
 size_t VAR_5)
{
 bool VAR_6;
 int VAR_7;
 struct ad5624r_state *VAR_8 = FUNC_1(VAR_1);

 VAR_7 = FUNC_2(VAR_4, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_6)
  VAR_8->pwr_down_mask |= (1 << VAR_3->channel);
 else
  VAR_8->pwr_down_mask &= ~(1 << VAR_3->channel);

 VAR_7 = FUNC_0(VAR_8->us, VAR_0, 0,
    (VAR_8->pwr_down_mode << 4) |
    VAR_8->pwr_down_mask, 16);

 return VAR_7 ? VAR_7 : VAR_5;
}
