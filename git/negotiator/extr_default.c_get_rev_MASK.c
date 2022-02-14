
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_9__ {scalar_t__ nr; } ;
struct negotiation_state {scalar_t__ non_common_revs; TYPE_4__ rev_list; } ;
struct commit_list {struct commit_list* next; TYPE_3__* item; } ;
struct TYPE_7__ {int flags; struct object_id const oid; } ;
struct commit {TYPE_2__ object; struct commit_list* parents; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_8__ {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct negotiation_state*,TYPE_3__*,int,int ) ;
 int FUNC_1 (struct commit*) ;
 struct commit* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct negotiation_state*,TYPE_3__*,unsigned int) ;

__attribute__((used)) static const struct object_id *FUNC_4(struct negotiation_state *VAR_4)
{
 struct commit *VAR_5 = ((void*)0);

 while (VAR_5 == ((void*)0)) {
  unsigned int VAR_6;
  struct commit_list *VAR_7;

  if (VAR_4->rev_list.nr == 0 || VAR_4->non_common_revs == 0)
   return ((void*)0);

  VAR_5 = FUNC_2(&VAR_4->rev_list);
  FUNC_1(VAR_5);
  VAR_7 = VAR_5->parents;

  VAR_5->object.flags |= VAR_2;
  if (!(VAR_5->object.flags & VAR_0))
   VAR_4->non_common_revs--;

  if (VAR_5->object.flags & VAR_0) {

   VAR_5 = ((void*)0);
   VAR_6 = VAR_0 | VAR_3;
  } else if (VAR_5->object.flags & VAR_1)

   VAR_6 = VAR_0 | VAR_3;
  else

   VAR_6 = VAR_3;

  while (VAR_7) {
   if (!(VAR_7->item->object.flags & VAR_3))
    FUNC_3(VAR_4, VAR_7->item, VAR_6);
   if (VAR_6 & VAR_0)
    FUNC_0(VAR_4, VAR_7->item, 1, 0);
   VAR_7 = VAR_7->next;
  }
 }

 return &VAR_5->object.oid;
}
