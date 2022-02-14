
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct adxl372_state {int bw; int inact_time_ms; int act_time_ms; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (struct adxl372_state*,int ) ;
 int FUNC_3 (struct adxl372_state*,int) ;
 int FUNC_4 (struct adxl372_state*,int ) ;
 int FUNC_5 (struct adxl372_state*,int) ;
 struct adxl372_state* FUNC_6 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_3,
        struct iio_chan_spec const *VAR_4,
        int VAR_5, int VAR_6, long VAR_7)
{
 struct adxl372_state *VAR_8 = FUNC_6(VAR_3);
 int VAR_9, VAR_10, VAR_11;

 switch (VAR_7) {
 case 128:
  VAR_9 = FUNC_1(VAR_2,
     FUNC_0(VAR_2),
     VAR_5);
  VAR_11 = FUNC_5(VAR_8, VAR_9);
  if (VAR_11 < 0)
   return VAR_11;




  VAR_11 = FUNC_2(VAR_8, VAR_8->act_time_ms);
  if (VAR_11 < 0)
   return VAR_11;




  VAR_11 = FUNC_4(VAR_8, VAR_8->inact_time_ms);
  if (VAR_11 < 0)
   return VAR_11;




  if (VAR_8->bw > VAR_9)
   VAR_11 = FUNC_3(VAR_8, VAR_9);

  return VAR_11;
 case 129:
  VAR_10 = FUNC_1(VAR_1,
     FUNC_0(VAR_1),
     VAR_5);
  return FUNC_3(VAR_8, VAR_10);
 default:
  return -VAR_0;
 }
}
