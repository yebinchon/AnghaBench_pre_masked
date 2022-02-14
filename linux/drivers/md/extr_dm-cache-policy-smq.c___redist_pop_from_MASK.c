
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {unsigned int nr_levels; unsigned int qs; int es; } ;
struct entry {unsigned int level; int sentinel; } ;


 int FUNC_0 (int ,unsigned int,struct entry*) ;
 struct entry* FUNC_1 (int ,unsigned int) ;
 struct entry* FUNC_2 (int ,struct entry*) ;

__attribute__((used)) static struct entry *FUNC_3(struct queue *VAR_0, unsigned VAR_1)
{
 struct entry *VAR_2;

 for (; VAR_1 < VAR_0->nr_levels; VAR_1++)
  for (VAR_2 = FUNC_1(VAR_0->es, VAR_0->qs + VAR_1); VAR_2; VAR_2 = FUNC_2(VAR_0->es, VAR_2))
   if (!VAR_2->sentinel) {
    FUNC_0(VAR_0->es, VAR_0->qs + VAR_2->level, VAR_2);
    return VAR_2;
   }

 return ((void*)0);
}
