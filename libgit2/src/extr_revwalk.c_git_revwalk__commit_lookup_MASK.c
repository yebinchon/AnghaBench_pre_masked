
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int commits; } ;
typedef TYPE_1__ git_revwalk ;
typedef int git_oid ;
struct TYPE_10__ {int oid; } ;
typedef TYPE_2__ git_commit_list_node ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int const*) ;
 TYPE_2__* FUNC_2 (int ,int const*) ;
 scalar_t__ FUNC_3 (int ,int *,TYPE_2__*) ;

git_commit_list_node *FUNC_4(
 git_revwalk *VAR_0, const git_oid *VAR_1)
{
 git_commit_list_node *VAR_2;


 if ((VAR_2 = FUNC_2(VAR_0->commits, VAR_1)) != ((void*)0))
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 FUNC_1(&VAR_2->oid, VAR_1);

 if ((FUNC_3(VAR_0->commits, &VAR_2->oid, VAR_2)) < 0)
  return ((void*)0);

 return VAR_2;
}
