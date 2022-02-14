
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc {TYPE_1__* dev; } ;
struct ast_private {scalar_t__ chip; int tx_chip_type; } ;
struct TYPE_2__ {struct ast_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct ast_private*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_3, int VAR_4)
{
 struct ast_private *VAR_5 = VAR_3->dev->dev_private;

 if (VAR_5->chip == VAR_0)
  return;

 switch (VAR_4) {
 case 130:
 case 129:
 case 128:
  FUNC_2(VAR_5, VAR_1, 0x1, 0xdf, 0);
  if (VAR_5->tx_chip_type == VAR_2)
   FUNC_1(VAR_3->dev, 1);
  FUNC_0(VAR_3);
  break;
 case 131:
  if (VAR_5->tx_chip_type == VAR_2)
   FUNC_1(VAR_3->dev, 0);
  FUNC_2(VAR_5, VAR_1, 0x1, 0xdf, 0x20);
  break;
 }
}
