
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct ref_array_item {struct atom_value* value; } ;
struct atom_value {int dummy; } ;


 int FUNC_0 (struct atom_value*) ;
 scalar_t__ FUNC_1 (struct ref_array_item*,struct strbuf*) ;

__attribute__((used)) static int FUNC_2(struct ref_array_item *VAR_0, int VAR_1,
         struct atom_value **VAR_2, struct strbuf *VAR_3)
{
 if (!VAR_0->value) {
  if (FUNC_1(VAR_0, VAR_3))
   return -1;
  FUNC_0(VAR_0->value);
 }
 *VAR_2 = &VAR_0->value[VAR_1];
 return 0;
}
