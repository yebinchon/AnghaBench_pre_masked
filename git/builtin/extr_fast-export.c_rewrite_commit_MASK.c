
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct commit {TYPE_2__* parents; TYPE_1__ object; } ;
struct TYPE_4__ {struct commit* item; scalar_t__ next; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct commit *FUNC_0(struct commit *VAR_2)
{
 for (;;) {
  if (VAR_2->parents && VAR_2->parents->next)
   break;
  if (VAR_2->object.flags & VAR_1)
   break;
  if (!(VAR_2->object.flags & VAR_0))
   break;
  if (!VAR_2->parents)
   return ((void*)0);
  VAR_2 = VAR_2->parents->item;
 }
 return VAR_2;
}
