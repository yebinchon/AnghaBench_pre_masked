
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(u16 VAR_0, u16 VAR_1, u16 VAR_2,
          int VAR_3)
{
 int VAR_4, VAR_5;


 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_5 = FUNC_0(VAR_0, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_3)
  return (VAR_4 << 4) | (VAR_5 >> 4);
 else
  return (VAR_4 << 4) | (VAR_5 & 0x0f);
}
