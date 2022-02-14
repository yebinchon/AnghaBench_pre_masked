
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btree_write {int * journal; scalar_t__ prio_blocked; } ;
struct btree {TYPE_2__* c; } ;
struct TYPE_3__ {int wait; } ;
struct TYPE_4__ {TYPE_1__ journal; int prio_blocked; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct btree *VAR_0, struct btree_write *VAR_1)
{
 if (VAR_1->prio_blocked &&
     !FUNC_2(VAR_1->prio_blocked, &VAR_0->c->prio_blocked))
  FUNC_3(VAR_0->c);

 if (VAR_1->journal) {
  FUNC_1(VAR_1->journal);
  FUNC_0(&VAR_0->c->journal.wait);
 }

 VAR_1->prio_blocked = 0;
 VAR_1->journal = ((void*)0);
}
