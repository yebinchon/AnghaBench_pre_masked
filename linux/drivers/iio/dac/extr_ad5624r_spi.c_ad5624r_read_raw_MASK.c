
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;
struct ad5624r_state {int vref_mv; } ;


 int VAR_0 ;

 int VAR_1 ;
 struct ad5624r_state* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_2,
      struct iio_chan_spec const *VAR_3,
      int *VAR_4,
      int *VAR_5,
      long VAR_6)
{
 struct ad5624r_state *VAR_7 = FUNC_0(VAR_2);

 switch (VAR_6) {
 case 128:
  *VAR_4 = VAR_7->vref_mv;
  *VAR_5 = VAR_3->scan_type.realbits;
  return VAR_1;
 }
 return -VAR_0;
}
