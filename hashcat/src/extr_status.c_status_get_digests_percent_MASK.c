
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ digests_cnt; scalar_t__ digests_done; } ;
typedef TYPE_1__ hashes_t ;
struct TYPE_5__ {TYPE_1__* hashes; } ;
typedef TYPE_2__ hashcat_ctx_t ;



double FUNC_0 (const hashcat_ctx_t *VAR_0)
{
  const hashes_t *VAR_1 = VAR_0->hashes;

  if (VAR_1->digests_cnt == 0) return 0;

  return ((double) VAR_1->digests_done / (double) VAR_1->digests_cnt) * 100;
}
