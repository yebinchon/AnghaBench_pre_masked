
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct drm_display_mode {int dummy; } ;
struct drm_device {struct ast_private* dev_private; } ;
struct ast_vbios_mode_info {TYPE_1__* enh_table; } ;
struct ast_private {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ast_private*,int ) ;
 int FUNC_1 (struct ast_private*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_4, struct drm_display_mode *VAR_5,
        struct ast_vbios_mode_info *VAR_6)
{
 struct ast_private *VAR_7 = VAR_4->dev_private;
 u8 VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_0);
 VAR_8 &= ~0xC0;
 if (VAR_6->enh_table->flags & VAR_3) VAR_8 |= 0x80;
 if (VAR_6->enh_table->flags & VAR_2) VAR_8 |= 0x40;
 FUNC_1(VAR_7, VAR_1, VAR_8);
}
