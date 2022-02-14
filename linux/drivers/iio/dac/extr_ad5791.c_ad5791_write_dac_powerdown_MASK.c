
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct ad5791_state {int ctrl; scalar_t__ pwr_down_mode; int pwr_down; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ad5791_state*,int ,int) ;
 struct ad5791_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char const*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct iio_dev *VAR_5,
  uintptr_t VAR_6, const struct iio_chan_spec *VAR_7, const char *VAR_8,
  size_t VAR_9)
{
 bool VAR_10;
 int VAR_11;
 struct ad5791_state *VAR_12 = FUNC_1(VAR_5);

 VAR_11 = FUNC_2(VAR_8, &VAR_10);
 if (VAR_11)
  return VAR_11;

 if (!VAR_10) {
  VAR_12->ctrl &= ~(VAR_2 | VAR_1);
 } else {
  if (VAR_12->pwr_down_mode == VAR_4)
   VAR_12->ctrl |= VAR_2;
  else if (VAR_12->pwr_down_mode == VAR_3)
   VAR_12->ctrl |= VAR_1;
 }
 VAR_12->pwr_down = VAR_10;

 VAR_11 = FUNC_0(VAR_12, VAR_0, VAR_12->ctrl);

 return VAR_11 ? VAR_11 : VAR_9;
}
