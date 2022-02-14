
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int path; int repo; int name; } ;
typedef TYPE_1__ git_submodule ;
typedef int git_repository ;
typedef int git_config ;
struct TYPE_8__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const**,int *,int ) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int **,int ,int ,char const*,int) ;

int FUNC_7(
 git_repository **VAR_1,
 const git_submodule *VAR_2,
 int VAR_3)
{
 int VAR_4;
 git_repository *VAR_5 = ((void*)0);
 const char *VAR_6;
 git_config *VAR_7 = ((void*)0);
 git_buf VAR_8 = VAR_0;

 FUNC_0(VAR_1 && VAR_2);


 if ((VAR_4 = FUNC_2(&VAR_8, "submodule.%s.url", VAR_2->name)) < 0 ||
  (VAR_4 = FUNC_5(&VAR_7, VAR_2->repo)) < 0 ||
  (VAR_4 = FUNC_4(&VAR_6, VAR_7, VAR_8.ptr)) < 0 ||
  (VAR_4 = FUNC_6(&VAR_5, VAR_2->repo, VAR_2->path, VAR_6, VAR_3)) < 0)
  goto done;

 *VAR_1 = VAR_5;

done:
 FUNC_3(VAR_7);
 FUNC_1(&VAR_8);
 return VAR_4;
}
