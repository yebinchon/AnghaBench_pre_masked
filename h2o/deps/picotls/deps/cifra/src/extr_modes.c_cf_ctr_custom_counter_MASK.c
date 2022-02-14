
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t counter_offset; size_t counter_width; TYPE_1__* prp; } ;
typedef TYPE_2__ cf_ctr ;
struct TYPE_4__ {size_t blocksz; } ;


 int FUNC_0 (int) ;

void FUNC_1(cf_ctr *VAR_0, size_t VAR_1, size_t VAR_2)
{
  FUNC_0(VAR_0->prp->blocksz <= VAR_1 + VAR_2);
  VAR_0->counter_offset = VAR_1;
  VAR_0->counter_width = VAR_2;
}
