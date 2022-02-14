
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_resource {int id; TYPE_1__* func; } ;
struct TYPE_2__ {int (* destroy ) (struct vmw_resource*) ;} ;


 scalar_t__ FUNC_0 (int (*) (struct vmw_resource*)) ;
 int FUNC_1 (struct vmw_resource*) ;

__attribute__((used)) static void FUNC_2(struct vmw_resource *VAR_0)
{
 if (FUNC_0(VAR_0->func->destroy))
  (void) VAR_0->func->destroy(VAR_0);
 else
  VAR_0->id = -1;
}
