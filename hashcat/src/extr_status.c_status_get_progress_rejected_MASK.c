
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct TYPE_5__ {scalar_t__* words_progress_rejected; } ;
typedef TYPE_1__ status_ctx_t ;
struct TYPE_6__ {size_t salts_cnt; } ;
typedef TYPE_2__ hashes_t ;
struct TYPE_7__ {TYPE_1__* status_ctx; TYPE_2__* hashes; } ;
typedef TYPE_3__ hashcat_ctx_t ;



u64 FUNC_0 (const hashcat_ctx_t *VAR_0)
{
  const hashes_t *VAR_1 = VAR_0->hashes;
  const status_ctx_t *VAR_2 = VAR_0->status_ctx;

  u64 VAR_3 = 0;

  for (u32 VAR_4 = 0; VAR_4 < VAR_1->salts_cnt; VAR_4++)
  {
    VAR_3 += VAR_2->words_progress_rejected[VAR_4];
  }

  return VAR_3;
}
