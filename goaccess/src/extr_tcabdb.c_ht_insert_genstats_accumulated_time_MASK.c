
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;


 void* VAR_0 ;
 int FUNC_0 (void*,char*,int) ;

int
FUNC_1 (time_t VAR_1)
{
  void *VAR_2 = VAR_0;

  if (!VAR_2)
    return 0;

  return FUNC_0 (VAR_2, "accumulated_time", (int) VAR_1) != -1;
}
