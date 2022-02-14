
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t i64 ;
typedef int file ;
struct TYPE_5__ {size_t attack_cnt; TYPE_2__* attack_buf; } ;
typedef TYPE_1__ brain_server_dbs_t ;
struct TYPE_6__ {int brain_attack; int mux_ag; } ;
typedef TYPE_2__ brain_server_db_attack_t ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*,int,char*,char const*,int) ;

bool FUNC_5 (brain_server_dbs_t *VAR_0, const char *VAR_1)
{
  for (i64 VAR_2 = 0; VAR_2 < VAR_0->attack_cnt; VAR_2++)
  {
    brain_server_db_attack_t *VAR_3 = &VAR_0->attack_buf[VAR_2];

    FUNC_1 (VAR_3->mux_ag);

    char VAR_4[100];

    FUNC_3 (VAR_4, 0, sizeof (VAR_4));

    FUNC_4 (VAR_4, sizeof (VAR_4), "%s/brain.%08x.admp", VAR_1, VAR_3->brain_attack);

    FUNC_0 (VAR_3, VAR_4);

    FUNC_2 (VAR_3->mux_ag);
  }

  return 1;
}
