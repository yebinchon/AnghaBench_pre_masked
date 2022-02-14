
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iio_chan_spec {int dummy; } ;
struct adc5_chip {int lock; int complete; scalar_t__ poll_eoc; } ;
struct adc5_channel_prop {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adc5_chip*,struct adc5_channel_prop*) ;
 int FUNC_1 (struct adc5_chip*) ;
 int FUNC_2 (struct adc5_chip*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct adc5_chip *VAR_1,
   struct adc5_channel_prop *VAR_2,
   struct iio_chan_spec const *VAR_3,
   u16 *VAR_4, u16 *VAR_5)
{
 int VAR_6;

 FUNC_3(&VAR_1->lock);

 VAR_6 = FUNC_0(VAR_1, VAR_2);
 if (VAR_6) {
  FUNC_6("ADC configure failed with %d\n", VAR_6);
  goto unlock;
 }

 if (VAR_1->poll_eoc) {
  VAR_6 = FUNC_1(VAR_1);
  if (VAR_6 < 0) {
   FUNC_6("EOC bit not set\n");
   goto unlock;
  }
 } else {
  VAR_6 = FUNC_7(&VAR_1->complete,
       VAR_0);
  if (!VAR_6) {
   FUNC_5("Did not get completion timeout.\n");
   VAR_6 = FUNC_1(VAR_1);
   if (VAR_6 < 0) {
    FUNC_6("EOC bit not set\n");
    goto unlock;
   }
  }
 }

 VAR_6 = FUNC_2(VAR_1, VAR_4);
unlock:
 FUNC_4(&VAR_1->lock);

 return VAR_6;
}
