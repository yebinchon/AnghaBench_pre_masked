
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int pdev; struct ast_private* dev_private; } ;
struct ast_private {scalar_t__ ioregs; scalar_t__ regs; struct ast_private* dp501_fw_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ast_private*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct ast_private*,int ,int,int) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct ast_private*) ;
 int FUNC_6 (int ,scalar_t__) ;

void FUNC_7(struct drm_device *VAR_2)
{
 struct ast_private *VAR_3 = VAR_2->dev_private;


 FUNC_3(VAR_3, VAR_0, 0xa1, 0x04);

 FUNC_2(VAR_2);
 FUNC_5(VAR_3->dp501_fw_addr);
 FUNC_1(VAR_2);
 FUNC_4(VAR_2);

 FUNC_0(VAR_3);
 if (VAR_3->ioregs != VAR_3->regs + VAR_1)
  FUNC_6(VAR_2->pdev, VAR_3->ioregs);
 FUNC_6(VAR_2->pdev, VAR_3->regs);
 FUNC_5(VAR_3);
}
