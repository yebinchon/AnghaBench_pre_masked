
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const git_reference ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const**,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

int FUNC_7(
  const git_reference *VAR_2)
{
 git_reference *VAR_3;
 bool VAR_4 = 0;
 int VAR_5;

 FUNC_0(VAR_2);

 if (!FUNC_2(VAR_2))
  return 0;

 VAR_5 = FUNC_5(&VAR_3, FUNC_4(VAR_2));

 if (VAR_5 == VAR_1 || VAR_5 == VAR_0)
  return 0;

 if (VAR_5 < 0)
  return -1;

 VAR_4 = FUNC_6(
  FUNC_3(VAR_2),
  FUNC_3(VAR_3)) == 0;

 FUNC_1(VAR_3);

 return VAR_4;
}
