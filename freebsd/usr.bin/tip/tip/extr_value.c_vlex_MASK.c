
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int v_access; scalar_t__ v_name; } ;
typedef TYPE_1__ value_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (char*) ;

void
FUNC_6(char *VAR_3)
{
 value_t *VAR_4;
 char *VAR_5;

 if (FUNC_0(VAR_3, "all")) {
  for (VAR_4 = VAR_2; VAR_4->v_name; VAR_4++)
   if (FUNC_2(VAR_4->v_access, VAR_0))
    FUNC_4(VAR_4);
 } else {
  do {
   if ((VAR_5 = FUNC_3(VAR_3, ' ')))
    VAR_5++;
   FUNC_5(VAR_3);
   VAR_3 = VAR_5;
  } while (VAR_3);
 }
 if (VAR_1 > 0) {
  FUNC_1("\r\n");
  VAR_1 = 0;
 }
}
