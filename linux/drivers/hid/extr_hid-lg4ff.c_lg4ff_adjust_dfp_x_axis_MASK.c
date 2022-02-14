
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int s32 ;


 int FUNC_0 (int,int,int) ;

__attribute__((used)) static s32 FUNC_1(s32 VAR_0, u16 VAR_1)
{
 u16 VAR_2;
 s32 VAR_3;

 if (VAR_1 == 900)
  return VAR_0;
 else if (VAR_1 == 200)
  return VAR_0;
 else if (VAR_1 < 200)
  VAR_2 = 200;
 else
  VAR_2 = 900;

 VAR_3 = 8192 + FUNC_0(VAR_0 - 8192, VAR_2, VAR_1);
 if (VAR_3 < 0)
  return 0;
 else if (VAR_3 > 16383)
  return 16383;
 else
  return VAR_3;
}
