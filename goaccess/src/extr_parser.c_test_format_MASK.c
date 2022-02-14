
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int log_erridx; int * errors; } ;
typedef TYPE_1__ GLog ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__**,int *,int) ;
 char** FUNC_2 (int,int) ;
 char* FUNC_3 (int ) ;

char **
FUNC_4 (GLog * VAR_0, int *VAR_1)
{
  char **VAR_2 = ((void*)0);
  int VAR_3;

  if (FUNC_1 (&VAR_0, ((void*)0), 1) == 0)
    goto clean;

  VAR_2 = FUNC_2 (VAR_0->log_erridx, sizeof (char *));
  for (VAR_3 = 0; VAR_3 < VAR_0->log_erridx; ++VAR_3)
    VAR_2[VAR_3] = FUNC_3 (VAR_0->errors[VAR_3]);
  *VAR_1 = VAR_0->log_erridx;

clean:
  FUNC_0 (VAR_0);

  return VAR_2;
}
