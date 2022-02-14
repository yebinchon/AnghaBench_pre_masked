
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int enabled; int rd; int new_restore_file; int eff_restore_file; } ;
typedef TYPE_1__ restore_ctx_t ;
struct TYPE_6__ {TYPE_1__* restore_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2 (hashcat_ctx_t *VAR_0)
{
  restore_ctx_t *VAR_1 = VAR_0->restore_ctx;

  if (VAR_1->enabled == 0) return;

  FUNC_0 (VAR_1->eff_restore_file);
  FUNC_0 (VAR_1->new_restore_file);
  FUNC_0 (VAR_1->rd);

  FUNC_1 (VAR_1, 0, sizeof (restore_ctx_t));
}
