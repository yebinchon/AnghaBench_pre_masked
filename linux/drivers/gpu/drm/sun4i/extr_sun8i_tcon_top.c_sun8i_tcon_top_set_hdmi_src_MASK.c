
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun8i_tcon_top {int reg_lock; scalar_t__ regs; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 struct sun8i_tcon_top* FUNC_2 (struct device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;

int FUNC_8(struct device *VAR_3, int VAR_4)
{
 struct sun8i_tcon_top *VAR_5 = FUNC_2(VAR_3);
 unsigned long VAR_6;
 u32 VAR_7;

 if (!FUNC_6(VAR_3->of_node)) {
  FUNC_1(VAR_3, "Device is not TCON TOP!\n");
  return -VAR_0;
 }

 if (VAR_4 < 2 || VAR_4 > 3) {
  FUNC_1(VAR_3, "TCON index must be 2 or 3!\n");
  return -VAR_0;
 }

 FUNC_4(&VAR_5->reg_lock, VAR_6);

 VAR_7 = FUNC_3(VAR_5->regs + VAR_1);
 VAR_7 &= ~VAR_2;
 VAR_7 |= FUNC_0(VAR_2, VAR_4 - 1);
 FUNC_7(VAR_7, VAR_5->regs + VAR_1);

 FUNC_5(&VAR_5->reg_lock, VAR_6);

 return 0;
}
