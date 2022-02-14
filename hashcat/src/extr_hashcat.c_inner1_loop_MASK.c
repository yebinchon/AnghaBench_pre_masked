
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_9__ {scalar_t__ dicts_pos; scalar_t__ dicts_cnt; } ;
typedef TYPE_1__ straight_ctx_t ;
struct TYPE_10__ {int run_main_level3; int run_thread_level1; int run_thread_level2; } ;
typedef TYPE_2__ status_ctx_t ;
struct TYPE_11__ {scalar_t__ dicts_pos; } ;
typedef TYPE_3__ restore_data_t ;
struct TYPE_12__ {TYPE_3__* rd; } ;
typedef TYPE_4__ restore_ctx_t ;
struct TYPE_13__ {TYPE_1__* straight_ctx; TYPE_2__* status_ctx; TYPE_4__* restore_ctx; } ;
typedef TYPE_5__ hashcat_ctx_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_3 (hashcat_ctx_t *VAR_2)
{
  restore_ctx_t *VAR_3 = VAR_2->restore_ctx;
  status_ctx_t *VAR_4 = VAR_2->status_ctx;
  straight_ctx_t *VAR_5 = VAR_2->straight_ctx;



  VAR_4->run_main_level3 = 1;
  VAR_4->run_thread_level1 = 1;
  VAR_4->run_thread_level2 = 1;





  FUNC_0 (VAR_1);

  if (VAR_3->rd)
  {
    restore_data_t *VAR_6 = VAR_3->rd;

    if (VAR_6->dicts_pos > 0)
    {
      VAR_5->dicts_pos = VAR_6->dicts_pos;

      VAR_6->dicts_pos = 0;
    }
  }

  if (VAR_5->dicts_cnt)
  {
    for (u32 VAR_7 = VAR_5->dicts_pos; VAR_7 < VAR_5->dicts_cnt; VAR_7++)
    {
      VAR_5->dicts_pos = VAR_7;

      if (FUNC_1 (VAR_2) == -1) FUNC_2 (VAR_2);

      if (VAR_4->run_main_level3 == 0) break;
    }

    if (VAR_4->run_main_level3 == 1)
    {
      if (VAR_5->dicts_pos + 1 == VAR_5->dicts_cnt) VAR_5->dicts_pos = 0;
    }
  }
  else
  {
    if (FUNC_1 (VAR_2) == -1) FUNC_2 (VAR_2);
  }

  FUNC_0 (VAR_0);

  return 0;
}
