
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {scalar_t__ qs; int es; int nr_elts; } ;
struct entry {scalar_t__ level; int sentinel; int pending_work; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,struct entry*) ;

__attribute__((used)) static void FUNC_2(struct queue *VAR_0, struct entry *VAR_1)
{
 FUNC_0(VAR_1->pending_work);

 if (!VAR_1->sentinel)
  VAR_0->nr_elts++;

 FUNC_1(VAR_0->es, VAR_0->qs + VAR_1->level, VAR_1);
}
