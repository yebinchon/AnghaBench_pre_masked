
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int attrcache; } ;
typedef TYPE_1__ git_repository ;
typedef int git_config ;
struct TYPE_15__ {int pool; int macros; int files; int cfg_excl_file; int cfg_attr_file; int lock; } ;
typedef TYPE_2__ git_attr_cache ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *,int ,int ) ;
 TYPE_2__* FUNC_3 (int,int) ;
 TYPE_2__* FUNC_4 (int *,int *,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,char*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 TYPE_2__* FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int **,TYPE_1__*) ;
 int FUNC_13 (int *) ;

int FUNC_14(git_repository *VAR_5)
{
 int VAR_6 = 0;
 git_attr_cache *VAR_7 = FUNC_11(VAR_5);
 git_config *VAR_8 = ((void*)0);

 if (VAR_7)
  return 0;

 VAR_7 = FUNC_3(1, sizeof(git_attr_cache));
 FUNC_0(VAR_7);


 if (FUNC_9(&VAR_7->lock) < 0) {
  FUNC_8(VAR_2, "unable to initialize lock for attr cache");
  FUNC_5(VAR_7);
  return -1;
 }

 if ((VAR_6 = FUNC_12(&VAR_8, VAR_5)) < 0)
  goto cancel;


 VAR_6 = FUNC_2(
  &VAR_7->cfg_attr_file, VAR_8, VAR_0, VAR_1);
 if (VAR_6 < 0)
  goto cancel;

 VAR_6 = FUNC_2(
  &VAR_7->cfg_excl_file, VAR_8, VAR_3, VAR_4);
 if (VAR_6 < 0)
  goto cancel;




 if ((VAR_6 = FUNC_13(&VAR_7->files)) < 0 ||
     (VAR_6 = FUNC_13(&VAR_7->macros)) < 0)
  goto cancel;

 FUNC_10(&VAR_7->pool, 1);

 VAR_7 = FUNC_4(&VAR_5->attrcache, ((void*)0), VAR_7);
 if (VAR_7)
  goto cancel;

 FUNC_7(VAR_8);


 return FUNC_6(VAR_5, "binary", "-diff -crlf -text");

cancel:
 FUNC_1(VAR_7);
 FUNC_7(VAR_8);
 return VAR_6;
}
