
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wf_fcu_fan {TYPE_1__* fcu_priv; } ;
struct wf_control {struct wf_fcu_fan* priv; } ;
struct TYPE_2__ {int ref; } ;


 int FUNC_0 (struct wf_fcu_fan*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct wf_control *VAR_1)
{
 struct wf_fcu_fan *VAR_2 = VAR_1->priv;

 FUNC_1(&VAR_2->fcu_priv->ref, VAR_0);
 FUNC_0(VAR_2);
}
