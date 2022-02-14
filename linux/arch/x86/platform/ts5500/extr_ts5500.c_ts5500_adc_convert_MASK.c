
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(u8 VAR_6)
{
 u8 VAR_7, VAR_8;


 FUNC_1(VAR_6 & 0x1f, VAR_4);






 FUNC_2(VAR_3);
 if (FUNC_0(VAR_2) & VAR_1)
  return -VAR_0;


 VAR_7 = FUNC_0(VAR_4);
 VAR_8 = FUNC_0(VAR_5);

 return (VAR_8 << 8) | VAR_7;
}
