
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_device {struct ast_private* dev_private; } ;
struct ast_private {scalar_t__ chip; int tx_chip_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ast_private*,int ,int,int) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;

void FUNC_4(struct drm_device *VAR_4)
{
 struct ast_private *VAR_5 = VAR_4->dev_private;
 u8 VAR_6;

 if (VAR_5->chip == VAR_0 || VAR_5->chip == VAR_1) {
  VAR_6 = FUNC_0(VAR_5, VAR_2, 0xd1, 0xff);
  switch (VAR_6 & 0x0e) {
  case 0x04:
   FUNC_2(VAR_4);
   break;
  case 0x08:
   FUNC_3(VAR_4);
   break;
  case 0x0c:
   FUNC_2(VAR_4);
   break;
  default:
   if (VAR_5->tx_chip_type == VAR_3)
    FUNC_2(VAR_4);
   else
    FUNC_1(VAR_4);
  }
 }
}
