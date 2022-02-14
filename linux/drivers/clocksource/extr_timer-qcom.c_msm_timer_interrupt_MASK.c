
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct clock_event_device*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct clock_event_device *VAR_6 = VAR_5;

 if (FUNC_0(VAR_6)) {
  u32 VAR_7 = FUNC_1(VAR_3 + VAR_1);
  VAR_7 &= ~VAR_2;
  FUNC_3(VAR_7, VAR_3 + VAR_1);
 }
 VAR_6->event_handler(VAR_6);
 return VAR_0;
}
