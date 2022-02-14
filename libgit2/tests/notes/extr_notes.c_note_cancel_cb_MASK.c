
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(
 const git_oid *VAR_0, const git_oid *VAR_1, void *VAR_2)
{
 unsigned int *VAR_3 = (unsigned int *)VAR_2;

 FUNC_0(VAR_0);
 FUNC_0(VAR_1);

 (*VAR_3)++;

 return (*VAR_3 > 2);
}
