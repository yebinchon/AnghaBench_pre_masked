
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * brain_server_dbs; } ;
typedef TYPE_1__ brain_server_dumper_options_t ;
typedef int brain_server_dbs_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;

void *FUNC_3 (void *VAR_2)
{
  brain_server_dumper_options_t *VAR_3 = (brain_server_dumper_options_t *) VAR_2;

  brain_server_dbs_t *VAR_4 = VAR_3->brain_server_dbs;

  int VAR_5 = 0;

  while (VAR_1 == 1)
  {
    if (VAR_5 == VAR_0)
    {
      FUNC_1 (VAR_4, ".");
      FUNC_0 (VAR_4, ".");

      VAR_5 = 0;
    }
    else
    {
      VAR_5++;
    }

    FUNC_2 (1);
  }

  return ((void*)0);
}
