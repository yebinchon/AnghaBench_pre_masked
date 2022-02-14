
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* cpt_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
typedef int cpt_t ;
struct TYPE_5__ {int enabled; int cpt_start; scalar_t__ cpt_pos; scalar_t__ cpt_total; int cpt_buf; } ;
typedef TYPE_2__ cpt_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;

void FUNC_2 (hashcat_ctx_t *VAR_1)
{
  cpt_ctx_t *VAR_2 = VAR_1->cpt_ctx;

  if (VAR_2->enabled == 0) return;

  FUNC_0 (VAR_2->cpt_buf, 0, VAR_0 * sizeof (cpt_t));

  VAR_2->cpt_total = 0;
  VAR_2->cpt_pos = 0;
  VAR_2->cpt_start = FUNC_1 (((void*)0));
}
