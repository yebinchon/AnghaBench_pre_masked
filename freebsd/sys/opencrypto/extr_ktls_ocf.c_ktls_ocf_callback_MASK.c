
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocf_operation {int done; TYPE_1__* os; } ;
struct cryptop {struct ocf_operation* crp_opaque; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ocf_operation*) ;

__attribute__((used)) static int
FUNC_3(struct cryptop *VAR_0)
{
 struct ocf_operation *VAR_1;

 VAR_1 = VAR_0->crp_opaque;
 FUNC_0(&VAR_1->os->lock);
 VAR_1->done = 1;
 FUNC_1(&VAR_1->os->lock);
 FUNC_2(VAR_1);
 return (0);
}
