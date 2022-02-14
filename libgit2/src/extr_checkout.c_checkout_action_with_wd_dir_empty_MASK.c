
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_diff_delta ;
typedef int checkout_data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int *,int const*) ;

__attribute__((used)) static int FUNC_1(
 int *VAR_2,
 checkout_data *VAR_3,
 const git_diff_delta *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);


 if (VAR_5 == 0 && *VAR_2 != VAR_0)
  *VAR_2 |= VAR_1;

 return VAR_5;
}
