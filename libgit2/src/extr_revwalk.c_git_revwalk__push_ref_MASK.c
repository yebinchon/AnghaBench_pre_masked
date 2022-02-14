
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_revwalk__push_options ;
struct TYPE_4__ {int repo; } ;
typedef TYPE_1__ git_revwalk ;
typedef int git_oid ;


 scalar_t__ FUNC_0 (int *,int ,char const*) ;
 int FUNC_1 (TYPE_1__*,int *,int const*) ;

int FUNC_2(git_revwalk *VAR_0, const char *VAR_1, const git_revwalk__push_options *VAR_2)
{
 git_oid VAR_3;

 if (FUNC_0(&VAR_3, VAR_0->repo, VAR_1) < 0)
  return -1;

 return FUNC_1(VAR_0, &VAR_3, VAR_2);
}
