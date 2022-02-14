
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ git_blame_options ;
struct TYPE_8__ {int mailmap; int paths; int * path; int hunks; TYPE_1__ options; int * repository; } ;
typedef TYPE_2__ git_blame ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int,int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;

git_blame* FUNC_6(
 git_repository *VAR_3,
 git_blame_options VAR_4,
 const char *VAR_5)
{
 git_blame *VAR_6 = FUNC_0(1, sizeof(git_blame));
 if (!VAR_6)
  return ((void*)0);

 VAR_6->repository = VAR_3;
 VAR_6->options = VAR_4;

 if (FUNC_4(&VAR_6->hunks, 8, VAR_1) < 0 ||
  FUNC_4(&VAR_6->paths, 8, VAR_2) < 0 ||
  (VAR_6->path = FUNC_1(VAR_5)) == ((void*)0) ||
  FUNC_5(&VAR_6->paths, FUNC_1(VAR_5)) < 0)
 {
  FUNC_2(VAR_6);
  return ((void*)0);
 }

 if (VAR_4.flags & VAR_0 &&
     FUNC_3(&VAR_6->mailmap, VAR_3) < 0) {
  FUNC_2(VAR_6);
  return ((void*)0);
 }

 return VAR_6;
}
