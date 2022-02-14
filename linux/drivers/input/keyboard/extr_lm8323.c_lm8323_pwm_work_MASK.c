
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct work_struct {int dummy; } ;
struct lm8323_pwm {scalar_t__ desired_brightness; scalar_t__ brightness; int fade_time; int lock; scalar_t__ running; } ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct lm8323_pwm*,int,int,int *) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct lm8323_pwm* FUNC_6 (struct work_struct*) ;

__attribute__((used)) static void FUNC_7(struct work_struct *VAR_0)
{
 struct lm8323_pwm *VAR_1 = FUNC_6(VAR_0);
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 u16 VAR_8[3];
 int VAR_9 = 0;

 FUNC_4(&VAR_1->lock);







 if (VAR_1->running || VAR_1->desired_brightness == VAR_1->brightness)
  goto out;

 VAR_7 = (VAR_1->desired_brightness == 0);
 VAR_6 = (VAR_1->desired_brightness > VAR_1->brightness);
 VAR_4 = FUNC_1(VAR_1->desired_brightness - VAR_1->brightness);





 if ((VAR_1->fade_time / VAR_4) > (32768 / 512)) {
  VAR_2 = 1;
  VAR_5 = 32768 / 512;
 } else {
  VAR_2 = 0;
  VAR_5 = 32768 / 16;
 }

 VAR_3 = (VAR_5 * VAR_1->fade_time) / (VAR_4 * 1000);

 if (VAR_3 == 0)
  VAR_3 = 1;
 else if (VAR_3 > 63)
  VAR_3 = 63;

 while (VAR_4) {
  int VAR_10;

  VAR_10 = FUNC_3(126, VAR_4);
  VAR_8[VAR_9++] = FUNC_0(VAR_2, VAR_3, VAR_10, VAR_6);
  VAR_4 -= VAR_10;
 }

 FUNC_2(VAR_1, VAR_7, VAR_9, VAR_8);
 VAR_1->brightness = VAR_1->desired_brightness;

 out:
 FUNC_5(&VAR_1->lock);
}
