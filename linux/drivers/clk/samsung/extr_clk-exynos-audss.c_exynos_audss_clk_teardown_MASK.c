
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; int * hws; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_4;

 for (VAR_4 = VAR_1; VAR_4 < VAR_0; VAR_4++) {
  if (!FUNC_0(VAR_3->hws[VAR_4]))
   FUNC_3(VAR_3->hws[VAR_4]);
 }

 for (; VAR_4 < VAR_2; VAR_4++) {
  if (!FUNC_0(VAR_3->hws[VAR_4]))
   FUNC_1(VAR_3->hws[VAR_4]);
 }

 for (; VAR_4 < VAR_3->num; VAR_4++) {
  if (!FUNC_0(VAR_3->hws[VAR_4]))
   FUNC_2(VAR_3->hws[VAR_4]);
 }
}
