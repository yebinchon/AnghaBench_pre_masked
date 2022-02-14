
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int const*,void*,int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int) ;
 int VAR_0 ;

__attribute__((used)) static void *
FUNC_5(const BIGNUM *VAR_1)
{
 int VAR_2, VAR_3;
 void *VAR_4;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == 0)
  return (((void*)0));

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 VAR_3 = FUNC_0(VAR_1, VAR_4, VAR_2);
 if (VAR_3 < 0) {
  FUNC_2(VAR_0);
  FUNC_3(VAR_4);
  return (((void*)0));
 }

 return (VAR_4);
}
