
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int links; } ;
typedef TYPE_1__ prog_t ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ,int ,char*) ;

void
FUNC_4(int VAR_4, char **VAR_5)
{
 int VAR_6;
 prog_t *VAR_7 = FUNC_1(VAR_5[1]);

 if (VAR_7 == ((void*)0)) {
  FUNC_3("%s:%d: no prog %s previously declared, skipping link",
      VAR_0, VAR_2, VAR_5[1]);
  VAR_1 = 1;
  return;
 }

 for (VAR_6 = 2; VAR_6 < VAR_4; VAR_6++) {
  if (VAR_3)
   FUNC_2("%s\n",VAR_5[VAR_6]);

  FUNC_0(&VAR_7->links, VAR_5[VAR_6]);
 }
}
