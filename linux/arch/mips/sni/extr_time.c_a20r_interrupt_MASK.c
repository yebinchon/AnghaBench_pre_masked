
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 () ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct clock_event_device *VAR_4 = VAR_3;

 *(volatile u8 *)VAR_0 = 0;
 FUNC_1();

 VAR_4->event_handler(VAR_4);

 return VAR_1;
}
