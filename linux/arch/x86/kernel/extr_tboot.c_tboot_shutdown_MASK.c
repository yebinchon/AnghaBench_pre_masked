
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ shutdown_entry; scalar_t__ shutdown_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 scalar_t__ FUNC_3 () ;

void FUNC_4(u32 VAR_3)
{
 void (*VAR_4)(void);

 if (!FUNC_2())
  return;






 if (!VAR_2)
  return;


 if (VAR_3 == VAR_0)
  if (FUNC_3())
   return;

 VAR_1->shutdown_type = VAR_3;

 FUNC_1();

 VAR_4 = (void(*)(void))(unsigned long)VAR_1->shutdown_entry;
 VAR_4();


 while (1)
  FUNC_0();
}
