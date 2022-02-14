
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun8i_tcon_top {int reg_lock; scalar_t__ regs; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct device*,char*) ;
 struct sun8i_tcon_top* FUNC_2 (struct device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;

int FUNC_8(struct device *VAR_4, int VAR_5, int VAR_6)
{
 struct sun8i_tcon_top *VAR_7 = FUNC_2(VAR_4);
 unsigned long VAR_8;
 u32 VAR_9;

 if (!FUNC_6(VAR_4->of_node)) {
  FUNC_1(VAR_4, "Device is not TCON TOP!\n");
  return -VAR_0;
 }

 if (VAR_5 > 1) {
  FUNC_1(VAR_4, "Mixer index is too high!\n");
  return -VAR_0;
 }

 if (VAR_6 > 3) {
  FUNC_1(VAR_4, "TCON index is too high!\n");
  return -VAR_0;
 }

 FUNC_4(&VAR_7->reg_lock, VAR_8);

 VAR_9 = FUNC_3(VAR_7->regs + VAR_3);
 if (VAR_5 == 0) {
  VAR_9 &= ~VAR_1;
  VAR_9 |= FUNC_0(VAR_1, VAR_6);
 } else {
  VAR_9 &= ~VAR_2;
  VAR_9 |= FUNC_0(VAR_2, VAR_6);
 }
 FUNC_7(VAR_9, VAR_7->regs + VAR_3);

 FUNC_5(&VAR_7->reg_lock, VAR_8);

 return 0;
}
