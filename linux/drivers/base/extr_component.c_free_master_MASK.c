
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct master {int node; struct component_match* match; } ;
struct component_match {int num; TYPE_1__* compare; } ;
struct component {int * master; } ;
struct TYPE_2__ {struct component* component; } ;


 int FUNC_0 (struct master*) ;
 int FUNC_1 (struct master*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct master *VAR_0)
{
 struct component_match *VAR_1 = VAR_0->match;
 int VAR_2;

 FUNC_0(VAR_0);
 FUNC_2(&VAR_0->node);

 if (VAR_1) {
  for (VAR_2 = 0; VAR_2 < VAR_1->num; VAR_2++) {
   struct component *VAR_3 = VAR_1->compare[VAR_2].component;
   if (VAR_3)
    VAR_3->master = ((void*)0);
  }
 }

 FUNC_1(VAR_0);
}
