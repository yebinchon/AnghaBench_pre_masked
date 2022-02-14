
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_oid ;
typedef int * (* git_commit_parent_callback ) (size_t,void*) ;
struct TYPE_6__ {scalar_t__ size; } ;
typedef TYPE_1__ git_array_oid_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_1__) ;
 int FUNC_3 (TYPE_1__,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int const*,int ) ;
 scalar_t__ FUNC_6 (int const*,int ) ;
 int FUNC_7 (int *,int const*) ;

__attribute__((used)) static int FUNC_8(git_array_oid_t *VAR_4, git_repository *VAR_5, const git_oid *VAR_6,
 git_commit_parent_callback VAR_7, void *VAR_8,
 const git_oid *VAR_9, bool VAR_10)
{
 size_t VAR_11;
 int VAR_12;
 git_oid *VAR_13;
 const git_oid *VAR_14;

 if (VAR_10 && !FUNC_5(VAR_5, VAR_6, VAR_3))
  return -1;

 VAR_11 = 0;
 while ((VAR_14 = VAR_7(VAR_11, VAR_8)) != ((void*)0)) {
  if (VAR_10 && !FUNC_5(VAR_5, VAR_14, VAR_2)) {
   VAR_12 = -1;
   goto on_error;
  }

  VAR_13 = FUNC_1(*VAR_4);
  FUNC_0(VAR_13);

  FUNC_7(VAR_13, VAR_14);
  VAR_11++;
 }

 if (VAR_9 && (VAR_4->size == 0 || FUNC_6(VAR_9, FUNC_3(*VAR_4, 0)))) {
  FUNC_4(VAR_1, "failed to create commit: current tip is not the first parent");
  VAR_12 = VAR_0;
  goto on_error;
 }

 return 0;

on_error:
 FUNC_2(*VAR_4);
 return VAR_12;
}
