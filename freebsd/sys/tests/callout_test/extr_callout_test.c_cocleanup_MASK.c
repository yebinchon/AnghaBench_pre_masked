
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* co_array; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2[VAR_3]) {
   if (VAR_2[VAR_3]->co_array) {
    FUNC_0(VAR_2[VAR_3]->co_array, VAR_1);
    VAR_2[VAR_3]->co_array = ((void*)0);
   }
   FUNC_0(VAR_2[VAR_3], VAR_1);
   VAR_2[VAR_3] = ((void*)0);
  }
 }
}
