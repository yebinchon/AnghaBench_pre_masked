
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int shift; int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; int address; } ;
struct ad5791_state {int vref_mv; int vref_neg_mv; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ad5791_state*,int ,int*) ;
 int FUNC_1 (int,int) ;
 struct ad5791_state* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_4,
      struct iio_chan_spec const *VAR_5,
      int *VAR_6,
      int *VAR_7,
      long VAR_8)
{
 struct ad5791_state *VAR_9 = FUNC_2(VAR_4);
 u64 VAR_10;
 int VAR_11;

 switch (VAR_8) {
 case 129:
  VAR_11 = FUNC_0(VAR_9, VAR_5->address, VAR_6);
  if (VAR_11)
   return VAR_11;
  *VAR_6 &= VAR_0;
  *VAR_6 >>= VAR_5->scan_type.shift;
  return VAR_3;
 case 128:
  *VAR_6 = VAR_9->vref_mv;
  *VAR_7 = (1 << VAR_5->scan_type.realbits) - 1;
  return VAR_2;
 case 130:
  VAR_10 = (((u64)VAR_9->vref_neg_mv) << VAR_5->scan_type.realbits);
  FUNC_1(VAR_10, VAR_9->vref_mv);
  *VAR_6 = -VAR_10;
  return VAR_3;
 default:
  return -VAR_1;
 }

}
