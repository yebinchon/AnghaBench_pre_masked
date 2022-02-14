
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int enabled; int root_directory; } ;
typedef TYPE_1__ induct_ctx_t ;
struct TYPE_7__ {TYPE_1__* induct_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5 (hashcat_ctx_t *VAR_3)
{
  induct_ctx_t *VAR_4 = VAR_3->induct_ctx;

  if (VAR_4->enabled == 0) return;

  if (FUNC_3 (VAR_4->root_directory) == -1)
  {
    if (VAR_2 == VAR_0)
    {

    }
    else if (VAR_2 == VAR_1)
    {

    }
    else
    {
      FUNC_0 (VAR_3, "%s: %s", VAR_4->root_directory, FUNC_4 (VAR_2));


    }
  }

  FUNC_1 (VAR_4->root_directory);

  FUNC_2 (VAR_4, 0, sizeof (induct_ctx_t));
}
