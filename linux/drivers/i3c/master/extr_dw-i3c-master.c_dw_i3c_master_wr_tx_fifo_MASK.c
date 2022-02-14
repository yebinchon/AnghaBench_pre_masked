
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int const u32 ;
struct dw_i3c_master {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const*,int const*,int) ;
 int FUNC_1 (scalar_t__,int const*,int) ;

__attribute__((used)) static void FUNC_2(struct dw_i3c_master *VAR_1,
         const u8 *VAR_2, int VAR_3)
{
 FUNC_1(VAR_1->regs + VAR_0, VAR_2, VAR_3 / 4);
 if (VAR_3 & 3) {
  u32 VAR_4 = 0;

  FUNC_0(&VAR_4, VAR_2 + (VAR_3 & ~3), VAR_3 & 3);
  FUNC_1(VAR_1->regs + VAR_0, &VAR_4, 1);
 }
}
