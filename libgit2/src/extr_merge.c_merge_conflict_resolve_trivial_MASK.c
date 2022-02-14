
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int staged; } ;
typedef TYPE_1__ git_merge_diff_list ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ our_status; scalar_t__ their_status; int const their_entry; int const our_entry; } ;
typedef TYPE_2__ git_merge_diff ;
typedef int const git_index_entry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,void*) ;
 scalar_t__ FUNC_3 (int const*,int const*) ;

__attribute__((used)) static int FUNC_4(
 int *VAR_4,
 git_merge_diff_list *VAR_5,
 const git_merge_diff *VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11;
 git_index_entry const *VAR_12 = ((void*)0);
 int VAR_13 = 0;

 FUNC_1(VAR_4 && VAR_5 && VAR_6);

 *VAR_4 = 0;

 if (VAR_6->type == VAR_2 ||
  VAR_6->type == VAR_3)
  return 0;

 if (VAR_6->our_status == VAR_0 ||
  VAR_6->their_status == VAR_0)
  return 0;

 VAR_7 = !FUNC_0(VAR_6->our_entry);
 VAR_8 = !FUNC_0(VAR_6->their_entry);

 VAR_9 = (VAR_6->our_status != VAR_1);
 VAR_10 = (VAR_6->their_status != VAR_1);
 VAR_11 = VAR_9 && VAR_10 &&
  FUNC_3(&VAR_6->our_entry, &VAR_6->their_entry);
 if (VAR_9 && !VAR_7 && !VAR_11)
  VAR_12 = &VAR_6->our_entry;

 else if (VAR_9 && VAR_7 && VAR_8)
  *VAR_4 = 0;

 else if (VAR_7 && !VAR_10)
  *VAR_4 = 0;

 else if (!VAR_9 && VAR_8)
  *VAR_4 = 0;

 else if (VAR_9 && !VAR_10)
  VAR_12 = &VAR_6->our_entry;

 else if (!VAR_9 && VAR_10)
  VAR_12 = &VAR_6->their_entry;
 else
  *VAR_4 = 0;

 if (VAR_12 != ((void*)0) &&
  FUNC_0(*VAR_12) &&
  (VAR_13 = FUNC_2(&VAR_5->staged, (void *)VAR_12)) >= 0)
  *VAR_4 = 1;



 return VAR_13;
}
