
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* cpt_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_6__ {scalar_t__ cpt_total; } ;
typedef TYPE_2__ cpt_ctx_t ;


 double FUNC_0 (TYPE_1__ const*) ;

int FUNC_1 (const hashcat_ctx_t *VAR_0)
{
  const cpt_ctx_t *VAR_1 = VAR_0->cpt_ctx;

  const double VAR_2 = FUNC_0 (VAR_0);

  const double VAR_3 = (double) VAR_1->cpt_total / ((VAR_2 / 1000) / 3600);

  return (int) VAR_3;
}
