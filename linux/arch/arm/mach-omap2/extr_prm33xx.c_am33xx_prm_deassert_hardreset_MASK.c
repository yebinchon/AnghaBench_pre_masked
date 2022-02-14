
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
 scalar_t__ FUNC_0 (int,int ,int ,int ) ;
 int FUNC_1 (int,int,int ,int ) ;
 int FUNC_2 (scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_3(u8 VAR_3, u8 VAR_4, u8 VAR_5,
      s16 VAR_6, u16 VAR_7,
      u16 VAR_8)
{
 int VAR_9;
 u32 VAR_10 = 1 << VAR_4;


 if (FUNC_0(VAR_3, 0, VAR_6, VAR_7) == 0)
  return -VAR_1;


 FUNC_1(0xffffffff, VAR_10, VAR_6, VAR_8);


 VAR_10 = 1 << VAR_3;

 FUNC_1(VAR_10, 0, VAR_6, VAR_7);


 FUNC_2(FUNC_0(VAR_4, 0, VAR_6,
          VAR_8),
     VAR_2, VAR_9);

 return (VAR_9 == VAR_2) ? -VAR_0 : 0;
}
