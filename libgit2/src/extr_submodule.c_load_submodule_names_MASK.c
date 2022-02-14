
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_strmap ;
typedef int git_repository ;
typedef int git_config_iterator ;
struct TYPE_9__ {int value; int name; } ;
typedef TYPE_1__ git_config_entry ;
typedef int git_config ;
struct TYPE_10__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char const*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,char const*) ;
 int FUNC_8 (TYPE_1__**,int *) ;
 int FUNC_9 (int ,char*,...) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 int FUNC_11 (int **) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *,int ,int ) ;
 char* FUNC_14 (int ,char) ;
 char* FUNC_15 (int ,char) ;

__attribute__((used)) static int FUNC_16(git_strmap **VAR_4, git_repository *VAR_5, git_config *VAR_6)
{
 const char *VAR_7 = "submodule\\..*\\.path";
 git_config_iterator *VAR_8 = ((void*)0);
 git_config_entry *VAR_9;
 git_buf VAR_10 = VAR_0;
 git_strmap *VAR_11;
 int VAR_12, VAR_13;

 *VAR_4 = ((void*)0);

 if ((VAR_13 = FUNC_11(&VAR_11)) < 0)
  goto out;

 if ((VAR_13 = FUNC_7(&VAR_8, VAR_6, VAR_7)) < 0)
  goto out;

 while ((VAR_13 = FUNC_8(&VAR_9, VAR_8)) == 0) {
  const char *VAR_14, *VAR_15;
  VAR_14 = FUNC_14(VAR_9->name, '.');
  VAR_15 = FUNC_15(VAR_9->name, '.');

  if (FUNC_10(VAR_11, VAR_9->value)) {
   FUNC_9(VAR_2,
       "duplicated submodule path '%s'", VAR_9->value);
   VAR_13 = -1;
   goto out;
  }

  FUNC_2(&VAR_10);
  FUNC_5(&VAR_10, VAR_14 + 1, VAR_15 - VAR_14 - 1);
  VAR_12 = FUNC_13(VAR_5, VAR_10.ptr, 0);
  if (VAR_12 < 0) {
   VAR_13 = VAR_12;
   goto out;
  }
  if (!VAR_12)
   continue;

  if ((VAR_13 = FUNC_12(VAR_11, FUNC_1(VAR_9->value), FUNC_3(&VAR_10))) < 0) {
   FUNC_9(VAR_1, "error inserting submodule into hash table");
   VAR_13 = -1;
   goto out;
  }
 }
 if (VAR_13 == VAR_3)
  VAR_13 = 0;

 *VAR_4 = VAR_11;
 VAR_11 = ((void*)0);

out:
 FUNC_0(VAR_11);
 FUNC_4(&VAR_10);
 FUNC_6(VAR_8);
 return VAR_13;
}
