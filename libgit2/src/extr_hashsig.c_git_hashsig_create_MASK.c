
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int hashsig_in_progress ;
typedef int git_hashsig_option_t ;
typedef int git_hashsig ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,size_t,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

int FUNC_6(
 git_hashsig **VAR_0,
 const char *VAR_1,
 size_t VAR_2,
 git_hashsig_option_t VAR_3)
{
 int VAR_4;
 hashsig_in_progress VAR_5;
 git_hashsig *VAR_6 = FUNC_3(VAR_3);
 FUNC_0(VAR_6);

 FUNC_5(&VAR_5, VAR_6);

 VAR_4 = FUNC_2(VAR_6, (const uint8_t *)VAR_1, VAR_2, &VAR_5);

 if (!VAR_4)
  VAR_4 = FUNC_4(VAR_6);

 if (!VAR_4)
  *VAR_0 = VAR_6;
 else
  FUNC_1(VAR_6);

 return VAR_4;
}
