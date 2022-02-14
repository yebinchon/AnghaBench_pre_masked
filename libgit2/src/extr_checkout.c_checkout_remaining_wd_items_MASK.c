
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_vector ;
typedef int git_iterator ;
typedef int git_index_entry ;
typedef int checkout_data ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int const**,int *) ;

__attribute__((used)) static int FUNC_1(
 checkout_data *VAR_1,
 git_iterator *VAR_2,
 const git_index_entry *VAR_3,
 git_vector *VAR_4)
{
 int VAR_5 = 0;

 while (VAR_3 && !VAR_5)
  VAR_5 = FUNC_0(VAR_1, VAR_2, &VAR_3, VAR_4);

 if (VAR_5 == VAR_0)
  VAR_5 = 0;

 return VAR_5;
}
