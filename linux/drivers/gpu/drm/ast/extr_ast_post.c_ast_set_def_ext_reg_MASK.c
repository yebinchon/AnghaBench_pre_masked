
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct drm_device {TYPE_1__* pdev; struct ast_private* dev_private; } ;
struct ast_private {scalar_t__ chip; } ;
struct TYPE_2__ {int revision; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ast_private*,int ,int,int) ;
 int FUNC_1 (struct ast_private*,int ,int,int,int const) ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;

__attribute__((used)) static void
FUNC_2(struct drm_device *VAR_7)
{
 struct ast_private *VAR_8 = VAR_7->dev_private;
 u8 VAR_9, VAR_10, VAR_11;
 const u8 *VAR_12;


 for (VAR_9 = 0x81; VAR_9 <= 0x9f; VAR_9++)
  FUNC_0(VAR_8, VAR_3, VAR_9, 0x00);

 if (VAR_8->chip == VAR_0 || VAR_8->chip == VAR_1 ||
     VAR_8->chip == VAR_2) {
  if (VAR_7->pdev->revision >= 0x20)
   VAR_12 = VAR_5;
  else
   VAR_12 = VAR_6;
 } else
  VAR_12 = VAR_4;

 VAR_10 = 0xa0;
 while (*VAR_12 != 0xff) {
  FUNC_1(VAR_8, VAR_3, VAR_10, 0x00, *VAR_12);
  VAR_10++;
  VAR_12++;
 }





 FUNC_1(VAR_8, VAR_3, 0x8c, 0x00, 0x01);
 FUNC_1(VAR_8, VAR_3, 0xb7, 0x00, 0x00);


 VAR_11 = 0x04;
 if (VAR_8->chip == VAR_0 || VAR_8->chip == VAR_1 ||
     VAR_8->chip == VAR_2)
  VAR_11 |= 0x20;
 FUNC_1(VAR_8, VAR_3, 0xb6, 0xff, VAR_11);
}
