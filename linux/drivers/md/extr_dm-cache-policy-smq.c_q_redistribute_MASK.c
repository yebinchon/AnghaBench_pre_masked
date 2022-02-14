
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {unsigned int nr_levels; unsigned int* target_count; int es; struct ilist* qs; } ;
struct ilist {unsigned int nr_elts; } ;
struct entry {unsigned int level; } ;


 struct entry* FUNC_0 (struct queue*,unsigned int) ;
 int FUNC_1 (int ,struct ilist*,struct entry*) ;
 struct entry* FUNC_2 (int ,struct ilist*) ;
 int FUNC_3 (struct queue*) ;

__attribute__((used)) static void FUNC_4(struct queue *VAR_0)
{
 unsigned VAR_1, VAR_2;
 struct ilist *VAR_3, *VAR_4;
 struct entry *VAR_5;

 FUNC_3(VAR_0);

 for (VAR_2 = 0u; VAR_2 < VAR_0->nr_levels - 1u; VAR_2++) {
  VAR_3 = VAR_0->qs + VAR_2;
  VAR_1 = VAR_0->target_count[VAR_2];




  while (VAR_3->nr_elts < VAR_1) {
   VAR_5 = FUNC_0(VAR_0, VAR_2 + 1u);
   if (!VAR_5) {

    break;
   }

   VAR_5->level = VAR_2;
   FUNC_1(VAR_0->es, VAR_3, VAR_5);
  }




  VAR_4 = VAR_0->qs + VAR_2 + 1u;
  while (VAR_3->nr_elts > VAR_1) {
   VAR_5 = FUNC_2(VAR_0->es, VAR_3);

   if (!VAR_5)

    break;

   VAR_5->level = VAR_2 + 1u;
   FUNC_1(VAR_0->es, VAR_4, VAR_5);
  }
 }
}
