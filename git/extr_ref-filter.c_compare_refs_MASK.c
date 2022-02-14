
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_sorting {struct ref_sorting* next; } ;
struct ref_array_item {int dummy; } ;


 int FUNC_0 (struct ref_sorting*,struct ref_array_item*,struct ref_array_item*) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 struct ref_array_item *VAR_3 = *((struct ref_array_item **)VAR_0);
 struct ref_array_item *VAR_4 = *((struct ref_array_item **)VAR_1);
 struct ref_sorting *VAR_5;

 for (VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->next) {
  int VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_4);
  if (VAR_6)
   return VAR_6;
 }
 return 0;
}
