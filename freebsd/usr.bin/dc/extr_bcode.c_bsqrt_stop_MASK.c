
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int const*,int const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static bool
FUNC_7(const BIGNUM *VAR_0, const BIGNUM *VAR_1, u_int *VAR_2)
{
 BIGNUM *VAR_3;
 bool VAR_4;

 VAR_3 = FUNC_3();
 FUNC_6(VAR_3);
 FUNC_5(FUNC_4(VAR_3, VAR_0, VAR_1));
 if (FUNC_1(VAR_3))
  (*VAR_2)++;
 VAR_4 = FUNC_2(VAR_3);
 FUNC_0(VAR_3);
 return (VAR_4 || *VAR_2 > 1);
}
