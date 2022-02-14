
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; int type; int address; } ;
struct ad7298_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_1 (struct ad7298_state*) ;
 int FUNC_2 (struct ad7298_state*,int ) ;
 int FUNC_3 (struct ad7298_state*,int*) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct ad7298_state* FUNC_6 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_5,
      struct iio_chan_spec const *VAR_6,
      int *VAR_7,
      int *VAR_8,
      long VAR_9)
{
 int VAR_10;
 struct ad7298_state *VAR_11 = FUNC_6(VAR_5);

 switch (VAR_9) {
 case 131:
  VAR_10 = FUNC_4(VAR_5);
  if (VAR_10)
   return VAR_10;

  if (VAR_6->address == VAR_0)
   VAR_10 = FUNC_3(VAR_11, VAR_7);
  else
   VAR_10 = FUNC_2(VAR_11, VAR_6->address);

  FUNC_5(VAR_5);

  if (VAR_10 < 0)
   return VAR_10;

  if (VAR_6->address != VAR_0)
   *VAR_7 = VAR_10 & FUNC_0(VAR_6->scan_type.realbits - 1, 0);

  return VAR_4;
 case 130:
  switch (VAR_6->type) {
  case 128:
   *VAR_7 = FUNC_1(VAR_11);
   *VAR_8 = VAR_6->scan_type.realbits;
   return VAR_3;
  case 129:
   *VAR_7 = FUNC_1(VAR_11);
   *VAR_8 = 10;
   return VAR_2;
  default:
   return -VAR_1;
  }
 case 132:
  *VAR_7 = 1093 - 2732500 / FUNC_1(VAR_11);
  return VAR_4;
 }
 return -VAR_1;
}
