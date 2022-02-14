
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int dummy; } ;
struct TYPE_2__ {unsigned int num; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 TYPE_1__* FUNC_1 (struct clock_event_device*) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct clock_event_device *VAR_1)
{
 unsigned int VAR_2 = FUNC_1(VAR_1)->num;
 unsigned int VAR_3;

 VAR_3 = FUNC_2(FUNC_0(VAR_2));
 VAR_3 &= ~VAR_0;
 FUNC_3(VAR_3, FUNC_0(VAR_2));

 return 0;
}
