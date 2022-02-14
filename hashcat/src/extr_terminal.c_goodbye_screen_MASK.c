
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int quiet; int keyspace; int stdout_flag; int show; int left; } ;
typedef TYPE_1__ user_options_t ;
typedef int time_t ;
typedef int stop_buf ;
typedef int start_buf ;
struct TYPE_6__ {TYPE_1__* user_options; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int FUNC_0 (int const*,char*) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (char*,int ,int) ;

void FUNC_3 (hashcat_ctx_t *VAR_0, const time_t VAR_1, const time_t VAR_2)
{
  const user_options_t *VAR_3 = VAR_0->user_options;

  if (VAR_3->quiet == 1) return;
  if (VAR_3->keyspace == 1) return;
  if (VAR_3->stdout_flag == 1) return;
  if (VAR_3->show == 1) return;
  if (VAR_3->left == 1) return;

  char VAR_4[32]; FUNC_2 (VAR_4, 0, sizeof (VAR_4));
  char VAR_5[32]; FUNC_2 (VAR_4, 0, sizeof (VAR_5));

  FUNC_1 (VAR_0, "Started: %s", FUNC_0 (&VAR_1, VAR_4));
  FUNC_1 (VAR_0, "Stopped: %s", FUNC_0 (&VAR_2, VAR_5));
}
