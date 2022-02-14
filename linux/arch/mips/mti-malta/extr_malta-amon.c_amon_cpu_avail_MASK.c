
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpulaunch {int flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;

int FUNC_2(int VAR_5)
{
 struct cpulaunch *VAR_6 = (struct cpulaunch *)FUNC_0(VAR_0);

 if (VAR_5 < 0 || VAR_5 >= VAR_4) {
  FUNC_1("avail: cpu%d is out of range\n", VAR_5);
  return 0;
 }

 VAR_6 += VAR_5;
 if (!(VAR_6->flags & VAR_3)) {
  FUNC_1("avail: cpu%d is not ready\n", VAR_5);
  return 0;
 }
 if (VAR_6->flags & (VAR_1|VAR_2)) {
  FUNC_1("avail: too late.. cpu%d is already gone\n", VAR_5);
  return 0;
 }

 return 1;
}
