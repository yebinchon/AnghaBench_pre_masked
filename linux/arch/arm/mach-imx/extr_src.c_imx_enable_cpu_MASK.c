
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int,scalar_t__) ;

void FUNC_5(int VAR_5, bool VAR_6)
{
 u32 VAR_7, VAR_8;

 VAR_5 = FUNC_0(VAR_5);
 VAR_7 = 1 << (VAR_0 + VAR_5 - 1);
 FUNC_2(&VAR_3);
 VAR_8 = FUNC_1(VAR_4 + VAR_2);
 VAR_8 = VAR_6 ? VAR_8 | VAR_7 : VAR_8 & ~VAR_7;
 VAR_8 |= 1 << (VAR_1 + VAR_5 - 1);
 FUNC_4(VAR_8, VAR_4 + VAR_2);
 FUNC_3(&VAR_3);
}
