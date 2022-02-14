
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_tmu_channel {int dummy; } ;
struct clock_event_device {int dummy; } ;


 struct sh_tmu_channel* FUNC_0 (struct clock_event_device*) ;
 scalar_t__ FUNC_1 (struct clock_event_device*) ;
 scalar_t__ FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 (struct sh_tmu_channel*) ;

__attribute__((used)) static int FUNC_4(struct clock_event_device *VAR_0)
{
 struct sh_tmu_channel *VAR_1 = FUNC_0(VAR_0);

 if (FUNC_1(VAR_0) || FUNC_2(VAR_0))
  FUNC_3(VAR_1);
 return 0;
}
