
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {struct ast_private* dev_private; } ;
struct ast_private {scalar_t__ config_mode; scalar_t__ chip; scalar_t__ tx_chip_type; TYPE_1__* dev; } ;
struct TYPE_2__ {int pdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct ast_private*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct ast_private*,int ,int,int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int ,int,int*) ;
 int FUNC_10 (int ,int,int) ;

void FUNC_11(struct drm_device *VAR_6)
{
 u32 VAR_7;
 struct ast_private *VAR_8 = VAR_6->dev_private;

 FUNC_9(VAR_8->dev->pdev, 0x04, &VAR_7);
 VAR_7 |= 0x3;
 FUNC_10(VAR_8->dev->pdev, 0x04, VAR_7);

 FUNC_1(VAR_6);
 FUNC_4(VAR_8);
 FUNC_0(VAR_6);
 FUNC_7(VAR_6);

 if (VAR_8->config_mode == VAR_5) {
  if (VAR_8->chip == VAR_2)
   FUNC_6(VAR_6);
  else if (VAR_8->chip == VAR_0 || VAR_8->chip == VAR_1)
   FUNC_5(VAR_6);
  else
   FUNC_3(VAR_6);

  FUNC_2(VAR_6);
 } else {
  if (VAR_8->tx_chip_type != VAR_4)
   FUNC_8(VAR_8, VAR_3, 0xa3, 0xcf, 0x80);
 }
}
