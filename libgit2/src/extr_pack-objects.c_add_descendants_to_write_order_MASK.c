
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* delta_sibling; struct TYPE_6__* delta; struct TYPE_6__* delta_child; } ;
typedef TYPE_1__ git_pobject ;


 int FUNC_0 (TYPE_1__**,size_t*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(git_pobject **VAR_0, size_t *VAR_1,
 git_pobject *VAR_2)
{
 int VAR_3 = 1;
 while (VAR_2) {
  if (VAR_3) {
   git_pobject *VAR_4;

   FUNC_0(VAR_0, VAR_1, VAR_2);

   for (VAR_4 = VAR_2->delta_sibling; VAR_4; VAR_4 = VAR_4->delta_sibling) {
    FUNC_0(VAR_0, VAR_1, VAR_4);
   }
  }

  if (VAR_2->delta_child) {
   VAR_3 = 1;
   VAR_2 = VAR_2->delta_child;
  } else {
   VAR_3 = 0;

   if (VAR_2->delta_sibling) {
    VAR_2 = VAR_2->delta_sibling;
    continue;
   }

   VAR_2 = VAR_2->delta;
   while (VAR_2 && !VAR_2->delta_sibling) {


    VAR_2 = VAR_2->delta;
   }
   if (!VAR_2) {

    return;
   }

   VAR_2 = VAR_2->delta_sibling;
  }
 };
}
