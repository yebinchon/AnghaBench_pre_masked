
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit {TYPE_1__* parents; } ;
struct TYPE_2__ {struct commit* item; scalar_t__ next; } ;


 int FUNC_0 (struct commit*) ;

__attribute__((used)) static int FUNC_1(struct commit *VAR_0, struct commit *VAR_1)
{
 while (VAR_1 && VAR_1 != VAR_0) {
  FUNC_0(VAR_1);
  if (!VAR_1->parents)
   return 1;
  if (VAR_1->parents->next)
   return 0;
  VAR_1 = VAR_1->parents->item;
 }
 return 1;
}
