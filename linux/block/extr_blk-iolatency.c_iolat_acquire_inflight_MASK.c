
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rq_wait {int dummy; } ;
struct TYPE_2__ {int max_depth; } ;
struct iolatency_grp {TYPE_1__ rq_depth; } ;


 int FUNC_0 (struct rq_wait*,int ) ;

__attribute__((used)) static bool FUNC_1(struct rq_wait *VAR_0, void *VAR_1)
{
 struct iolatency_grp *VAR_2 = VAR_1;
 return FUNC_0(VAR_0, VAR_2->rq_depth.max_depth);
}
