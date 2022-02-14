
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int irq; int (* set_state_shutdown ) (struct clock_event_device*) ;} ;
struct mct_clock_event_device {scalar_t__ base; struct clock_event_device evt; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 struct mct_clock_event_device* FUNC_3 (int *,unsigned int) ;
 int VAR_5 ;
 int FUNC_4 (struct clock_event_device*) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_6)
{
 struct mct_clock_event_device *VAR_7 =
  FUNC_3(&VAR_5, VAR_6);
 struct clock_event_device *VAR_8 = &VAR_7->evt;

 VAR_8->set_state_shutdown(VAR_8);
 if (VAR_3 == VAR_0) {
  if (VAR_8->irq != -1)
   FUNC_0(VAR_8->irq);
  FUNC_2(0x1, VAR_7->base + VAR_2);
 } else {
  FUNC_1(VAR_4[VAR_1]);
 }
 return 0;
}
