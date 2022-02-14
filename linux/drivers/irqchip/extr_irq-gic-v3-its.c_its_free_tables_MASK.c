
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct its_node {TYPE_1__* tables; } ;
struct TYPE_2__ {int * base; int order; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_1(struct its_node *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->tables[VAR_2].base) {
   FUNC_0((unsigned long)VAR_1->tables[VAR_2].base,
       VAR_1->tables[VAR_2].order);
   VAR_1->tables[VAR_2].base = ((void*)0);
  }
 }
}
