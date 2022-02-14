
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_set_singleshot_timer {scalar_t__ flags; int timeout_abs_ns; } ;
struct clock_event_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,struct vcpu_set_singleshot_timer*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct clock_event_device*) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(unsigned long VAR_1,
         struct clock_event_device *VAR_2)
{
 int VAR_3 = FUNC_5();
 struct vcpu_set_singleshot_timer VAR_4;
 int VAR_5;

 FUNC_2(!FUNC_3(VAR_2));

 VAR_4.timeout_abs_ns = FUNC_4(VAR_1);

 VAR_4.flags = 0;

 VAR_5 = FUNC_1(VAR_0, FUNC_6(VAR_3),
     &VAR_4);
 FUNC_0(VAR_5 != 0);

 return VAR_5;
}
