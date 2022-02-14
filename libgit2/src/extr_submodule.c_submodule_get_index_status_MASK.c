
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule ;
typedef int git_oid ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int const*,int const*) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned int *VAR_4, git_submodule *VAR_5)
{
 const git_oid *VAR_6 = FUNC_1(VAR_5);
 const git_oid *VAR_7 = FUNC_2(VAR_5);

 *VAR_4 = *VAR_4 & ~VAR_3;

 if (!VAR_6) {
  if (VAR_7)
   *VAR_4 |= VAR_0;
 }
 else if (!VAR_7)
  *VAR_4 |= VAR_1;
 else if (!FUNC_0(VAR_6, VAR_7))
  *VAR_4 |= VAR_2;
}
