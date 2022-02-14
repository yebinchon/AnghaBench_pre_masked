
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t sl_cur; char** sl_str; } ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,char*) ;

void
FUNC_2(void)
{
 size_t VAR_1;

 FUNC_0();
 for (VAR_1 = 0; VAR_1 < VAR_0->sl_cur; VAR_1++) {
  FUNC_1("%s\n", VAR_0->sl_str[VAR_1]);
 }
}
