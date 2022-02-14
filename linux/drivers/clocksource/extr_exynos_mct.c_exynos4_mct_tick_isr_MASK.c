
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
struct mct_clock_event_device {struct clock_event_device evt; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (struct mct_clock_event_device*) ;
 int FUNC_2 (struct mct_clock_event_device*) ;
 int FUNC_3 (struct clock_event_device*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct mct_clock_event_device *VAR_3 = VAR_2;
 struct clock_event_device *VAR_4 = &VAR_3->evt;






 if (!FUNC_0(&VAR_3->evt))
  FUNC_2(VAR_3);

 FUNC_1(VAR_3);

 VAR_4->event_handler(VAR_4);

 return VAR_0;
}
