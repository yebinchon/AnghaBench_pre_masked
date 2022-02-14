
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct op_register_config {unsigned long reset_values; unsigned long proc_mode; unsigned long enable; } ;


 unsigned long FUNC_0 (int,unsigned long) ;

__attribute__((used)) static void
FUNC_1(struct op_register_config *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2, VAR_3, VAR_4, VAR_5;

 VAR_3 = (VAR_1 == 0 ? 0xfffful << 48
         : VAR_1 == 1 ? 0xfffful << 32
  : 0x3fff << 16);

 VAR_4 = 1 << 9 | 1 << 8;

 VAR_5 = VAR_0->reset_values;

 if ((VAR_0->proc_mode & VAR_4) == VAR_4) {
  VAR_2 = FUNC_0(5, 0);
  VAR_2 = (VAR_5 & VAR_3) | (VAR_2 & ~VAR_3 & -2);
  FUNC_0(6, VAR_2);
 } else {
  FUNC_0(0, -1);
  VAR_2 = FUNC_0(5, 0);
  VAR_2 = (VAR_5 & VAR_3) | (VAR_2 & ~VAR_3 & -2);
  FUNC_0(6, VAR_2);
  FUNC_0(1, VAR_0->enable);
 }
}
