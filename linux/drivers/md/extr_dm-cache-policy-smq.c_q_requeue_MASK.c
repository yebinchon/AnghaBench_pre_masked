
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {unsigned int nr_levels; int es; scalar_t__ qs; } ;
struct entry {unsigned int level; scalar_t__ sentinel; } ;


 struct entry* FUNC_0 (int ,scalar_t__) ;
 struct entry* FUNC_1 (int ,struct entry*) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct queue*,struct entry*) ;
 int FUNC_4 (struct queue*,struct entry*) ;
 int FUNC_5 (struct queue*,struct entry*,struct entry*) ;

__attribute__((used)) static void FUNC_6(struct queue *VAR_0, struct entry *VAR_1, unsigned VAR_2,
        struct entry *VAR_3, struct entry *VAR_4)
{
 struct entry *VAR_5;
 unsigned VAR_6 = 0;
 unsigned VAR_7 = FUNC_2(VAR_0->nr_levels - 1u, VAR_1->level + VAR_2);


 if (VAR_2 && (VAR_1->level < VAR_0->nr_levels - 1u)) {
  for (VAR_5 = FUNC_0(VAR_0->es, VAR_0->qs + VAR_7); VAR_5 && VAR_5->sentinel; VAR_5 = FUNC_1(VAR_0->es, VAR_5))
   VAR_6++;

  if (VAR_5) {
   FUNC_3(VAR_0, VAR_5);
   VAR_5->level = VAR_1->level;
   if (VAR_3) {
    switch (VAR_6) {
    case 0:
     FUNC_5(VAR_0, VAR_3, VAR_5);
     break;

    case 1:
     FUNC_5(VAR_0, VAR_4, VAR_5);
     break;

    default:
     FUNC_4(VAR_0, VAR_5);
    }
   } else
    FUNC_4(VAR_0, VAR_5);
  }
 }

 FUNC_3(VAR_0, VAR_1);
 VAR_1->level = VAR_7;
 FUNC_4(VAR_0, VAR_1);
}
