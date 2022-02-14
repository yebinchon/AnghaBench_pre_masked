
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int resolved; int staged; int pool; } ;
typedef TYPE_2__ git_merge_diff_list ;
struct TYPE_15__ {int path; int id; } ;
struct TYPE_12__ {int id; } ;
struct TYPE_14__ {scalar_t__ our_status; scalar_t__ their_status; scalar_t__ type; TYPE_8__ their_entry; int path; TYPE_8__ our_entry; TYPE_1__ ancestor_entry; } ;
typedef TYPE_3__ git_merge_diff ;
typedef TYPE_3__ git_index_entry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_8__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 TYPE_3__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_8__*,int) ;

__attribute__((used)) static int FUNC_6(
 int *VAR_4,
 git_merge_diff_list *VAR_5,
 const git_merge_diff *VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9, VAR_10;
 git_index_entry *VAR_11;
 int VAR_12 = 0;

 FUNC_1(VAR_4 && VAR_5 && VAR_6);

 *VAR_4 = 0;

 if (!FUNC_0(VAR_6->our_entry) ||
  !FUNC_0(VAR_6->their_entry))
  return 0;

 VAR_7 = (VAR_6->our_status == VAR_0);
 VAR_8 = (VAR_6->their_status == VAR_0);

 if (!VAR_7 && !VAR_8)
  return 0;


 if (VAR_6->type == VAR_2 ||
  VAR_6->type == VAR_1 ||
  VAR_6->type == VAR_3)
  return 0;

 VAR_9 = (FUNC_2(&VAR_6->ancestor_entry.id, &VAR_6->our_entry.id) != 0);
 VAR_10 = (FUNC_2(&VAR_6->ancestor_entry.id, &VAR_6->their_entry.id) != 0);


 if (VAR_9 && VAR_10 &&
  FUNC_2(&VAR_6->our_entry.id, &VAR_6->their_entry.id) != 0)
  return 0;

 if ((VAR_11 = FUNC_3(&VAR_5->pool, sizeof(git_index_entry))) == ((void*)0))
  return -1;

 if (VAR_9)
  FUNC_5(VAR_11, &VAR_6->our_entry, sizeof(git_index_entry));
 else
  FUNC_5(VAR_11, &VAR_6->their_entry, sizeof(git_index_entry));

 if (VAR_7)
  VAR_11->path = VAR_6->our_entry.path;
 else
  VAR_11->path = VAR_6->their_entry.path;

 *VAR_4 = 1;

 FUNC_4(&VAR_5->staged, VAR_11);
 FUNC_4(&VAR_5->resolved, (git_merge_diff *)VAR_6);

 return VAR_12;
}
