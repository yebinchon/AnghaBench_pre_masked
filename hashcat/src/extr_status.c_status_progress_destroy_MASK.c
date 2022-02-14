
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * words_progress_restored; int * words_progress_rejected; int * words_progress_done; } ;
typedef TYPE_1__ status_ctx_t ;
struct TYPE_5__ {TYPE_1__* status_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int FUNC_0 (int *) ;

void FUNC_1 (hashcat_ctx_t *VAR_0)
{
  status_ctx_t *VAR_1 = VAR_0->status_ctx;

  FUNC_0 (VAR_1->words_progress_done);
  FUNC_0 (VAR_1->words_progress_rejected);
  FUNC_0 (VAR_1->words_progress_restored);

  VAR_1->words_progress_done = ((void*)0);
  VAR_1->words_progress_rejected = ((void*)0);
  VAR_1->words_progress_restored = ((void*)0);
}
