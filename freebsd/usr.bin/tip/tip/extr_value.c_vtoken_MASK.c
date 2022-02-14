
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int v_type; int v_access; } ;
typedef TYPE_1__ value_t ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_7 (char*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9(char *VAR_3)
{
 value_t *VAR_4;
 char *VAR_5;

 if ((VAR_5 = FUNC_3(VAR_3, '='))) {
  *VAR_5 = '\0';
  if ((VAR_4 = FUNC_7(VAR_3))) {
   VAR_5++;
   if (VAR_4->v_type&VAR_1)
    FUNC_6(VAR_4, (char *)(intptr_t)FUNC_0(VAR_5));
   else {
    if (FUNC_4(VAR_3, "record") == 0)
     VAR_5 = FUNC_1(VAR_5);
    FUNC_6(VAR_4, VAR_5);
   }
   return;
  }
 } else if ((VAR_5 = FUNC_3(VAR_3, '?'))) {
  *VAR_5 = '\0';
  if ((VAR_4 = FUNC_7(VAR_3)) && FUNC_5(VAR_4->v_access, VAR_2)) {
   FUNC_8(VAR_4);
   return;
  }
 } else {
  if (*VAR_3 != '!')
   VAR_4 = FUNC_7(VAR_3);
  else
   VAR_4 = FUNC_7(VAR_3+1);
  if (VAR_4 != VAR_0) {
   FUNC_6(VAR_4, VAR_3);
   return;
  }
 }
 FUNC_2("%s: unknown variable\r\n", VAR_3);
}
