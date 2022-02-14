
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int resolved; } ;
typedef TYPE_1__ git_merge_diff_list ;
struct TYPE_7__ {scalar_t__ type; scalar_t__ our_status; scalar_t__ their_status; int their_entry; int our_entry; } ;
typedef TYPE_2__ git_merge_diff ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(
 int *VAR_3,
 git_merge_diff_list *VAR_4,
 const git_merge_diff *VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8, VAR_9;
 int VAR_10 = 0;

 FUNC_1(VAR_3 && VAR_4 && VAR_5);

 *VAR_3 = 0;

 if (VAR_5->type == VAR_1 ||
  VAR_5->type == VAR_2)
  return 0;

 VAR_6 = !FUNC_0(VAR_5->our_entry);
 VAR_7 = !FUNC_0(VAR_5->their_entry);

 VAR_8 = (VAR_5->our_status != VAR_0);
 VAR_9 = (VAR_5->their_status != VAR_0);


 if (VAR_8 && VAR_6 && VAR_7)
  *VAR_3 = 1;

 else if (VAR_6 && !VAR_9)
  *VAR_3 = 1;

 else if (!VAR_8 && VAR_7)
  *VAR_3 = 1;

 if (*VAR_3)
  FUNC_2(&VAR_4->resolved, (git_merge_diff *)VAR_5);

 return VAR_10;
}
