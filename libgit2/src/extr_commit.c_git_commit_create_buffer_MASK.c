
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_signature ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_commit ;
typedef int git_buf ;
typedef int git_array_oid_t ;
struct TYPE_3__ {size_t member_0; int * member_2; int const** member_1; } ;
typedef TYPE_1__ commit_parent_data ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int const*,int const*,char const*,char const*,int const*,int *) ;
 int * FUNC_3 (int const*) ;
 int * FUNC_4 (int const*) ;
 int FUNC_5 (int *,int *,int const*,int ,TYPE_1__*,int *,int) ;

int FUNC_6(git_buf *VAR_2,
 git_repository *VAR_3,
 const git_signature *VAR_4,
 const git_signature *VAR_5,
 const char *VAR_6,
 const char *VAR_7,
 const git_tree *VAR_8,
 size_t VAR_9,
 const git_commit *VAR_10[])
{
 int VAR_11;
 commit_parent_data VAR_12 = { VAR_9, VAR_10, VAR_3 };
 git_array_oid_t VAR_13 = VAR_0;
 const git_oid *VAR_14;

 FUNC_0(VAR_8 && FUNC_4(VAR_8) == VAR_3);

 VAR_14 = FUNC_3(VAR_8);

 if ((VAR_11 = FUNC_5(&VAR_13, VAR_3, VAR_14, VAR_1, &VAR_12, ((void*)0), 1)) < 0)
  return VAR_11;

 VAR_11 = FUNC_2(
  VAR_2, VAR_4, VAR_5,
  VAR_6, VAR_7, VAR_14,
  &VAR_13);

 FUNC_1(VAR_13);
 return VAR_11;
}
