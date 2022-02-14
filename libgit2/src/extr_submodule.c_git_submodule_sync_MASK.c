
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int flags; int url; int name; int * repo; } ;
typedef TYPE_1__ git_submodule ;
typedef int git_repository ;
typedef int git_config ;
struct TYPE_12__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char,char*,int ,char*) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (int *,int ,int ,int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*,int *) ;

int FUNC_11(git_submodule *VAR_3)
{
 int VAR_4 = 0;
 git_config *VAR_5 = ((void*)0);
 git_buf VAR_6 = VAR_0;
 git_repository *VAR_7 = ((void*)0);

 if (!VAR_3->url) {
  FUNC_6(VAR_1,
   "no URL configured for submodule '%s'", VAR_3->name);
  return -1;
 }



 if (!(VAR_4 = FUNC_7(&VAR_5, VAR_3->repo)) &&
  !(VAR_4 = FUNC_2(&VAR_6, "submodule.%s.url", VAR_3->name)))
  VAR_4 = FUNC_4(VAR_5, VAR_6.ptr, VAR_3->url, 1, 1);



 if (!VAR_4 &&
  (VAR_3->flags & VAR_2) != 0 &&
  !(VAR_4 = FUNC_9(&VAR_7, VAR_3)))
 {
  git_buf VAR_8 = VAR_0;

  if ((VAR_4 = FUNC_7(&VAR_5, VAR_7)) < 0)
                                                   ;
  else if ((VAR_4 = FUNC_10(&VAR_8, VAR_7)) < 0) {
   FUNC_5();
   VAR_4 = FUNC_3(&VAR_6, "remote.origin.url");
  } else {
   VAR_4 = FUNC_1(
    &VAR_6, '.', "remote", VAR_8.ptr, "url");
   FUNC_0(&VAR_8);
  }

  if (!VAR_4)
   VAR_4 = FUNC_4(VAR_5, VAR_6.ptr, VAR_3->url, 1, 0);

  FUNC_8(VAR_7);
 }

 FUNC_0(&VAR_6);

 return VAR_4;
}
