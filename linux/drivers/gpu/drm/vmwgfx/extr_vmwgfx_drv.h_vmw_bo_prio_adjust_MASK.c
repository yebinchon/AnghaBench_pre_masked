
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int priority; } ;
struct vmw_buffer_object {TYPE_1__ base; scalar_t__* res_prios; } ;


 int FUNC_0 (scalar_t__*) ;

__attribute__((used)) static inline void FUNC_1(struct vmw_buffer_object *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0->res_prios);

 while (VAR_1--) {
  if (VAR_0->res_prios[VAR_1]) {
   VAR_0->base.priority = VAR_1;
   return;
  }
 }

 VAR_0->base.priority = 3;
}
