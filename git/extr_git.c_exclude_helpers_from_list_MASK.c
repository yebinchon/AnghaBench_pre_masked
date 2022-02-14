
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct TYPE_2__ {int string; } ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (struct string_list*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct string_list *VAR_0)
{
 int VAR_1 = 0;

 while (VAR_1 < VAR_0->nr) {
  if (FUNC_0(VAR_0->items[VAR_1].string, "--"))
   FUNC_1(VAR_0, VAR_1, 0);
  else
   VAR_1++;
 }
}
