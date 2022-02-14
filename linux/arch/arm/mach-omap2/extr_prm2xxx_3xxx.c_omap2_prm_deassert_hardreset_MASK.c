
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int,int,int ,int ) ;
 int FUNC_2 (scalar_t__,int,int) ;

int FUNC_3(u8 VAR_5, u8 VAR_6, u8 VAR_7,
     s16 VAR_8, u16 VAR_9, u16 VAR_10)
{
 u32 VAR_11, VAR_12;
 int VAR_13;

 VAR_11 = 1 << VAR_5;
 VAR_12 = 1 << VAR_6;


 if (FUNC_0(VAR_8, VAR_3, VAR_11) == 0)
  return -VAR_1;


 FUNC_1(0xffffffff, VAR_12, VAR_8, VAR_4);

 FUNC_1(VAR_11, 0, VAR_8, VAR_3);

 FUNC_2(FUNC_0(VAR_8, VAR_4,
        VAR_12),
     VAR_2, VAR_13);

 return (VAR_13 == VAR_2) ? -VAR_0 : 0;
}
