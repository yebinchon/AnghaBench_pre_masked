
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {struct property const* value; struct property const* name; struct property* next; } ;


 int FUNC_0 (struct property const*) ;

__attribute__((used)) static void FUNC_1(const struct property *VAR_0)
{
 struct property *VAR_1;
 for (; VAR_0; VAR_0 = VAR_1) {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0->name);
  FUNC_0(VAR_0->value);
  FUNC_0(VAR_0);
 }

}
