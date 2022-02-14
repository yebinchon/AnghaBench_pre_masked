
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpa2326_private {scalar_t__ irq; } ;
struct iio_dev {int dummy; } ;
typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct zpa2326_private* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int ) ;
 int FUNC_4 (struct iio_dev*,scalar_t__) ;
 int FUNC_5 (struct iio_dev*,int,int*) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (struct iio_dev*,struct zpa2326_private*) ;

__attribute__((used)) static int FUNC_11(struct iio_dev *VAR_1,
      enum iio_chan_type VAR_2,
      int *VAR_3)
{
 int VAR_4;
 struct zpa2326_private *VAR_5;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_7(VAR_1);
 if (VAR_4 < 0)
  goto release;

 VAR_5 = FUNC_2(VAR_1);

 if (VAR_4 > 0) {
  if (VAR_2 == VAR_0) {
   VAR_4 = FUNC_3(VAR_1, 0);
   if (VAR_4)
    goto suspend;
  }
 } else {





  VAR_4 = FUNC_4(VAR_1, VAR_5->irq);
  if (VAR_4)
   goto suspend;
 }


 VAR_4 = FUNC_8(VAR_1);
 if (VAR_4)
  goto suspend;


 if (VAR_5->irq > 0)
  VAR_4 = FUNC_10(VAR_1, VAR_5);
 else
  VAR_4 = FUNC_6(VAR_1);

 if (VAR_4)
  goto suspend;


 VAR_4 = FUNC_5(VAR_1, VAR_2, VAR_3);

suspend:
 FUNC_9(VAR_1);
release:
 FUNC_1(VAR_1);

 return VAR_4;
}
