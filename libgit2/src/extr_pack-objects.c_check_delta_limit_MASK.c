
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* delta_sibling; struct TYPE_3__* delta_child; } ;
typedef TYPE_1__ git_pobject ;



__attribute__((used)) static size_t FUNC_0(git_pobject *VAR_0, size_t VAR_1)
{
 git_pobject *VAR_2 = VAR_0->delta_child;
 size_t VAR_3 = VAR_1;

 while (VAR_2) {
  size_t VAR_4 = FUNC_0(VAR_2, VAR_1 + 1);
  if (VAR_3 < VAR_4)
   VAR_3 = VAR_4;
  VAR_2 = VAR_2->delta_sibling;
 }
 return VAR_3;
}
