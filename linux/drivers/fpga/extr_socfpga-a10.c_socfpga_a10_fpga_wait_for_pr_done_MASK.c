
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct a10_fpga_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct a10_fpga_priv*) ;

__attribute__((used)) static int FUNC_1(struct a10_fpga_priv *VAR_4)
{
 u32 VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < 10 ; VAR_6++) {
  VAR_5 = FUNC_0(VAR_4);

  if (VAR_5 & VAR_1)
   return -VAR_2;

  if (VAR_5 & VAR_0)
   return 0;
 }

 return -VAR_3;
}
