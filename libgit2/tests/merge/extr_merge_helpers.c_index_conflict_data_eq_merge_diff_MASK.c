
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ status; int entry; } ;
struct TYPE_6__ {scalar_t__ status; int entry; } ;
struct TYPE_8__ {int entry; } ;
struct merge_index_conflict_data {TYPE_2__ theirs; TYPE_1__ ours; TYPE_3__ ancestor; } ;
struct TYPE_9__ {scalar_t__ our_status; scalar_t__ their_status; int their_entry; int our_entry; int ancestor_entry; } ;
typedef TYPE_4__ git_merge_diff ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(const struct merge_index_conflict_data *VAR_0, git_merge_diff *VAR_1)
{
 if (!FUNC_0(&VAR_0->ancestor.entry, &VAR_1->ancestor_entry) ||
  !FUNC_0(&VAR_0->ours.entry, &VAR_1->our_entry) ||
  !FUNC_0(&VAR_0->theirs.entry, &VAR_1->their_entry))
  return 0;

 if (VAR_0->ours.status != VAR_1->our_status ||
  VAR_0->theirs.status != VAR_1->their_status)
  return 0;

 return 1;
}
