
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; int address; } ;
struct ad7791_state {int mode; unsigned int filter; int reg; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int** VAR_7 ;
 int FUNC_0 (struct iio_dev*,struct iio_chan_spec const*,int*) ;
 struct ad7791_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_8,
 const struct iio_chan_spec *VAR_9, int *VAR_10, int *VAR_11, long VAR_12)
{
 struct ad7791_state *VAR_13 = FUNC_1(VAR_8);
 bool VAR_14 = !!(VAR_13->mode & VAR_2);
 unsigned int VAR_15;

 switch (VAR_12) {
 case 130:
  return FUNC_0(VAR_8, VAR_9, VAR_10);
 case 131:




  if (VAR_14)
   *VAR_10 = 0;
  else
   *VAR_10 = -(1 << (VAR_9->scan_type.realbits - 1));
  return VAR_5;
 case 128:

  if (VAR_9->address == VAR_0) {




   *VAR_10 = 1170 * 5;
  } else {
   int VAR_16;

   VAR_16 = FUNC_2(VAR_13->reg);
   if (VAR_16 < 0)
    return VAR_16;

   *VAR_10 = VAR_16 / 1000;
  }
  if (VAR_14)
   *VAR_11 = VAR_9->scan_type.realbits;
  else
   *VAR_11 = VAR_9->scan_type.realbits - 1;

  return VAR_4;
 case 129:
  VAR_15 = VAR_13->filter & VAR_1;
  *VAR_10 = VAR_7[VAR_15][0];
  *VAR_11 = VAR_7[VAR_15][1];
  return VAR_6;
 }

 return -VAR_3;
}
