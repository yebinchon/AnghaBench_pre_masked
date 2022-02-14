
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct videomode {int vsync_len; int vback_porch; int vfront_porch; int vactive; int hsync_len; int hback_porch; int hfront_porch; } ;
struct mtk_dsi {scalar_t__ format; int mode_flags; scalar_t__ regs; struct videomode vm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mtk_dsi*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mtk_dsi *VAR_9)
{
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 struct videomode *VAR_14 = &VAR_9->vm;

 if (VAR_9->format == VAR_7)
  VAR_13 = 2;
 else
  VAR_13 = 3;

 FUNC_1(VAR_14->vsync_len, VAR_9->regs + VAR_6);
 FUNC_1(VAR_14->vback_porch, VAR_9->regs + VAR_4);
 FUNC_1(VAR_14->vfront_porch, VAR_9->regs + VAR_5);
 FUNC_1(VAR_14->vactive, VAR_9->regs + VAR_3);

 VAR_10 = (VAR_14->hsync_len * VAR_13 - 10);

 if (VAR_9->mode_flags & VAR_8)
  VAR_11 =
   (VAR_14->hback_porch * VAR_13 - 10);
 else
  VAR_11 = ((VAR_14->hback_porch + VAR_14->hsync_len) *
   VAR_13 - 10);

 VAR_12 = (VAR_14->hfront_porch * VAR_13 - 12);

 FUNC_1(VAR_10, VAR_9->regs + VAR_2);
 FUNC_1(VAR_11, VAR_9->regs + VAR_0);
 FUNC_1(VAR_12, VAR_9->regs + VAR_1);

 FUNC_0(VAR_9);
}
