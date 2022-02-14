
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static void FUNC_2(int VAR_5, int VAR_6)
{
 u8 VAR_7 = VAR_0 | VAR_1;

 if (VAR_5)
  VAR_7 <<= 1;

 if (VAR_6)
  VAR_4 &= ~VAR_7;
 else
  VAR_4 |= VAR_7;

 FUNC_0(FUNC_1(VAR_3, VAR_4,
          VAR_2));
}
