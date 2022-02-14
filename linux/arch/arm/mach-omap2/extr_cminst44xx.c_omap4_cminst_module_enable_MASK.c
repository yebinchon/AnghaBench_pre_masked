
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(u8 VAR_2, u8 VAR_3, u16 VAR_4,
           u16 VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
 VAR_6 &= ~VAR_0;
 VAR_6 |= VAR_2 << VAR_1;
 FUNC_1(VAR_6, VAR_3, VAR_4, VAR_5);
}
