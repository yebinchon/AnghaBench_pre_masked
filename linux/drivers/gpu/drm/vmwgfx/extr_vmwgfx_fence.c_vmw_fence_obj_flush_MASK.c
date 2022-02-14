
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_private {int dummy; } ;
struct vmw_fence_obj {int dummy; } ;
struct TYPE_2__ {struct vmw_private* dev_priv; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct vmw_fence_obj*) ;
 int FUNC_1 (struct vmw_private*,int ) ;

void FUNC_2(struct vmw_fence_obj *VAR_1)
{
 struct vmw_private *VAR_2 = FUNC_0(VAR_1)->dev_priv;

 FUNC_1(VAR_2, VAR_0);
}
