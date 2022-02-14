
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct closure {int dummy; } ;
struct TYPE_2__ {unsigned int nsets; } ;
struct btree {TYPE_1__ keys; int lock; } ;


 int FUNC_0 (struct btree*,struct closure*) ;
 int FUNC_1 (struct btree*) ;
 int FUNC_2 (struct btree*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct btree *VAR_0, struct closure *VAR_1)
{
 unsigned int VAR_2 = VAR_0->keys.nsets;

 FUNC_3(&VAR_0->lock);

 FUNC_0(VAR_0, VAR_1);





 if (VAR_2 && !VAR_0->keys.nsets)
  FUNC_2(VAR_0);

 FUNC_1(VAR_0);
}
