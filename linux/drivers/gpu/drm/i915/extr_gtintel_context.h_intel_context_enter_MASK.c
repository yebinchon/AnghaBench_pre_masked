
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_context {TYPE_2__* ops; int active_count; TYPE_1__* timeline; } ;
struct TYPE_4__ {int (* enter ) (struct intel_context*) ;} ;
struct TYPE_3__ {int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct intel_context*) ;

__attribute__((used)) static inline void FUNC_2(struct intel_context *VAR_0)
{
 FUNC_0(&VAR_0->timeline->mutex);
 if (!VAR_0->active_count++)
  VAR_0->ops->enter(VAR_0);
}
