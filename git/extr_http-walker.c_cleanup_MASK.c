
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct walker_data {struct walker_data* base; struct walker_data* next; struct walker_data* alt; } ;
struct walker {struct walker_data* data; } ;
struct alt_base {struct alt_base* base; struct alt_base* next; struct alt_base* alt; } ;


 int FUNC_0 (struct walker_data*) ;

__attribute__((used)) static void FUNC_1(struct walker *VAR_0)
{
 struct walker_data *VAR_1 = VAR_0->data;
 struct alt_base *VAR_2, *VAR_3;

 if (VAR_1) {
  VAR_2 = VAR_1->alt;
  while (VAR_2) {
   VAR_3 = VAR_2->next;

   FUNC_0(VAR_2->base);
   FUNC_0(VAR_2);

   VAR_2 = VAR_3;
  }
  FUNC_0(VAR_1);
  VAR_0->data = ((void*)0);
 }
}
