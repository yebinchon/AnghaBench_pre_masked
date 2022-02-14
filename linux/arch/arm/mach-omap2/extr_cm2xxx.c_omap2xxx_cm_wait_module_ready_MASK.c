
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int s16 ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int* VAR_3 ;
 int FUNC_2 (int,int,int) ;

int FUNC_3(u8 VAR_4, s16 VAR_5, u16 VAR_6,
      u8 VAR_7)
{
 int VAR_8 = 0, VAR_9 = 0;
 u8 VAR_10;
 u32 VAR_11;

 if (!VAR_6 || (VAR_6 > FUNC_0(VAR_3)))
  return -VAR_1;

 VAR_10 = VAR_3[VAR_6 - 1];

 VAR_11 = 1 << VAR_7;
 VAR_8 = VAR_11;

 FUNC_2(((FUNC_1(VAR_5, VAR_10) &
       VAR_11) == VAR_8), VAR_2, VAR_9);

 return (VAR_9 < VAR_2) ? 0 : -VAR_0;
}
