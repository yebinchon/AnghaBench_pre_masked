
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rdt_domain {TYPE_3__* plr; } ;
struct TYPE_6__ {unsigned long cbm; TYPE_2__* r; } ;
struct TYPE_4__ {unsigned int cbm_len; } ;
struct TYPE_5__ {TYPE_1__ cache; } ;


 scalar_t__ FUNC_0 (unsigned long*,unsigned long*,unsigned int) ;

bool FUNC_1(struct rdt_domain *VAR_0, unsigned long VAR_1)
{
 unsigned int VAR_2;
 unsigned long VAR_3;

 if (VAR_0->plr) {
  VAR_2 = VAR_0->plr->r->cache.cbm_len;
  VAR_3 = VAR_0->plr->cbm;
  if (FUNC_0(&VAR_1, &VAR_3, VAR_2))
   return 1;
 }
 return 0;
}
