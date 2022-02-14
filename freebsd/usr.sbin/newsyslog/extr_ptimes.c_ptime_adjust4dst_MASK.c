
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tm_isdst; } ;
struct ptime_data {scalar_t__ did_adj4dst; TYPE_1__ tm; int tsecs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;

int
FUNC_1(struct ptime_data *VAR_2, const struct ptime_data *VAR_3)
{
 struct ptime_data VAR_4;

 if (VAR_2 == ((void*)0))
  return (-1);





 VAR_4 = *VAR_2;


 if ((VAR_4.did_adj4dst != VAR_1) &&
     (VAR_4.did_adj4dst == VAR_3->tm.tm_isdst))
  return (0);


 if (VAR_3->tm.tm_isdst != VAR_4.tm.tm_isdst) {
  if (VAR_4.tm.tm_isdst == 1)
   VAR_4.tsecs -= VAR_0;
  else if (VAR_4.tm.tm_isdst == 0)
   VAR_4.tsecs += VAR_0;
  VAR_4.tm = *(FUNC_0(&VAR_4.tsecs));

  VAR_4.did_adj4dst = VAR_3->tm.tm_isdst;





 }

 *VAR_2 = VAR_4;
 return (0);
}
