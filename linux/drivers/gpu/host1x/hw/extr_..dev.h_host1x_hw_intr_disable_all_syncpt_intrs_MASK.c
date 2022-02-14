
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x {TYPE_1__* intr_op; } ;
struct TYPE_2__ {int (* disable_all_syncpt_intrs ) (struct host1x*) ;} ;


 int FUNC_0 (struct host1x*) ;

__attribute__((used)) static inline void FUNC_1(struct host1x *VAR_0)
{
 VAR_0->intr_op->disable_all_syncpt_intrs(VAR_0);
}
