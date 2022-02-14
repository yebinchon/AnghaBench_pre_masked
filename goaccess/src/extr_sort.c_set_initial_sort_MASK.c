
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int field; int sort; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 TYPE_1__* VAR_0 ;

void
FUNC_4 (const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
  int VAR_4, VAR_5, VAR_6;
  if ((VAR_4 = FUNC_1 (VAR_1)) == -1)
    return;

  if ((VAR_5 = FUNC_2 (VAR_2)) == -1)
    return;
  if ((VAR_6 = FUNC_3 (VAR_3)) == -1)
    return;
  if (!FUNC_0 (VAR_4, VAR_5))
    return;

  VAR_0[VAR_4].field = VAR_5;
  VAR_0[VAR_4].sort = VAR_6;
}
