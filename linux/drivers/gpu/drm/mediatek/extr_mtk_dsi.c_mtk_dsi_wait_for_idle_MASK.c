
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_dsi {scalar_t__ regs; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct mtk_dsi*) ;
 int FUNC_2 (struct mtk_dsi*) ;
 int FUNC_3 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static void FUNC_4(struct mtk_dsi *VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 VAR_3 = FUNC_3(VAR_2->regs + VAR_1, VAR_4, !(VAR_4 & VAR_0),
     4, 2000000);
 if (VAR_3) {
  FUNC_0("polling dsi wait not busy timeout!\n");

  FUNC_1(VAR_2);
  FUNC_2(VAR_2);
 }
}
