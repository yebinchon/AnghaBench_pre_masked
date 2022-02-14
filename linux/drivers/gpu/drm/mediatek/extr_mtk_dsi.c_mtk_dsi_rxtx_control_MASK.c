
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_dsi {int lanes; int mode_flags; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mtk_dsi *VAR_3)
{
 u32 VAR_4;

 switch (VAR_3->lanes) {
 case 1:
  VAR_4 = 1 << 2;
  break;
 case 2:
  VAR_4 = 3 << 2;
  break;
 case 3:
  VAR_4 = 7 << 2;
  break;
 case 4:
  VAR_4 = 0xf << 2;
  break;
 default:
  VAR_4 = 0xf << 2;
  break;
 }

 VAR_4 |= (VAR_3->mode_flags & VAR_1) << 6;
 VAR_4 |= (VAR_3->mode_flags & VAR_2) >> 3;

 FUNC_0(VAR_4, VAR_3->regs + VAR_0);
}
