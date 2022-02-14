
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packing_data {struct packed_git** in_pack_by_idx; int repo; } ;
struct packed_git {int index; struct packed_git* next; } ;


 int FUNC_0 (struct packed_git**,int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct packed_git**) ;
 struct packed_git* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct packing_data *VAR_1)
{
 struct packed_git **VAR_2, *VAR_3;
 int VAR_4 = 0, VAR_5 = 1U << VAR_0;

 FUNC_0(VAR_2, VAR_5);




 VAR_2[VAR_4++] = ((void*)0);
 for (VAR_3 = FUNC_2(VAR_1->repo); VAR_3; VAR_3 = VAR_3->next, VAR_4++) {
  if (VAR_4 == VAR_5) {
   FUNC_1(VAR_2);
   return;
  }
  VAR_3->index = VAR_4;
  VAR_2[VAR_4] = VAR_3;
 }
 VAR_1->in_pack_by_idx = VAR_2;
}
