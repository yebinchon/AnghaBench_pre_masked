
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int s16 ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_0, u32 VAR_1, u8 VAR_2, u16 VAR_3,
       s16 VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 VAR_5 &= ~VAR_0;
 VAR_5 |= VAR_1;
 FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4);

 return VAR_5;
}
