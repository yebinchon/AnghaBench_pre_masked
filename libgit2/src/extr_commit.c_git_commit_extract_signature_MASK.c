
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_oid ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_7__ {TYPE_1__ cached; } ;
typedef TYPE_2__ git_odb_object ;
typedef int git_odb ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int *,char) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 () ;
 char* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__**,int *,int *) ;
 int FUNC_11 (int **,int *) ;
 char* FUNC_12 (char const*,char) ;
 int FUNC_13 (char const*) ;

int FUNC_14(git_buf *VAR_4, git_buf *VAR_5, git_repository *VAR_6, git_oid *VAR_7, const char *VAR_8)
{
 git_odb_object *VAR_9;
 git_odb *VAR_10;
 const char *VAR_11;
 const char *VAR_12, *VAR_13;
 int VAR_14;

 FUNC_1(VAR_4);
 FUNC_1(VAR_5);

 if (!VAR_8)
  VAR_8 = "gpgsig";

 if ((VAR_14 = FUNC_11(&VAR_10, VAR_6)) < 0)
  return VAR_14;

 if ((VAR_14 = FUNC_10(&VAR_9, VAR_10, VAR_7)) < 0)
  return VAR_14;

 if (VAR_9->cached.type != VAR_3) {
  FUNC_6(VAR_1, "the requested type does not match the type in ODB");
  VAR_14 = VAR_0;
  goto cleanup;
 }

 VAR_11 = FUNC_8(VAR_9);

 while ((VAR_12 = FUNC_12(VAR_11, '\n')) && VAR_12[1] != '\0') {
  VAR_12++;
  if (FUNC_0(VAR_11, VAR_8)) {
   if (FUNC_3(VAR_5, VAR_11, VAR_12 - VAR_11) < 0)
    return -1;

   VAR_11 = VAR_12;
   continue;
  }

  VAR_12 = VAR_11;
  VAR_12 += FUNC_13(VAR_8);
  VAR_13 = FUNC_12(VAR_12, '\n');
  if (VAR_12[0] != ' ') {
   VAR_11 = VAR_12;
   continue;
  }
  if (!VAR_13)
   goto malformed;

  VAR_12++;

  FUNC_3(VAR_4, VAR_12, VAR_13 - VAR_12);
  if (FUNC_2(VAR_4))
   goto oom;


  while (VAR_13[1] == ' ') {
   FUNC_4(VAR_4, '\n');
   VAR_12 = VAR_13 + 2;
   VAR_13 = FUNC_12(VAR_12, '\n');
   if (!VAR_13)
    goto malformed;

   FUNC_3(VAR_4, VAR_12, VAR_13 - VAR_12);
  }

  if (FUNC_2(VAR_4))
   goto oom;

  VAR_14 = FUNC_5(VAR_5, VAR_13+1);
  FUNC_9(VAR_9);
  return VAR_14;
 }

 FUNC_6(VAR_2, "this commit is not signed");
 VAR_14 = VAR_0;
 goto cleanup;

malformed:
 FUNC_6(VAR_2, "malformed header");
 VAR_14 = -1;
 goto cleanup;
oom:
 FUNC_7();
 VAR_14 = -1;
 goto cleanup;

cleanup:
 FUNC_9(VAR_9);
 FUNC_1(VAR_4);
 FUNC_1(VAR_5);
 return VAR_14;
}
