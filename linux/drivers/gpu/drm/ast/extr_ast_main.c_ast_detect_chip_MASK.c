
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_device {TYPE_1__* pdev; struct ast_private* dev_private; } ;
struct ast_private {int chip; int vga2_clone; int support_wide_screen; int tx_chip_type; int * dp501_fw_addr; } ;
struct TYPE_2__ {scalar_t__ device; int revision; } ;


 void* VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;

 int FUNC_0 (char*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct drm_device*,int *,int) ;
 int FUNC_2 (struct drm_device*,int*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct ast_private*,int ,int,int) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct ast_private*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int,int ) ;

__attribute__((used)) static int FUNC_10(struct drm_device *VAR_11, bool *VAR_12)
{
 struct ast_private *VAR_13 = VAR_11->dev_private;
 uint32_t VAR_14, VAR_15;







 if (!FUNC_6(VAR_11)) {
  FUNC_4(VAR_11);
  FUNC_0("VGA not enabled on entry, requesting chip POST\n");
  *VAR_12 = 1;
 } else
  *VAR_12 = 0;



 FUNC_7(VAR_13);
 FUNC_3(VAR_11);


 FUNC_2(VAR_11, &VAR_15);


 if (VAR_11->pdev->device == VAR_10) {
  VAR_13->chip = VAR_0;
  FUNC_0("AST 1180 detected\n");
 } else {
  if (VAR_11->pdev->revision >= 0x40) {
   VAR_13->chip = VAR_6;
   FUNC_0("AST 2500 detected\n");
  } else if (VAR_11->pdev->revision >= 0x30) {
   VAR_13->chip = VAR_5;
   FUNC_0("AST 2400 detected\n");
  } else if (VAR_11->pdev->revision >= 0x20) {
   VAR_13->chip = VAR_4;
   FUNC_0("AST 2300 detected\n");
  } else if (VAR_11->pdev->revision >= 0x10) {
   switch (VAR_15 & 0x0300) {
   case 0x0200:
    VAR_13->chip = VAR_0;
    FUNC_0("AST 1100 detected\n");
    break;
   case 0x0100:
    VAR_13->chip = VAR_3;
    FUNC_0("AST 2200 detected\n");
    break;
   case 0x0000:
    VAR_13->chip = VAR_2;
    FUNC_0("AST 2150 detected\n");
    break;
   default:
    VAR_13->chip = VAR_1;
    FUNC_0("AST 2100 detected\n");
    break;
   }
   VAR_13->vga2_clone = 0;
  } else {
   VAR_13->chip = 130;
   FUNC_0("AST 2000 detected\n");
  }
 }


 switch (VAR_13->chip) {
 case 131:
  VAR_13->support_wide_screen = 1;
  break;
 case 130:
  VAR_13->support_wide_screen = 0;
  break;
 default:
  VAR_14 = FUNC_5(VAR_13, VAR_7, 0xd0, 0xff);
  if (!(VAR_14 & 0x80))
   VAR_13->support_wide_screen = 1;
  else if (VAR_14 & 0x01)
   VAR_13->support_wide_screen = 1;
  else {
   VAR_13->support_wide_screen = 0;
   if (VAR_13->chip == VAR_4 &&
       (VAR_15 & 0x300) == 0x0)
    VAR_13->support_wide_screen = 1;
   if (VAR_13->chip == VAR_5 &&
       (VAR_15 & 0x300) == 0x100)
    VAR_13->support_wide_screen = 1;
   if (VAR_13->chip == VAR_6 &&
       VAR_15 == 0x100)
    VAR_13->support_wide_screen = 1;
  }
  break;
 }


 VAR_13->tx_chip_type = VAR_8;
 if (!*VAR_12) {
  VAR_14 = FUNC_5(VAR_13, VAR_7, 0xa3, 0xff);
  if (VAR_14 & 0x80)
   VAR_13->tx_chip_type = 128;
 }

 if ((VAR_13->chip == VAR_4) || (VAR_13->chip == VAR_5)) {





  VAR_14 = FUNC_5(VAR_13, VAR_7, 0xd1, 0xff);
  switch (VAR_14) {
  case 0x04:
   VAR_13->tx_chip_type = 128;
   break;
  case 0x08:
   VAR_13->dp501_fw_addr = FUNC_9(32*1024, VAR_9);
   if (VAR_13->dp501_fw_addr) {

    if (FUNC_1(VAR_11, VAR_13->dp501_fw_addr, 32*1024)) {
     FUNC_8(VAR_13->dp501_fw_addr);
     VAR_13->dp501_fw_addr = ((void*)0);
    }
   }

  case 0x0c:
   VAR_13->tx_chip_type = 129;
  }
 }


 switch(VAR_13->tx_chip_type) {
 case 128:
  FUNC_0("Using Sil164 TMDS transmitter\n");
  break;
 case 129:
  FUNC_0("Using DP501 DisplayPort transmitter\n");
  break;
 default:
  FUNC_0("Analog VGA only\n");
 }
 return 0;
}
