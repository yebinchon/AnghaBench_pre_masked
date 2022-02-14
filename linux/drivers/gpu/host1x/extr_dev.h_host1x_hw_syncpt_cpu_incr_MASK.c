
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_syncpt {int dummy; } ;
struct host1x {TYPE_1__* syncpt_op; } ;
struct TYPE_2__ {int (* cpu_incr ) (struct host1x_syncpt*) ;} ;


 int FUNC_0 (struct host1x_syncpt*) ;

__attribute__((used)) static inline int FUNC_1(struct host1x *VAR_0,
         struct host1x_syncpt *VAR_1)
{
 return VAR_0->syncpt_op->cpu_incr(VAR_1);
}
