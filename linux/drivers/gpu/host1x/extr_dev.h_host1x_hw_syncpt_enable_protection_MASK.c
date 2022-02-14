
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x {TYPE_1__* syncpt_op; } ;
struct TYPE_2__ {void (* enable_protection ) (struct host1x*) ;} ;


 void FUNC_0 (struct host1x*) ;

__attribute__((used)) static inline void FUNC_1(struct host1x *VAR_0)
{
 return VAR_0->syncpt_op->enable_protection(VAR_0);
}
