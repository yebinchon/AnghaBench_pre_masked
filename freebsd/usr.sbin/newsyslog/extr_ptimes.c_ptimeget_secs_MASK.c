
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct ptime_data {int tsecs; } ;



time_t
FUNC_0(const struct ptime_data *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return (-1);

 return (VAR_0->tsecs);
}
