
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_signature ;
typedef int git_repository ;
typedef int git_oid ;
struct TYPE_3__ {size_t member_0; int const** member_1; } ;
typedef TYPE_1__ commit_parent_oids ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char const*,int const*,int const*,char const*,char const*,int const*,int ,TYPE_1__*,int) ;

int FUNC_1(
 git_oid *VAR_1,
 git_repository *VAR_2,
 const char *VAR_3,
 const git_signature *VAR_4,
 const git_signature *VAR_5,
 const char *VAR_6,
 const char *VAR_7,
 const git_oid *VAR_8,
 size_t VAR_9,
 const git_oid *VAR_10[])
{
 commit_parent_oids VAR_11 = { VAR_9, VAR_10 };

 return FUNC_0(
  VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
  VAR_6, VAR_7, VAR_8,
  VAR_0, &VAR_11, 1);
}
