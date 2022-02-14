
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct digicolor_timer {int timer_id; scalar_t__ base; } ;
struct clock_event_device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 struct digicolor_timer* FUNC_1 (struct clock_event_device*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct clock_event_device *VAR_1, u32 VAR_2)
{
 struct digicolor_timer *VAR_3 = FUNC_1(VAR_1);
 FUNC_2(VAR_0 | VAR_2, VAR_3->base + FUNC_0(VAR_3->timer_id));
}
