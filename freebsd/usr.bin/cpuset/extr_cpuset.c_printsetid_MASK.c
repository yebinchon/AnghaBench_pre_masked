
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int intmax_t ;
typedef int cpusetid_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (size_t,size_t,scalar_t__,int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (char*,char*,int ,int ,int ) ;
 int VAR_6 ;
 size_t VAR_7 ;
 char** VAR_8 ;

__attribute__((used)) static void
FUNC_3(void)
{
 cpusetid_t VAR_9;




 if (VAR_4 == VAR_1 && !VAR_6)
  VAR_4 = VAR_0;
 if (FUNC_0(VAR_4, VAR_7, VAR_3, &VAR_9))
  FUNC_1(VAR_2, "getid");
 FUNC_2("%s %jd%s id: %d\n", VAR_8[VAR_7], (intmax_t)VAR_3,
     VAR_5[VAR_4], VAR_9);
}
