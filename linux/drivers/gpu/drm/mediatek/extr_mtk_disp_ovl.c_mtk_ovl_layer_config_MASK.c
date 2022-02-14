
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_plane_pending_state {unsigned int addr; int pitch; unsigned int format; int y; int x; int height; int width; scalar_t__ enable; } ;
struct mtk_plane_state {struct mtk_plane_pending_state pending; } ;
struct mtk_disp_ovl {int dummy; } ;
struct mtk_ddp_comp {scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (struct mtk_disp_ovl*,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct mtk_disp_ovl* FUNC_5 (struct mtk_ddp_comp*) ;
 int FUNC_6 (struct mtk_ddp_comp*,unsigned int) ;
 int FUNC_7 (struct mtk_ddp_comp*,unsigned int) ;
 unsigned int FUNC_8 (struct mtk_disp_ovl*,unsigned int) ;
 int FUNC_9 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct mtk_ddp_comp *VAR_2, unsigned int VAR_3,
     struct mtk_plane_state *VAR_4)
{
 struct mtk_disp_ovl *VAR_5 = FUNC_5(VAR_2);
 struct mtk_plane_pending_state *VAR_6 = &VAR_4->pending;
 unsigned int VAR_7 = VAR_6->addr;
 unsigned int VAR_8 = VAR_6->pitch & 0xffff;
 unsigned int VAR_9 = VAR_6->format;
 unsigned int VAR_10 = (VAR_6->y << 16) | VAR_6->x;
 unsigned int VAR_11 = (VAR_6->height << 16) | VAR_6->width;
 unsigned int VAR_12;

 if (!VAR_6->enable)
  FUNC_6(VAR_2, VAR_3);

 VAR_12 = FUNC_8(VAR_5, VAR_9);
 if (VAR_3 != 0)
  VAR_12 |= VAR_0 | VAR_1;

 FUNC_9(VAR_12, VAR_2->regs + FUNC_1(VAR_3));
 FUNC_9(VAR_8, VAR_2->regs + FUNC_3(VAR_3));
 FUNC_9(VAR_11, VAR_2->regs + FUNC_4(VAR_3));
 FUNC_9(VAR_10, VAR_2->regs + FUNC_2(VAR_3));
 FUNC_9(VAR_7, VAR_2->regs + FUNC_0(VAR_5, VAR_3));

 if (VAR_6->enable)
  FUNC_7(VAR_2, VAR_3);
}
