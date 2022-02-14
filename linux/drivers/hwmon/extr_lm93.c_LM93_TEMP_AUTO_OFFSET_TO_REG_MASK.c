
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static u8 FUNC_1(u8 VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 u8 VAR_4 = FUNC_0(VAR_1, VAR_3);


 if (VAR_2 < 2)
  return (VAR_0 & 0xf0) | (VAR_4 & 0x0f);


 else
  return (VAR_4 << 4 & 0xf0) | (VAR_0 & 0x0f);
}
