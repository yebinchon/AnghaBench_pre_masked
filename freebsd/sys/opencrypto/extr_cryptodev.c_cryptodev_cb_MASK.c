
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cryptop_data {int done; TYPE_1__* cse; } ;
struct cryptop {struct cryptop_data* crp_opaque; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cryptop_data*) ;

__attribute__((used)) static int
FUNC_3(struct cryptop *VAR_0)
{
 struct cryptop_data *VAR_1 = VAR_0->crp_opaque;






 FUNC_0(&VAR_1->cse->lock);
 VAR_1->done = 1;
 FUNC_1(&VAR_1->cse->lock);
 FUNC_2(VAR_1);
 return (0);
}
