
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ili9881c {int dsi; } ;
typedef int buf ;


 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct ili9881c *VAR_0, u8 VAR_1)
{
 u8 VAR_2[4] = { 0xff, 0x98, 0x81, VAR_1 };
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->dsi, VAR_2, sizeof(VAR_2));
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
