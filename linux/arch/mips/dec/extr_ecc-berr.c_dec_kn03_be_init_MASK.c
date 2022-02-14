
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int volatile VAR_4 ;
 int volatile VAR_5 ;
 int volatile VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int volatile VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 void* VAR_11 ;
 void* VAR_12 ;

__attribute__((used)) static inline void FUNC_3(void)
{
 volatile u32 *VAR_13 = (void *)FUNC_0(VAR_7 + VAR_3);
 volatile u32 *VAR_14 = (void *)FUNC_0(VAR_10 + VAR_8);

 VAR_12 = (void *)FUNC_0(VAR_7 + VAR_2);
 VAR_11 = (void *)FUNC_0(VAR_7 + VAR_1);
 *VAR_13 = (*VAR_13 & ~(VAR_5 | VAR_6)) |
        VAR_4;
 if (FUNC_1() == VAR_0)
  *VAR_14 |= VAR_9;
 FUNC_2();
}
