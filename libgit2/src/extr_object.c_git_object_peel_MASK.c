
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ git_object_t ;
typedef int const git_object ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int const**,int const*) ;
 int FUNC_3 (int const**,int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int,int ,scalar_t__) ;

int FUNC_8(
 git_object **VAR_5,
 const git_object *VAR_6,
 git_object_t VAR_7)
{
 git_object *VAR_8, *VAR_9 = ((void*)0);
 int VAR_10;

 FUNC_0(VAR_6 && VAR_5);

 FUNC_0(VAR_7 == VAR_3 ||
  VAR_7 == VAR_2 ||
  VAR_7 == VAR_4 ||
  VAR_7 == VAR_1 ||
  VAR_7 == VAR_0);

 if ((VAR_10 = FUNC_1(FUNC_6(VAR_6), VAR_7)) < 0)
  return FUNC_7(VAR_10, FUNC_5(VAR_6), VAR_7);

 if (FUNC_6(VAR_6) == VAR_7)
  return FUNC_3(VAR_5, (git_object *)VAR_6);

 VAR_8 = (git_object *)VAR_6;

 while (!(VAR_10 = FUNC_2(&VAR_9, VAR_8))) {

  if (VAR_8 != VAR_6)
   FUNC_4(VAR_8);

  if (FUNC_6(VAR_9) == VAR_7) {
   *VAR_5 = VAR_9;
   return 0;
  }

  if (VAR_7 == VAR_0 &&
   FUNC_6(VAR_9) != FUNC_6(VAR_6))
  {
   *VAR_5 = VAR_9;
   return 0;
  }

  VAR_8 = VAR_9;
  VAR_9 = ((void*)0);
 }

 if (VAR_8 != VAR_6)
  FUNC_4(VAR_8);

 FUNC_4(VAR_9);

 if (VAR_10)
  VAR_10 = FUNC_7(VAR_10, FUNC_5(VAR_6), VAR_7);

 return VAR_10;
}
