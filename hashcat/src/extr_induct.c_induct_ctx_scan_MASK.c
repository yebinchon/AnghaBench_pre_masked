
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int enabled; scalar_t__ induction_dictionaries_cnt; int induction_dictionaries; int root_directory; } ;
typedef TYPE_1__ induct_ctx_t ;
struct TYPE_5__ {TYPE_1__* induct_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,size_t,int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

void FUNC_3 (hashcat_ctx_t *VAR_1)
{
  induct_ctx_t *VAR_2 = VAR_1->induct_ctx;

  if (VAR_2->enabled == 0) return;

  VAR_2->induction_dictionaries = FUNC_2 (VAR_2->root_directory);

  VAR_2->induction_dictionaries_cnt = FUNC_0 (VAR_2->induction_dictionaries);

  FUNC_1 (VAR_2->induction_dictionaries, (size_t) VAR_2->induction_dictionaries_cnt, sizeof (char *), VAR_0);
}
