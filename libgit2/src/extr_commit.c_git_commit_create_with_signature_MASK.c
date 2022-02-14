
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_oid ;
typedef int git_odb ;
struct TYPE_14__ {int tree_id; } ;
typedef TYPE_1__ git_commit ;
struct TYPE_15__ {int size; int ptr; } ;
typedef TYPE_2__ git_buf ;
typedef int git_array_oid_t ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,char const*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,char const*,char const*) ;
 TYPE_1__* FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,char const*,int) ;
 int FUNC_8 (TYPE_2__*,char const*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int *,int *,int ,int ,int ) ;
 int FUNC_12 (int **,int *) ;
 int FUNC_13 (char const*) ;
 char* FUNC_14 (char const*,char*) ;
 int FUNC_15 (int *,int *,int *,int ,TYPE_1__*,int *,int) ;

int FUNC_16(
 git_oid *VAR_5,
 git_repository *VAR_6,
 const char *VAR_7,
 const char *VAR_8,
 const char *VAR_9)
{
 git_odb *VAR_10;
 int VAR_11 = 0;
 const char *VAR_12;
 const char *VAR_13;
 git_buf VAR_14 = VAR_1;
 git_commit *VAR_15;
 git_array_oid_t VAR_16 = VAR_0;


 VAR_15 = FUNC_3(1, sizeof(git_commit));
 FUNC_0(VAR_15);
 if ((VAR_11 = FUNC_1(VAR_15, VAR_7, FUNC_13(VAR_7), 0)) < 0)
  goto cleanup;

 if ((VAR_11 = FUNC_15(&VAR_16, VAR_6, &VAR_15->tree_id, VAR_4, VAR_15, ((void*)0), 1)) < 0)
  goto cleanup;

 FUNC_4(VAR_16);


 VAR_13 = FUNC_14(VAR_7, "\n\n");
 if (!VAR_13) {
  FUNC_10(VAR_2, "malformed commit contents");
  VAR_11 = -1;
  goto cleanup;
 }


 VAR_13++;
 FUNC_7(&VAR_14, VAR_7, VAR_13 - VAR_7);

 if (VAR_8 != ((void*)0)) {
  VAR_12 = VAR_9 ? VAR_9 : "gpgsig";
  FUNC_2(&VAR_14, VAR_12, VAR_8);
 }

 FUNC_8(&VAR_14, VAR_13);

 if (FUNC_6(&VAR_14))
  return -1;

 if ((VAR_11 = FUNC_12(&VAR_10, VAR_6)) < 0)
  goto cleanup;

 if ((VAR_11 = FUNC_11(VAR_5, VAR_10, VAR_14.ptr, VAR_14.size, VAR_3)) < 0)
  goto cleanup;

cleanup:
 FUNC_9(VAR_15);
 FUNC_5(&VAR_14);
 return VAR_11;
}
