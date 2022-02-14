
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeh_pe {int dummy; } ;


 int FUNC_0 (struct eeh_pe*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;

int FUNC_2(struct eeh_pe *VAR_1)
{




 if (VAR_0) {
  FUNC_1("EEH: Event dropped due to no_recover setting\n");
  return 0;
 }

 return FUNC_0(VAR_1);
}
