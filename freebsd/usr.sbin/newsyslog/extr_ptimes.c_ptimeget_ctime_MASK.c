
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptime_data {int tsecs; } ;


 char const* FUNC_0 (int *) ;

const char *
FUNC_1(const struct ptime_data *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return ("Null time in ptimeget_ctime()\n");

 return (FUNC_0(&VAR_0->tsecs));
}
