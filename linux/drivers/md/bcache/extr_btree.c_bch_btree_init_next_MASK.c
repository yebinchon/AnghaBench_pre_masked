
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nsets; } ;
struct btree {scalar_t__ written; TYPE_1__* c; TYPE_2__ keys; scalar_t__ level; } ;
struct TYPE_5__ {int sb; int sort; } ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct btree*) ;
 int FUNC_5 (struct btree*) ;

__attribute__((used)) static void FUNC_6(struct btree *VAR_0)
{

 if (VAR_0->level && VAR_0->keys.nsets)
  FUNC_1(&VAR_0->keys, &VAR_0->c->sort);
 else
  FUNC_2(&VAR_0->keys, &VAR_0->c->sort);

 if (VAR_0->written < FUNC_4(VAR_0))
  FUNC_0(&VAR_0->keys, FUNC_5(VAR_0),
       FUNC_3(&VAR_0->c->sb));

}
