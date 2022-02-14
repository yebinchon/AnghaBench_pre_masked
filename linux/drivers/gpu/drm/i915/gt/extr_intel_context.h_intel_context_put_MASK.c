
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_context {TYPE_1__* ops; int ref; } ;
struct TYPE_2__ {int destroy; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static inline void FUNC_1(struct intel_context *VAR_0)
{
 FUNC_0(&VAR_0->ref, VAR_0->ops->destroy);
}
