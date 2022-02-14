
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ update; int name; int url; int repo; } ;
typedef TYPE_1__ git_submodule ;
typedef int git_config ;
struct TYPE_9__ {char const* ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (int *,char const*,char const*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 char* FUNC_7 (scalar_t__) ;

int FUNC_8(git_submodule *VAR_3, int VAR_4)
{
 int VAR_5;
 const char *VAR_6;
 git_buf VAR_7 = VAR_0, VAR_8 = VAR_0;
 git_config *VAR_9 = ((void*)0);

 if (!VAR_3->url) {
  FUNC_4(VAR_1,
   "no URL configured for submodule '%s'", VAR_3->name);
  return -1;
 }

 if ((VAR_5 = FUNC_5(&VAR_9, VAR_3->repo)) < 0)
  return VAR_5;



 if ((VAR_5 = FUNC_6(&VAR_8, VAR_3->repo, VAR_3->url)) < 0 ||
  (VAR_5 = FUNC_1(&VAR_7, "submodule.%s.url", VAR_3->name)) < 0 ||
  (VAR_5 = FUNC_2(
   VAR_9, VAR_7.ptr, VAR_8.ptr, VAR_4 != 0, 0)) < 0)
  goto cleanup;



 VAR_6 = (VAR_3->update == VAR_2) ?
  ((void*)0) : FUNC_7(VAR_3->update);

 if ((VAR_5 = FUNC_1(&VAR_7, "submodule.%s.update", VAR_3->name)) < 0 ||
  (VAR_5 = FUNC_2(
   VAR_9, VAR_7.ptr, VAR_6, VAR_4 != 0, 0)) < 0)
  goto cleanup;



cleanup:
 FUNC_3(VAR_9);
 FUNC_0(&VAR_7);
 FUNC_0(&VAR_8);

 return VAR_5;
}
