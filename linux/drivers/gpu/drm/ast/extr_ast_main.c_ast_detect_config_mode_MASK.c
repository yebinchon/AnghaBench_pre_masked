
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct drm_device {TYPE_2__* pdev; struct ast_private* dev_private; } ;
struct device_node {int dummy; } ;
struct ast_private {int config_mode; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct TYPE_4__ {scalar_t__ device; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ast_private*,int ,int,int) ;
 void* FUNC_2 (struct ast_private*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct ast_private*,int,int) ;
 int FUNC_4 (struct device_node*,char*,int*) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_5, u32 *VAR_6)
{
 struct device_node *VAR_7 = VAR_5->pdev->dev.of_node;
 struct ast_private *VAR_8 = VAR_5->dev_private;
 uint32_t VAR_9, VAR_10, VAR_11;


 VAR_8->config_mode = VAR_2;
 *VAR_6 = 0xffffffff;


 if (VAR_7 && !FUNC_4(VAR_7, "aspeed,scu-revision-id",
     VAR_6)) {

  VAR_8->config_mode = VAR_3;
  FUNC_0("Using device-tree for configuration\n");
  return;
 }


 if (VAR_5->pdev->device != VAR_1)
  return;






 VAR_10 = FUNC_1(VAR_8, VAR_0, 0xd0, 0xff);
 VAR_11 = FUNC_1(VAR_8, VAR_0, 0xd1, 0xff);
 if (!(VAR_10 & 0x80) || !(VAR_11 & 0x10)) {

  VAR_9 = FUNC_2(VAR_8, 0xf004);
  if (VAR_9 != 0xFFFFFFFF) {

   VAR_8->config_mode = VAR_4;

   FUNC_0("Using P2A bridge for configuration\n");


   FUNC_3(VAR_8, 0xf004, 0x1e6e0000);
   FUNC_3(VAR_8, 0xf000, 0x1);
   *VAR_6 = FUNC_2(VAR_8, 0x1207c);
   return;
  }
 }


 FUNC_0("P2A bridge disabled, using default configuration\n");
}
