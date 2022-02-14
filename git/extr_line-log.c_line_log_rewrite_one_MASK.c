
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rev_info {int dummy; } ;
struct TYPE_3__ {int flags; } ;
struct commit {TYPE_2__* parents; TYPE_1__ object; } ;
typedef enum rewrite_result { ____Placeholder_rewrite_result } rewrite_result ;
struct TYPE_4__ {struct commit* item; scalar_t__ next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum rewrite_result FUNC_0(struct rev_info *VAR_4, struct commit **VAR_5)
{
 for (;;) {
  struct commit *VAR_6 = *VAR_5;
  if (VAR_6->parents && VAR_6->parents->next)
   return VAR_3;
  if (VAR_6->object.flags & VAR_1)
   return VAR_3;
  if (!(VAR_6->object.flags & VAR_0))
   return VAR_3;
  if (!VAR_6->parents)
   return VAR_2;
  *VAR_5 = VAR_6->parents->item;
 }
}
