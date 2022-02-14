
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ili9881c {int dsi; } ;
typedef int buf ;


 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct ili9881c *VAR_0, u8 VAR_1, u8 VAR_2)
{
 u8 VAR_3[2] = { VAR_1, VAR_2 };
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0->dsi, VAR_3, sizeof(VAR_3));
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
