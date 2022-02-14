
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rpi_touchscreen {int dsi; } ;
typedef int msg ;


 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct rpi_touchscreen *VAR_0, u16 VAR_1, u32 VAR_2)
{
 u8 VAR_3[] = {
  VAR_1,
  VAR_1 >> 8,
  VAR_2,
  VAR_2 >> 8,
  VAR_2 >> 16,
  VAR_2 >> 24,
 };

 FUNC_0(VAR_0->dsi, VAR_3, sizeof(VAR_3));

 return 0;
}
