
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pszind_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 size_t VAR_1 ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (size_t) ;

size_t
FUNC_3(size_t VAR_2) {
 size_t VAR_3;
 pszind_t VAR_4;

 FUNC_0(VAR_2 > 0);
 FUNC_0((VAR_2 & VAR_0) == 0);

 VAR_4 = FUNC_2(VAR_2 - VAR_1 + 1);
 if (VAR_4 == 0) {






  return VAR_2;
 }
 VAR_3 = FUNC_1(VAR_4 - 1) + VAR_1;
 FUNC_0(VAR_3 <= VAR_2);
 return VAR_3;
}
