
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int * words_progress_restored; int * words_progress_rejected; int * words_progress_done; } ;
typedef TYPE_1__ status_ctx_t ;
struct TYPE_6__ {int salts_cnt; } ;
typedef TYPE_2__ hashes_t ;
struct TYPE_7__ {TYPE_2__* hashes; TYPE_1__* status_ctx; } ;
typedef TYPE_3__ hashcat_ctx_t ;


 scalar_t__ FUNC_0 (int ,int) ;

int FUNC_1 (hashcat_ctx_t *VAR_0)
{
  status_ctx_t *VAR_1 = VAR_0->status_ctx;
  hashes_t *VAR_2 = VAR_0->hashes;

  VAR_1->words_progress_done = (u64 *) FUNC_0 (VAR_2->salts_cnt, sizeof (u64));
  VAR_1->words_progress_rejected = (u64 *) FUNC_0 (VAR_2->salts_cnt, sizeof (u64));
  VAR_1->words_progress_restored = (u64 *) FUNC_0 (VAR_2->salts_cnt, sizeof (u64));

  return 0;
}
