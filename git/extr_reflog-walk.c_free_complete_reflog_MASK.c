
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct complete_reflogs {int nr; struct complete_reflogs* ref; struct complete_reflogs* items; struct complete_reflogs* message; struct complete_reflogs* email; } ;


 int FUNC_0 (struct complete_reflogs*) ;

__attribute__((used)) static void FUNC_1(struct complete_reflogs *VAR_0)
{
 int VAR_1;

 if (!VAR_0)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr; VAR_1++) {
  FUNC_0(VAR_0->items[VAR_1].email);
  FUNC_0(VAR_0->items[VAR_1].message);
 }
 FUNC_0(VAR_0->items);
 FUNC_0(VAR_0->ref);
 FUNC_0(VAR_0);
}
