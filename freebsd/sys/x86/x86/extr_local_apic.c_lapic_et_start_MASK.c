
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lapic {int la_timer_period; } ;
struct eventtimer {int et_frequency; } ;
typedef int sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct eventtimer*,struct lapic*,int ) ;
 int FUNC_2 (struct lapic*) ;
 int FUNC_3 (struct lapic*) ;
 int FUNC_4 (struct lapic*) ;
 scalar_t__ VAR_4 ;
 struct lapic* VAR_5 ;

__attribute__((used)) static int
FUNC_5(struct eventtimer *VAR_6, sbintime_t VAR_7, sbintime_t VAR_8)
{
 struct lapic *VAR_9;

 VAR_9 = &VAR_5[FUNC_0(VAR_3)];
 if (VAR_8 != 0) {
  FUNC_1(VAR_6, VAR_9, VAR_2);
  VAR_9->la_timer_period = ((uint32_t)VAR_6->et_frequency * VAR_8) >>
      32;
  FUNC_4(VAR_9);
 } else if (VAR_4) {
  FUNC_1(VAR_6, VAR_9, VAR_0);
  VAR_9->la_timer_period = (VAR_6->et_frequency * VAR_7) >> 32;
  FUNC_2(VAR_9);
 } else {
  FUNC_1(VAR_6, VAR_9, VAR_1);
  VAR_9->la_timer_period = ((uint32_t)VAR_6->et_frequency * VAR_7) >>
      32;
  FUNC_3(VAR_9);
 }
 return (0);
}
