
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptime_data {int tsecs; } ;


 double FUNC_0 (int ,int ) ;

double
FUNC_1(const struct ptime_data *VAR_0, const struct
    ptime_data *VAR_1)
{


 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (0.0);

 return (FUNC_0(VAR_0->tsecs, VAR_1->tsecs));
}
