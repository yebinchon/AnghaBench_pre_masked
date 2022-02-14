
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct dw_apb_clock_event_device {int timer; } ;
struct clock_event_device {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,unsigned long,int ) ;
 struct dw_apb_clock_event_device* FUNC_2 (struct clock_event_device*) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_3,
      struct clock_event_device *VAR_4)
{
 u32 VAR_5;
 struct dw_apb_clock_event_device *VAR_6 = FUNC_2(VAR_4);


 VAR_5 = FUNC_0(&VAR_6->timer, VAR_1);
 VAR_5 &= ~VAR_0;
 FUNC_1(&VAR_6->timer, VAR_5, VAR_1);

 FUNC_1(&VAR_6->timer, VAR_3, VAR_2);
 VAR_5 |= VAR_0;
 FUNC_1(&VAR_6->timer, VAR_5, VAR_1);

 return 0;
}
