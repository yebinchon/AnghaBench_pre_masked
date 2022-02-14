
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {int address; TYPE_1__ scan_type; } ;
struct ad7923_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int) ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ad7923_state*) ;
 int FUNC_2 (struct ad7923_state*,int) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct ad7923_state* FUNC_5 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_4,
      struct iio_chan_spec const *VAR_5,
      int *VAR_6,
      int *VAR_7,
      long VAR_8)
{
 int VAR_9;
 struct ad7923_state *VAR_10 = FUNC_5(VAR_4);

 switch (VAR_8) {
 case 129:
  VAR_9 = FUNC_3(VAR_4);
  if (VAR_9)
   return VAR_9;
  VAR_9 = FUNC_2(VAR_10, VAR_5->address);
  FUNC_4(VAR_4);

  if (VAR_9 < 0)
   return VAR_9;

  if (VAR_5->address == FUNC_0(VAR_9, 12, 4))
   *VAR_6 = FUNC_0(VAR_9, 0, 12);
  else
   return -VAR_1;

  return VAR_3;
 case 128:
  VAR_9 = FUNC_1(VAR_10);
  if (VAR_9 < 0)
   return VAR_9;
  *VAR_6 = VAR_9;
  *VAR_7 = VAR_5->scan_type.realbits;
  return VAR_2;
 }
 return -VAR_0;
}
