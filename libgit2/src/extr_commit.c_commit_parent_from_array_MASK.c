
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_commit ;
struct TYPE_2__ {size_t total; scalar_t__ repo; int ** parents; } ;
typedef TYPE_1__ commit_parent_data ;


 int const* FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;

__attribute__((used)) static const git_oid *FUNC_2(size_t VAR_0, void *VAR_1)
{
 commit_parent_data *VAR_2 = VAR_1;
 const git_commit *VAR_3;
 if (VAR_0 >= VAR_2->total)
  return ((void*)0);
 VAR_3 = VAR_2->parents[VAR_0];
 if (FUNC_1(VAR_3) != VAR_2->repo)
  return ((void*)0);
 return FUNC_0(VAR_3);
}
