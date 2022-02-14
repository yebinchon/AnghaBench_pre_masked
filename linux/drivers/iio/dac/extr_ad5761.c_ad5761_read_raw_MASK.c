
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct iio_dev {int dummy; } ;
struct TYPE_3__ {int shift; int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;
struct ad5761_state {int vref; size_t range; } ;
struct TYPE_4__ {int m; int c; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (struct iio_dev*,int ,int*) ;
 struct ad5761_state* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_5,
      struct iio_chan_spec const *VAR_6,
      int *VAR_7,
      int *VAR_8,
      long VAR_9)
{
 struct ad5761_state *VAR_10;
 int VAR_11;
 u16 VAR_12;

 switch (VAR_9) {
 case 129:
  VAR_11 = FUNC_0(VAR_5, VAR_0, &VAR_12);
  if (VAR_11)
   return VAR_11;
  *VAR_7 = VAR_12 >> VAR_6->scan_type.shift;
  return VAR_3;
 case 128:
  VAR_10 = FUNC_1(VAR_5);
  *VAR_7 = VAR_10->vref * VAR_4[VAR_10->range].m;
  *VAR_7 /= 10;
  *VAR_8 = VAR_6->scan_type.realbits;
  return VAR_2;
 case 130:
  VAR_10 = FUNC_1(VAR_5);
  *VAR_7 = -(1 << VAR_6->scan_type.realbits);
  *VAR_7 *= VAR_4[VAR_10->range].c;
  *VAR_7 /= VAR_4[VAR_10->range].m;
  return VAR_3;
 default:
  return -VAR_1;
 }
}
