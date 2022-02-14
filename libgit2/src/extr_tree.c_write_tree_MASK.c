
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_treebuilder ;
struct TYPE_10__ {scalar_t__ entry_count; int oid; } ;
typedef TYPE_1__ git_tree_cache ;
typedef int git_repository ;
typedef int git_oid ;
struct TYPE_11__ {char const* path; int mode; int id; } ;
typedef TYPE_2__ git_index_entry ;
struct TYPE_12__ {int tree; } ;
typedef TYPE_3__ git_index ;
typedef int git_buf ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char const*,int *,int ,int) ;
 scalar_t__ FUNC_2 (char const*,TYPE_3__*,size_t) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int) ;
 size_t FUNC_5 (TYPE_3__*) ;
 TYPE_2__* FUNC_6 (TYPE_3__*,size_t) ;
 int FUNC_7 (int *,int *) ;
 TYPE_1__* FUNC_8 (int ,char const*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int *,int *) ;
 scalar_t__ FUNC_11 (int *,int *,int *) ;
 scalar_t__ FUNC_12 (char const*,char const*,size_t) ;
 char* FUNC_13 (char const*,char) ;
 size_t FUNC_14 (char const*) ;
 char* FUNC_15 (char*,char) ;

__attribute__((used)) static int FUNC_16(
 git_oid *VAR_1,
 git_repository *VAR_2,
 git_index *VAR_3,
 const char *VAR_4,
 size_t VAR_5,
 git_buf *VAR_6)
{
 git_treebuilder *VAR_7 = ((void*)0);
 size_t VAR_8, VAR_9 = FUNC_5(VAR_3);
 int VAR_10;
 size_t VAR_11 = FUNC_14(VAR_4);
 const git_tree_cache *VAR_12;

 VAR_12 = FUNC_8(VAR_3->tree, VAR_4);
 if (VAR_12 != ((void*)0) && VAR_12->entry_count >= 0){
  FUNC_7(VAR_1, &VAR_12->oid);
  return (int)FUNC_2(VAR_4, VAR_3, VAR_5);
 }

 if ((VAR_10 = FUNC_10(&VAR_7, VAR_2, ((void*)0))) < 0 || VAR_7 == ((void*)0))
  return -1;






 for (VAR_8 = VAR_5; VAR_8 < VAR_9; ++VAR_8) {
  const git_index_entry *VAR_13 = FUNC_6(VAR_3, VAR_8);
  const char *VAR_14, *VAR_15;
  if (FUNC_14(VAR_13->path) < VAR_11 ||
      FUNC_12(VAR_13->path, VAR_4, VAR_11) ||
      (VAR_11 > 0 && VAR_13->path[VAR_11] != '/')) {
   break;
  }

  VAR_14 = VAR_13->path + VAR_11;
  if (*VAR_14 == '/')
   VAR_14++;
  VAR_15 = FUNC_13(VAR_14, '/');
  if (VAR_15) {
   git_oid VAR_16;
   int VAR_17;
   char *VAR_18, *VAR_19;

   VAR_18 = FUNC_4(VAR_13->path, VAR_15 - VAR_13->path);
   FUNC_0(VAR_18);


   VAR_17 = FUNC_16(&VAR_16, VAR_2, VAR_3, VAR_18, VAR_8, VAR_6);
   if (VAR_17 < 0) {
    FUNC_3(VAR_18);
    goto on_error;
   } else {
    VAR_8 = VAR_17 - 1;
   }







   VAR_19 = FUNC_15(VAR_18, '/');
   if (VAR_19) {
    VAR_19++;
   } else {
    VAR_19 = VAR_18;
   }

   VAR_10 = FUNC_1(VAR_7, VAR_19, &VAR_16, VAR_0, 1);
   FUNC_3(VAR_18);
   if (VAR_10 < 0)
    goto on_error;
  } else {
   VAR_10 = FUNC_1(VAR_7, VAR_14, &VAR_13->id, VAR_13->mode, 1);
   if (VAR_10 < 0)
    goto on_error;
  }
 }

 if (FUNC_11(VAR_1, VAR_7, VAR_6) < 0)
  goto on_error;

 FUNC_9(VAR_7);
 return (int)VAR_8;

on_error:
 FUNC_9(VAR_7);
 return -1;
}
