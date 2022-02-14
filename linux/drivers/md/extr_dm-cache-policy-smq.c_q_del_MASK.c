
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {int nr_elts; scalar_t__ qs; int es; } ;
struct entry {int sentinel; scalar_t__ level; } ;


 int FUNC_0 (int ,scalar_t__,struct entry*) ;

__attribute__((used)) static void FUNC_1(struct queue *VAR_0, struct entry *VAR_1)
{
 FUNC_0(VAR_0->es, VAR_0->qs + VAR_1->level, VAR_1);
 if (!VAR_1->sentinel)
  VAR_0->nr_elts--;
}
