
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;

u8 FUNC_1(u16 VAR_1)
{
 u16 VAR_2;

 VAR_1 = FUNC_0(VAR_1, 20, 1000);
 VAR_2 = VAR_1 < 100 ? VAR_1 / 10 : VAR_1 / 20 + 5;
 return (VAR_2 << 2) & VAR_0;
}
