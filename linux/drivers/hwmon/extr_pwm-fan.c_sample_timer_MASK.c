
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timer_list {int dummy; } ;
struct pwm_fan_ctx {int pulses_per_revolution; int rpm; int rpm_timer; int sample_start; int pulses; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 struct pwm_fan_ctx* VAR_1 ;
 int FUNC_2 (int,int) ;
 struct pwm_fan_ctx* FUNC_3 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_4)
{
 struct pwm_fan_ctx *VAR_5 = FUNC_3(VAR_5, VAR_4, VAR_3);
 int VAR_6;
 u64 VAR_7;

 VAR_6 = FUNC_0(&VAR_5->pulses);
 FUNC_1(VAR_6, &VAR_5->pulses);
 VAR_7 = (u64)VAR_6 * FUNC_5(FUNC_4(), VAR_5->sample_start) * 60;
 FUNC_2(VAR_7, VAR_5->pulses_per_revolution * 1000);
 VAR_5->rpm = VAR_7;

 VAR_5->sample_start = FUNC_4();
 FUNC_6(&VAR_5->rpm_timer, VAR_2 + VAR_0);
}
