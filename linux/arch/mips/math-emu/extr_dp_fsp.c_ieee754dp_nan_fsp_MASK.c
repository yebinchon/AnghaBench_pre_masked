
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ieee754dp {int dummy; } ieee754dp ;
typedef int u64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 union ieee754dp FUNC_0 (int,scalar_t__,int) ;

__attribute__((used)) static inline union ieee754dp FUNC_1(int VAR_4, u64 VAR_5)
{
 return FUNC_0(VAR_4, VAR_1 + 1 + VAR_0,
         VAR_5 << (VAR_2 - VAR_3));
}
