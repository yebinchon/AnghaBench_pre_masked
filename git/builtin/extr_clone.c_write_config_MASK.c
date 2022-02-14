
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct TYPE_2__ {int string; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct string_list *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->nr; VAR_2++) {
  if (FUNC_2(VAR_1->items[VAR_2].string,
            VAR_0, ((void*)0)) < 0)
   FUNC_1(FUNC_0("unable to write parameters to config file"));
 }
}
