
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int const u64 ;
struct TYPE_4__ {int const words_cur; } ;
typedef TYPE_1__ status_ctx_t ;
struct TYPE_5__ {TYPE_1__* status_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;



u64 FUNC_0 (const hashcat_ctx_t *VAR_0)
{
  const status_ctx_t *VAR_1 = VAR_0->status_ctx;

  const u64 VAR_2 = VAR_1->words_cur;

  return VAR_2;
}
