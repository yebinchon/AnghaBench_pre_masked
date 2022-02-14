
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int example_hashes; int keyspace; int left; int backend_info; int show; int usage; int version; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_6__ {TYPE_1__* user_options; TYPE_3__* cpt_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
typedef int cpt_t ;
struct TYPE_7__ {int enabled; int cpt_start; scalar_t__ cpt_pos; scalar_t__ cpt_total; int * cpt_buf; } ;
typedef TYPE_3__ cpt_ctx_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;

int FUNC_2 (hashcat_ctx_t *VAR_1)
{
  cpt_ctx_t *VAR_2 = VAR_1->cpt_ctx;
  user_options_t *VAR_3 = VAR_1->user_options;

  VAR_2->enabled = 0;

  if (VAR_3->example_hashes == 1) return 0;
  if (VAR_3->keyspace == 1) return 0;
  if (VAR_3->left == 1) return 0;
  if (VAR_3->backend_info == 1) return 0;
  if (VAR_3->show == 1) return 0;
  if (VAR_3->usage == 1) return 0;
  if (VAR_3->version == 1) return 0;

  VAR_2->enabled = 1;

  VAR_2->cpt_buf = (cpt_t *) FUNC_0 (VAR_0, sizeof (cpt_t));

  VAR_2->cpt_total = 0;
  VAR_2->cpt_pos = 0;
  VAR_2->cpt_start = FUNC_1 (((void*)0));

  return 0;
}
