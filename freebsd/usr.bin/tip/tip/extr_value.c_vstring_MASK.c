
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int v_type; } ;
typedef TYPE_1__ value_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_4 (char*) ;

int
FUNC_5(char *VAR_1, char *VAR_2)
{
 value_t *VAR_3;

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3 == 0)
  return (1);
 if (VAR_3->v_type&VAR_0)
  FUNC_3(VAR_3, (char *)(intptr_t)FUNC_0(VAR_2));
 else {
  if (FUNC_2(VAR_1, "record") == 0)
   VAR_2 = FUNC_1(VAR_2);
  FUNC_3(VAR_3, VAR_2);
 }
 return (0);
}
