
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fpga_manager {struct alt_pr_priv* priv; } ;
struct alt_pr_priv {int reg_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct fpga_manager*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct fpga_manager *VAR_4, const char *VAR_5,
        size_t VAR_6)
{
 struct alt_pr_priv *VAR_7 = VAR_4->priv;
 u32 *VAR_8 = (u32 *)VAR_5;
 size_t VAR_9 = 0;

 if (VAR_6 <= 0)
  return -VAR_1;


 while (VAR_6 >= sizeof(u32)) {
  FUNC_1(VAR_8[VAR_9++], VAR_7->reg_base);
  VAR_6 -= sizeof(u32);
 }


 switch (VAR_6) {
 case 3:
  FUNC_1(VAR_8[VAR_9++] & 0x00ffffff, VAR_7->reg_base);
  break;
 case 2:
  FUNC_1(VAR_8[VAR_9++] & 0x0000ffff, VAR_7->reg_base);
  break;
 case 1:
  FUNC_1(VAR_8[VAR_9++] & 0x000000ff, VAR_7->reg_base);
  break;
 case 0:
  break;
 default:

  return -VAR_0;
 }

 if (FUNC_0(VAR_4) == VAR_3)
  return -VAR_2;

 return 0;
}
