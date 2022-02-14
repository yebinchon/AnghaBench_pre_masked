
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsc2007_iio {struct tsc2007* ts; } ;
struct tsc2007 {int mlock; } ;
struct ts_event {void* z2; void* z1; void* x; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct tsc2007_iio* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tsc2007*,struct ts_event*) ;
 int VAR_12 ;
 int FUNC_5 (struct tsc2007*) ;
 void* FUNC_6 (struct tsc2007*,int) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_13,
       struct iio_chan_spec const *VAR_14,
       int *VAR_15, int *VAR_16, long VAR_17)
{
 struct tsc2007_iio *VAR_18 = FUNC_1(VAR_13);
 struct tsc2007 *VAR_19 = VAR_18->ts;
 int VAR_20 = VAR_14->channel;
 int VAR_21 = 0;

 if (VAR_20 >= FUNC_0(VAR_12))
  return -VAR_1;

 if (VAR_17 != VAR_2)
  return -VAR_1;

 FUNC_2(&VAR_19->mlock);

 switch (VAR_14->channel) {
 case 0:
  *VAR_15 = FUNC_6(VAR_19, VAR_5);
  break;
 case 1:
  *VAR_15 = FUNC_6(VAR_19, VAR_6);
  break;
 case 2:
  *VAR_15 = FUNC_6(VAR_19, VAR_7);
  break;
 case 3:
  *VAR_15 = FUNC_6(VAR_19, VAR_8);
  break;
 case 4:
  *VAR_15 = FUNC_6(VAR_19, (VAR_0 | VAR_9));
  break;
 case 5: {
  struct ts_event VAR_22;

  VAR_22.x = FUNC_6(VAR_19, VAR_5);
  VAR_22.z1 = FUNC_6(VAR_19, VAR_7);
  VAR_22.z2 = FUNC_6(VAR_19, VAR_8);
  *VAR_15 = FUNC_4(VAR_19, &VAR_22);
  break;
 }
 case 6:
  *VAR_15 = FUNC_5(VAR_19);
  break;
 case 7:
  *VAR_15 = FUNC_6(VAR_19,
        (VAR_0 | VAR_10));
  break;
 case 8:
  *VAR_15 = FUNC_6(VAR_19,
        (VAR_0 | VAR_11));
  break;
 }


 FUNC_6(VAR_19, VAR_4);

 FUNC_3(&VAR_19->mlock);

 VAR_21 = VAR_3;

 return VAR_21;
}
