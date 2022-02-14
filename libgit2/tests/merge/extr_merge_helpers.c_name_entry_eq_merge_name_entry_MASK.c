
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct merge_name_entry {int their_path; int our_path; int ancestor_path; } ;
struct TYPE_3__ {int theirs; int ours; int ancestor; } ;
typedef TYPE_1__ git_index_name_entry ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const struct merge_name_entry *VAR_0, const git_index_name_entry *VAR_1)
{
 if (FUNC_0(VAR_0->ancestor_path, VAR_1->ancestor) == 0 ||
  FUNC_0(VAR_0->our_path, VAR_1->ours) == 0 ||
  FUNC_0(VAR_0->their_path, VAR_1->theirs) == 0)
  return 0;

 return 1;
}
