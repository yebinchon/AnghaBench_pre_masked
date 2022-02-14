
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,char*,char*,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 char* FUNC_5 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_6(int VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_0 = 0;

 if ( (VAR_4 = FUNC_4(VAR_3)) == -1 && VAR_0)
  FUNC_2("sched_get_priority_min");

 if ( (VAR_5 = FUNC_3(VAR_3)) == -1 && VAR_0)
  FUNC_2("sched_get_priority_max");

 if (VAR_5 - VAR_4 + 1 < 32 || VAR_5 < VAR_4) {
  FUNC_1(VAR_1, "Illegal priority range for %s: %d to %d\n",
  FUNC_5(VAR_3), VAR_4, VAR_5);
  FUNC_0(-1);
 }

 if (VAR_2)
  FUNC_1(VAR_2, "%12s: sched_min %2d sched_max %2d\n",
  FUNC_5(VAR_3), VAR_4, VAR_5);
}
