
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_off_t ;
typedef int git_buf ;
typedef int git_blob ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int *,int ,size_t) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;

int FUNC_6(const git_blob *VAR_2)
{
 git_buf VAR_3 = VAR_0;
 git_off_t VAR_4;

 FUNC_0(VAR_2);

 VAR_4 = FUNC_2(VAR_2);

 FUNC_3(&VAR_3, FUNC_1(VAR_2),
  (size_t)FUNC_5(VAR_4, VAR_1));
 return FUNC_4(&VAR_3);
}
