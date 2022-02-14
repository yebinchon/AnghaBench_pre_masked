
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct its_vm {int nr_vpes; int * vpes; int * vlpi_count; } ;
struct its_node {size_t list_nr; } ;


 int VAR_0 ;
 int FUNC_0 (struct its_node*,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct its_node *VAR_2, struct its_vm *VAR_3)
{
 unsigned long VAR_4;


 if (!VAR_0)
  return;

 FUNC_1(&VAR_1, VAR_4);

 if (!--VAR_3->vlpi_count[VAR_2->list_nr]) {
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_3->nr_vpes; VAR_5++)
   FUNC_0(VAR_2, VAR_3->vpes[VAR_5], 0);
 }

 FUNC_2(&VAR_1, VAR_4);
}
