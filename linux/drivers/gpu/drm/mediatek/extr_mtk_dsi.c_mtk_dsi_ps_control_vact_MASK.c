
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct videomode {int hactive; int vactive; } ;
struct mtk_dsi {int format; scalar_t__ regs; struct videomode vm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mtk_dsi *VAR_7)
{
 struct videomode *VAR_8 = &VAR_7->vm;
 u32 VAR_9, VAR_10;
 u32 VAR_11;

 if (VAR_7->format == 131)
  VAR_9 = 2;
 else
  VAR_9 = 3;

 VAR_10 = VAR_8->hactive * VAR_9;
 VAR_11 = VAR_10;

 switch (VAR_7->format) {
 case 128:
  VAR_11 |= VAR_6;
  break;
 case 130:
  VAR_11 |= VAR_5;
  break;
 case 129:
  VAR_11 |= VAR_3;
  break;
 case 131:
  VAR_11 |= VAR_4;
  break;
 }

 FUNC_0(VAR_8->vactive, VAR_7->regs + VAR_2);
 FUNC_0(VAR_11, VAR_7->regs + VAR_1);
 FUNC_0(VAR_10, VAR_7->regs + VAR_0);
}
