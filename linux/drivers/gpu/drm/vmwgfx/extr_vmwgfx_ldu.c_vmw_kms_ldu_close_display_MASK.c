
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_private {TYPE_1__* ldu_priv; } ;
struct TYPE_2__ {int active; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct vmw_private *VAR_1)
{
 if (!VAR_1->ldu_priv)
  return -VAR_0;

 FUNC_0(!FUNC_2(&VAR_1->ldu_priv->active));

 FUNC_1(VAR_1->ldu_priv);

 return 0;
}
