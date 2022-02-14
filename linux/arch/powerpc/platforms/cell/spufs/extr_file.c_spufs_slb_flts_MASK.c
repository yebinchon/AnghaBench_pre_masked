
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned long long slb_flt; scalar_t__ slb_flt_base; } ;
struct spu_context {scalar_t__ state; TYPE_3__ stats; TYPE_2__* spu; } ;
struct TYPE_4__ {scalar_t__ slb_flt; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned long long FUNC_0(struct spu_context *VAR_1)
{
 unsigned long long VAR_2 = VAR_1->stats.slb_flt;

 if (VAR_1->state == VAR_0) {
  VAR_2 += (VAR_1->spu->stats.slb_flt -
        VAR_1->stats.slb_flt_base);
 }

 return VAR_2;
}
