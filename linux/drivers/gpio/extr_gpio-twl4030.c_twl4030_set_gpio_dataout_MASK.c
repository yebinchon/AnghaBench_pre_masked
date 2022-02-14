
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(int VAR_2, int VAR_3)
{
 u8 VAR_4 = VAR_2 >> 3;
 u8 VAR_5 = FUNC_0(VAR_2 & 0x7);
 u8 VAR_6 = 0;

 if (VAR_3)
  VAR_6 = VAR_1 + VAR_4;
 else
  VAR_6 = VAR_0 + VAR_4;

 return FUNC_1(VAR_6, VAR_5);
}
