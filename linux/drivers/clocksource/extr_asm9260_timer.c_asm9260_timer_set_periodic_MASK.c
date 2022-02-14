
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int dummy; } ;
struct TYPE_2__ {int ticks_per_jiffy; scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct clock_event_device*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct clock_event_device *VAR_7)
{
 FUNC_2(VAR_7);


 FUNC_3(FUNC_0(0) | FUNC_1(0),
         VAR_6.base + VAR_2 + VAR_1);

 FUNC_3(VAR_6.ticks_per_jiffy, VAR_6.base + VAR_3);

 FUNC_3(VAR_0, VAR_6.base + VAR_4 + VAR_5);
 return 0;
}
