
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_tmu_channel {int dummy; } ;
struct clock_event_device {int dummy; } ;


 int FUNC_0 (int) ;
 struct sh_tmu_channel* FUNC_1 (struct clock_event_device*) ;
 int FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 (struct sh_tmu_channel*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_0,
       struct clock_event_device *VAR_1)
{
 struct sh_tmu_channel *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(!FUNC_2(VAR_1));


 FUNC_3(VAR_2, VAR_0, 0);
 return 0;
}
