
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int racct_enable ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_3(void)
{
 size_t VAR_2;
 int VAR_3;
 bool VAR_4;

 VAR_2 = sizeof(VAR_4);
 VAR_3 = FUNC_2("kern.racct.enable",
     &VAR_4, &VAR_2, ((void*)0), 0);

 if (VAR_3 != 0) {
  if (VAR_1 == VAR_0)
   FUNC_1(1, "RACCT/RCTL support not present in kernel; see rctl(8) for details");

  FUNC_0(1, "sysctlbyname");
 }

 if (!VAR_4)
  FUNC_1(1, "RACCT/RCTL present, but disabled; enable using kern.racct.enable=1 tunable");
}
