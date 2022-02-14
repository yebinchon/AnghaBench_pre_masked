
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ieee754dp {int sign; int bexp; int mant; } ;
typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline union ieee754dp FUNC_1(int VAR_4, int VAR_5, u64 VAR_6)
{
 union ieee754dp VAR_7;

 FUNC_0((VAR_4) == 0 || (VAR_4) == 1);
 FUNC_0((VAR_5) >= VAR_2 - 1 + VAR_0
        && (VAR_5) <= VAR_1 + 1 + VAR_0);
 FUNC_0(((VAR_6) >> VAR_3) == 0);

 VAR_7.sign = VAR_4;
 VAR_7.bexp = VAR_5;
 VAR_7.mant = VAR_6;

 return VAR_7;
}
