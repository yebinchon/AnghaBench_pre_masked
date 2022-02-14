
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {int limited; } ;
struct prio_queue {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct commit {int parents; TYPE_1__ object; } ;
typedef enum rewrite_result { ____Placeholder_rewrite_result } rewrite_result ;


 int VAR_0 ;
 int VAR_1 ;
 struct commit* FUNC_0 (struct rev_info*,int ) ;
 scalar_t__ FUNC_1 (struct rev_info*,struct commit*,int *,struct prio_queue*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static enum rewrite_result FUNC_2(struct rev_info *VAR_5,
      struct commit **VAR_6,
      struct prio_queue *VAR_7)
{
 for (;;) {
  struct commit *VAR_8 = *VAR_6;
  if (!VAR_5->limited)
   if (FUNC_1(VAR_5, VAR_8, ((void*)0), VAR_7) < 0)
    return VAR_2;
  if (VAR_8->object.flags & VAR_1)
   return VAR_4;
  if (!(VAR_8->object.flags & VAR_0))
   return VAR_4;
  if (!VAR_8->parents)
   return VAR_3;
  if ((VAR_8 = FUNC_0(VAR_5, VAR_8->parents)) == ((void*)0))
   return VAR_4;
  *VAR_6 = VAR_8;
 }
}
