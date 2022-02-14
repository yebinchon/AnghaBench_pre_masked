
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_display_mode {int dummy; } ;
struct drm_device {struct ast_private* dev_private; } ;
struct ast_vbios_mode_info {TYPE_1__* enh_table; } ;
struct ast_vbios_dclk_info {int param1; int param2; int param3; } ;
struct ast_private {scalar_t__ chip; } ;
struct TYPE_2__ {size_t dclk_index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ast_private*,int ,int,int,int) ;
 struct ast_vbios_dclk_info* VAR_2 ;
 struct ast_vbios_dclk_info* VAR_3 ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_4, struct drm_display_mode *VAR_5,
        struct ast_vbios_mode_info *VAR_6)
{
 struct ast_private *VAR_7 = VAR_4->dev_private;
 const struct ast_vbios_dclk_info *VAR_8;

 if (VAR_7->chip == VAR_0)
  VAR_8 = &VAR_3[VAR_6->enh_table->dclk_index];
 else
  VAR_8 = &VAR_2[VAR_6->enh_table->dclk_index];

 FUNC_0(VAR_7, VAR_1, 0xc0, 0x00, VAR_8->param1);
 FUNC_0(VAR_7, VAR_1, 0xc1, 0x00, VAR_8->param2);
 FUNC_0(VAR_7, VAR_1, 0xbb, 0x0f,
          (VAR_8->param3 & 0xc0) |
          ((VAR_8->param3 & 0x3) << 4));
}
