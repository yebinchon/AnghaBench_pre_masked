
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ khiter_t ;
typedef int git_oidmap ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *,int const*) ;
 int VAR_1 ;

int FUNC_3(git_oidmap *VAR_2, const git_oid *VAR_3)
{
 khiter_t VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_4 == FUNC_1(VAR_2))
  return VAR_0;
 FUNC_0(VAR_1, VAR_2, VAR_4);
 return 0;
}
