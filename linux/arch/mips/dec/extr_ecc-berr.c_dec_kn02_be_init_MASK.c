
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int volatile VAR_2 ;
 int volatile VAR_3 ;
 int volatile VAR_4 ;
 int volatile VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int volatile VAR_8 ;
 int FUNC_1 () ;
 void* VAR_9 ;
 void* VAR_10 ;

__attribute__((used)) static inline void FUNC_2(void)
{
 volatile u32 *VAR_11 = (void *)FUNC_0(VAR_7 + VAR_1);

 VAR_10 = (void *)FUNC_0(VAR_7 + VAR_6);
 VAR_9 = (void *)FUNC_0(VAR_7 + VAR_0);


 VAR_8 = *VAR_11 | VAR_5;


 VAR_8 &= ~(VAR_3 | VAR_4);

 VAR_8 |= VAR_2;
 *VAR_11 = VAR_8;
 FUNC_1();
}
