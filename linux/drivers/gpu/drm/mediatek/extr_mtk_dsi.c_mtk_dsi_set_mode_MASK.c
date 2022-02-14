
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_dsi {int mode_flags; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mtk_dsi *VAR_8)
{
 u32 VAR_9 = VAR_1;

 if (VAR_8->mode_flags & VAR_3) {
  if (VAR_8->mode_flags & VAR_4)
   VAR_9 = VAR_0;
  else if (VAR_8->mode_flags & VAR_5)
   VAR_9 = VAR_7;
  else
   VAR_9 = VAR_6;
 }

 FUNC_0(VAR_9, VAR_8->regs + VAR_2);
}
