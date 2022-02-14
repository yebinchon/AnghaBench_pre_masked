
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key; int msg; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void FUNC_1(char *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_1[VAR_4].key == VAR_3)
   break;
 if (VAR_4 < VAR_0)
  FUNC_0("%s: %s\n", VAR_2, VAR_1[VAR_4].msg);
 else if (VAR_3 < 0)
  FUNC_0("%s: linux error code %i\n", VAR_2, VAR_3);
 else
  FUNC_0("%s: unknown error code %#2.2x\n",
         VAR_2, VAR_3);
}
