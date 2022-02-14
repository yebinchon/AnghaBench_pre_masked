
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct clock_event_device*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct clock_event_device*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct clock_event_device *VAR_5 = VAR_4;
 int VAR_6 = FUNC_3();


 FUNC_5(FUNC_0(VAR_6), VAR_2 + VAR_1);

 if (FUNC_1(VAR_5))
  FUNC_2(VAR_6);

 VAR_5->event_handler(VAR_5);

 return VAR_0;
}
