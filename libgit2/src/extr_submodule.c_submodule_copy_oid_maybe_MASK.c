
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(
 git_oid *VAR_0, const git_oid *VAR_1, bool VAR_2)
{
 if (VAR_0) {
  if (VAR_2)
   FUNC_0(VAR_0, VAR_1, sizeof(*VAR_0));
  else
   FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 }
}
