
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_11__ {char* ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_12__ {TYPE_1__ tmp; } ;
typedef TYPE_2__ git_attr_session ;
typedef size_t git_attr_file_source ;
struct TYPE_13__ {int ** file; } ;
typedef TYPE_3__ git_attr_file_entry ;
typedef int git_attr_file ;
typedef int git_attr_cache ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *,char const*) ;
 int FUNC_3 (TYPE_3__**,int *,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,char const*,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;
 int * FUNC_9 (int *) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static int FUNC_12(
 git_attr_file **VAR_1,
 git_attr_file_entry **VAR_2,
 git_repository *VAR_3,
 git_attr_session *VAR_4,
 git_attr_file_source VAR_5,
 const char *VAR_6,
 const char *VAR_7)
{
 int VAR_8 = 0;
 git_buf VAR_9 = VAR_0;
 const char *VAR_10 = FUNC_10(VAR_3), *VAR_11;
 git_attr_cache *VAR_12 = FUNC_9(VAR_3);
 git_attr_file_entry *VAR_13 = ((void*)0);
 git_attr_file *VAR_14 = ((void*)0);


 if (VAR_6 != ((void*)0) && FUNC_8(VAR_7) < 0) {
  git_buf *VAR_15 = VAR_4 ? &VAR_4->tmp : &VAR_9;

  if (FUNC_7(VAR_15, VAR_6, VAR_7) < 0)
   return -1;

  VAR_7 = VAR_15->ptr;
 }

 VAR_11 = VAR_7;
 if (VAR_10 && !FUNC_5(VAR_11, VAR_10))
  VAR_11 += FUNC_11(VAR_10);


 if ((VAR_8 = FUNC_1(VAR_12)) < 0)
  goto cleanup;

 VAR_13 = FUNC_2(VAR_12, VAR_11);
 if (!VAR_13)
  VAR_8 = FUNC_3(&VAR_13, VAR_3, VAR_11);
 else if (VAR_13->file[VAR_5] != ((void*)0)) {
  VAR_14 = VAR_13->file[VAR_5];
  FUNC_0(VAR_14);
 }

 FUNC_4(VAR_12);

cleanup:
 *VAR_1 = VAR_14;
 *VAR_2 = VAR_13;

 FUNC_6(&VAR_9);
 return VAR_8;
}
