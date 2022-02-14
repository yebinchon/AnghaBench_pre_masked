
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int mlock; } ;
struct TYPE_3__ {unsigned int realbits; unsigned int shift; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;
struct ad5446_state {int pwr_down; unsigned int pwr_down_mode; unsigned int cached_val; TYPE_2__* chip_info; } ;
typedef int ssize_t ;
struct TYPE_4__ {int (* write ) (struct ad5446_state*,unsigned int) ;} ;


 struct ad5446_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int*) ;
 int FUNC_4 (struct ad5446_state*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_5(struct iio_dev *VAR_0,
         uintptr_t VAR_1,
         const struct iio_chan_spec *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct ad5446_state *VAR_5 = FUNC_0(VAR_0);
 unsigned int VAR_6;
 unsigned int VAR_7;
 bool VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_3, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_1(&VAR_0->mlock);
 VAR_5->pwr_down = VAR_8;

 if (VAR_5->pwr_down) {
  VAR_6 = VAR_2->scan_type.realbits + VAR_2->scan_type.shift;
  VAR_7 = VAR_5->pwr_down_mode << VAR_6;
 } else {
  VAR_7 = VAR_5->cached_val;
 }

 VAR_9 = VAR_5->chip_info->write(VAR_5, VAR_7);
 FUNC_2(&VAR_0->mlock);

 return VAR_9 ? VAR_9 : VAR_4;
}
