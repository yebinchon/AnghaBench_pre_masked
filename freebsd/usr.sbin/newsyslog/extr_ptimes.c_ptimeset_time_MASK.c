
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct ptime_data {scalar_t__ parseopts; int tsecs; int tm; } ;


 int * FUNC_0 (int *) ;

int
FUNC_1(struct ptime_data *VAR_0, time_t VAR_1)
{

 if (VAR_0 == ((void*)0))
  return (-1);

 VAR_0->tsecs = VAR_1;
 VAR_0->tm = *(FUNC_0(&VAR_0->tsecs));
 VAR_0->parseopts = 0;

 return (0);
}
