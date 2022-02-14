
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct clock_event_device*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct clock_event_device *VAR_5 = VAR_4;

 FUNC_1(!(FUNC_2(VAR_2 + VAR_1) &
  FUNC_0(0)));


 FUNC_4(FUNC_0(0), VAR_2 + VAR_1);

 VAR_5->event_handler(VAR_5);

 return VAR_0;
}
