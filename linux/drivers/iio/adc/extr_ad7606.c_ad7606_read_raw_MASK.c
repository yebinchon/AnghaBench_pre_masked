
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
struct ad7606_state {int* scale_avail; size_t* range; int oversampling; int sw_mode_en; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iio_dev*,int) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct ad7606_state* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3,
      struct iio_chan_spec const *VAR_4,
      int *VAR_5,
      int *VAR_6,
      long VAR_7)
{
 int VAR_8, VAR_9 = 0;
 struct ad7606_state *VAR_10 = FUNC_3(VAR_3);

 switch (VAR_7) {
 case 129:
  VAR_8 = FUNC_1(VAR_3);
  if (VAR_8)
   return VAR_8;

  VAR_8 = FUNC_0(VAR_3, VAR_4->address);
  FUNC_2(VAR_3);

  if (VAR_8 < 0)
   return VAR_8;
  *VAR_5 = (short)VAR_8;
  return VAR_1;
 case 128:
  if (VAR_10->sw_mode_en)
   VAR_9 = VAR_4->address;
  *VAR_5 = 0;
  *VAR_6 = VAR_10->scale_avail[VAR_10->range[VAR_9]];
  return VAR_2;
 case 130:
  *VAR_5 = VAR_10->oversampling;
  return VAR_1;
 }
 return -VAR_0;
}
