
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;
struct adc12138 {int vref_n; int vref_p; int lock; } ;
typedef int __be16 ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct adc12138*,struct iio_chan_spec const*,int *) ;
 int FUNC_2 (int ) ;
 struct adc12138* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_3,
        struct iio_chan_spec const *VAR_4, int *VAR_5,
        int *VAR_6, long VAR_7)
{
 struct adc12138 *VAR_8 = FUNC_3(VAR_3);
 int VAR_9;
 __be16 VAR_10;

 switch (VAR_7) {
 case 129:
  FUNC_4(&VAR_8->lock);
  VAR_9 = FUNC_1(VAR_8, VAR_4, &VAR_10);
  FUNC_5(&VAR_8->lock);
  if (VAR_9)
   return VAR_9;

  *VAR_5 = FUNC_7(FUNC_2(VAR_10) >> 3, 12);

  return VAR_2;
 case 128:
  VAR_9 = FUNC_6(VAR_8->vref_p);
  if (VAR_9 < 0)
   return VAR_9;
  *VAR_5 = VAR_9;

  if (!FUNC_0(VAR_8->vref_n)) {
   VAR_9 = FUNC_6(VAR_8->vref_n);
   if (VAR_9 < 0)
    return VAR_9;
   *VAR_5 -= VAR_9;
  }


  *VAR_5 /= 1000;
  *VAR_6 = VAR_4->scan_type.realbits - 1;

  return VAR_1;
 case 130:
  if (!FUNC_0(VAR_8->vref_n)) {
   *VAR_5 = FUNC_6(VAR_8->vref_n);
   if (*VAR_5 < 0)
    return *VAR_5;
  } else {
   *VAR_5 = 0;
  }


  *VAR_5 /= 1000;

  return VAR_2;
 }

 return -VAR_0;
}
