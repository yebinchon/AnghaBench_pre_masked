
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct negotiation_state {int non_common_revs; int rev_list; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct commit*) ;
 int FUNC_1 (int *,struct commit*) ;

__attribute__((used)) static void FUNC_2(struct negotiation_state *VAR_1,
     struct commit *VAR_2, int VAR_3)
{
 if (!(VAR_2->object.flags & VAR_3)) {
  VAR_2->object.flags |= VAR_3;

  if (FUNC_0(VAR_2))
   return;

  FUNC_1(&VAR_1->rev_list, VAR_2);

  if (!(VAR_2->object.flags & VAR_0))
   VAR_1->non_common_revs++;
 }
}
