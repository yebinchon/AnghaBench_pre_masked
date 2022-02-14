
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {int es; scalar_t__ qs; int nr_levels; } ;
struct entry {scalar_t__ sentinel; } ;


 struct entry* FUNC_0 (int ,scalar_t__) ;
 struct entry* FUNC_1 (int ,struct entry*) ;
 unsigned int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static struct entry *FUNC_3(struct queue *VAR_0, unsigned VAR_1, bool VAR_2)
{
 unsigned VAR_3;
 struct entry *VAR_4;

 VAR_1 = FUNC_2(VAR_1, VAR_0->nr_levels);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  for (VAR_4 = FUNC_0(VAR_0->es, VAR_0->qs + VAR_3); VAR_4; VAR_4 = FUNC_1(VAR_0->es, VAR_4)) {
   if (VAR_4->sentinel) {
    if (VAR_2)
     continue;
    else
     break;
   }

   return VAR_4;
  }

 return ((void*)0);
}
