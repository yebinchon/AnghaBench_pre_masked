
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,int ) ;

void FUNC_3(const char *VAR_1, int VAR_2, int VAR_3)
{
 if (VAR_0)
  return;

 VAR_0 = FUNC_1(((void*)0), VAR_1);

 if (!VAR_0)
  FUNC_2("RegisterEventSource() failed: %lu", FUNC_0());
}
