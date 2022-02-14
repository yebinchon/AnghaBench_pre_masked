
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {unsigned int is_worktree; int is_bare; struct TYPE_20__* commondir; struct TYPE_20__* gitlink; struct TYPE_20__* gitdir; } ;
typedef TYPE_1__ git_repository ;
typedef int git_config ;
struct TYPE_21__ {scalar_t__ size; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (TYPE_1__**,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,char const*,unsigned int,char const*) ;
 void* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*,int *,TYPE_2__*) ;
 int FUNC_11 (unsigned int*,TYPE_1__*) ;
 TYPE_1__* FUNC_12 () ;

int FUNC_13(
 git_repository **VAR_4,
 const char *VAR_5,
 unsigned int VAR_6,
 const char *VAR_7)
{
 int VAR_8;
 unsigned VAR_9;
 git_buf VAR_10 = VAR_0, VAR_11 = VAR_0,
  VAR_12 = VAR_0, VAR_13 = VAR_0;
 git_repository *VAR_14 = ((void*)0);
 git_config *VAR_15 = ((void*)0);

 if (VAR_6 & VAR_3)
  return FUNC_1(VAR_4, VAR_5);

 if (VAR_4)
  *VAR_4 = ((void*)0);

 VAR_8 = FUNC_3(
  &VAR_10, &VAR_11, &VAR_12, &VAR_13, VAR_5, VAR_6, VAR_7);

 if (VAR_8 < 0 || !VAR_4)
  goto cleanup;

 VAR_14 = FUNC_12();
 FUNC_0(VAR_14);

 VAR_14->gitdir = FUNC_4(&VAR_10);
 FUNC_0(VAR_14->gitdir);

 if (VAR_12.size) {
  VAR_14->gitlink = FUNC_4(&VAR_12);
  FUNC_0(VAR_14->gitlink);
 }
 if (VAR_13.size) {
  VAR_14->commondir = FUNC_4(&VAR_13);
  FUNC_0(VAR_14->commondir);
 }

 if ((VAR_8 = FUNC_11(&VAR_9, VAR_14)) < 0)
  goto cleanup;
 VAR_14->is_worktree = VAR_9;






 VAR_8 = FUNC_7(&VAR_15, VAR_14);
 if (VAR_8 < 0 && VAR_8 != VAR_1)
  goto cleanup;

 if (VAR_15 && (VAR_8 = FUNC_2(VAR_15)) < 0)
  goto cleanup;

 if ((VAR_6 & VAR_2) != 0)
  VAR_14->is_bare = 1;
 else {

  if (VAR_15 &&
      ((VAR_8 = FUNC_9(VAR_14, VAR_15)) < 0 ||
       (VAR_8 = FUNC_10(VAR_14, VAR_15, &VAR_11)) < 0))
   goto cleanup;
 }

cleanup:
 FUNC_5(&VAR_10);
 FUNC_5(&VAR_11);
 FUNC_5(&VAR_12);
 FUNC_5(&VAR_13);
 FUNC_6(VAR_15);

 if (VAR_8 < 0)
  FUNC_8(VAR_14);

 if (VAR_4)
  *VAR_4 = VAR_14;

 return VAR_8;
}
