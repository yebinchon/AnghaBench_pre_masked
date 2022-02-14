
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_apb_clock_event_device {int timer; int (* eoi ) (int *) ;} ;
struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct dw_apb_clock_event_device* FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct clock_event_device*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct clock_event_device *VAR_4 = VAR_3;
 struct dw_apb_clock_event_device *VAR_5 = FUNC_0(VAR_4);

 if (!VAR_4->event_handler) {
  FUNC_1("Spurious APBT timer interrupt %d\n", VAR_2);
  return VAR_1;
 }

 if (VAR_5->eoi)
  VAR_5->eoi(&VAR_5->timer);

 VAR_4->event_handler(VAR_4);
 return VAR_0;
}
