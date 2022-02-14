
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_signature ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_odb ;
typedef int git_object ;
struct TYPE_9__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,char const*) ;
 int FUNC_2 (TYPE_1__*,char) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 char const* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,int *,int ,int ,int ) ;
 int FUNC_9 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_10 (int **,int *) ;
 int FUNC_11 (TYPE_1__*,char*,int const*) ;

__attribute__((used)) static int FUNC_12(
  git_oid *VAR_3,
  git_repository *VAR_4,
  const char *VAR_5,
  const git_object *VAR_6,
  const git_signature *VAR_7,
  const char *VAR_8)
{
 git_buf VAR_9 = VAR_0;
 git_odb *VAR_10;

 FUNC_9(&VAR_9, "object ", FUNC_5(VAR_6));
 FUNC_1(&VAR_9, "type %s\n", FUNC_7(FUNC_6(VAR_6)));
 FUNC_1(&VAR_9, "tag %s\n", VAR_5);
 FUNC_11(&VAR_9, "tagger ", VAR_7);
 FUNC_2(&VAR_9, '\n');

 if (FUNC_3(&VAR_9, VAR_8) < 0)
  goto on_error;

 if (FUNC_10(&VAR_10, VAR_4) < 0)
  goto on_error;

 if (FUNC_8(VAR_3, VAR_10, VAR_9.ptr, VAR_9.size, VAR_2) < 0)
  goto on_error;

 FUNC_0(&VAR_9);
 return 0;

on_error:
 FUNC_0(&VAR_9);
 FUNC_4(VAR_1, "failed to create tag annotation");
 return -1;
}
