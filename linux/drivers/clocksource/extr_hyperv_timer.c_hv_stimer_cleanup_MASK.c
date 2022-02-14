
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int dummy; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int FUNC_0 (struct clock_event_device*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 struct clock_event_device* FUNC_1 (int ,unsigned int) ;

void FUNC_2(unsigned int VAR_3)
{
 struct clock_event_device *VAR_4;


 if (VAR_2.features & VAR_0) {
  VAR_4 = FUNC_1(VAR_1, VAR_3);
  FUNC_0(VAR_4);
 }
}
