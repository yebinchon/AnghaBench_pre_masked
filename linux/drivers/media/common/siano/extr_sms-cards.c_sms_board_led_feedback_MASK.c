
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_device_t {int dummy; } ;
struct sms_board {int led_hi; int led_lo; } ;



 int VAR_0 ;
 int VAR_1 ;
 struct sms_board* FUNC_0 (int) ;
 int FUNC_1 (struct smscore_device_t*,int ,int) ;
 int FUNC_2 (struct smscore_device_t*) ;
 int FUNC_3 (struct smscore_device_t*,int) ;

int FUNC_4(struct smscore_device_t *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_2(VAR_2);
 struct sms_board *VAR_5 = FUNC_0(VAR_4);


 if (FUNC_3(VAR_2, -1) == VAR_3)
  return 0;

 switch (VAR_4) {
 case 128:
  FUNC_1(VAR_2,
        VAR_5->led_lo, (VAR_3 & VAR_1) ? 1 : 0);
  FUNC_1(VAR_2,
        VAR_5->led_hi, (VAR_3 & VAR_0) ? 1 : 0);

  FUNC_3(VAR_2, VAR_3);
  break;
 }
 return 0;
}
