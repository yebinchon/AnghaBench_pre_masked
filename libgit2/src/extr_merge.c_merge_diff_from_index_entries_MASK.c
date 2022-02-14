
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_pool ;
struct TYPE_6__ {int pool; } ;
typedef TYPE_1__ git_merge_diff_list ;
struct TYPE_7__ {void* their_status; void* our_status; int their_entry; int our_entry; int ancestor_entry; } ;
typedef TYPE_2__ git_merge_diff ;
typedef int git_index_entry ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int *,int const*) ;
 void* FUNC_2 (int const*,int const*) ;

__attribute__((used)) static git_merge_diff *FUNC_3(
 git_merge_diff_list *VAR_3,
 const git_index_entry **VAR_4)
{
 git_merge_diff *VAR_5;
 git_pool *VAR_6 = &VAR_3->pool;

 if ((VAR_5 = FUNC_0(VAR_6, sizeof(git_merge_diff))) == ((void*)0))
  return ((void*)0);

 if (FUNC_1(&VAR_5->ancestor_entry, VAR_6, VAR_4[VAR_0]) < 0 ||
  FUNC_1(&VAR_5->our_entry, VAR_6, VAR_4[VAR_1]) < 0 ||
  FUNC_1(&VAR_5->their_entry, VAR_6, VAR_4[VAR_2]) < 0)
  return ((void*)0);

 VAR_5->our_status = FUNC_2(
  VAR_4[VAR_0], VAR_4[VAR_1]);
 VAR_5->their_status = FUNC_2(
  VAR_4[VAR_0], VAR_4[VAR_2]);

 return VAR_5;
}
