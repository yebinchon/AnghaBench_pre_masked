
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct drm_crtc {TYPE_1__* dev; } ;
struct ast_private {int dummy; } ;
struct TYPE_2__ {struct ast_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct ast_private*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_crtc *VAR_1, unsigned VAR_2)
{
 struct ast_private *VAR_3 = VAR_1->dev->dev_private;
 u32 VAR_4;

 VAR_4 = VAR_2 >> 2;
 FUNC_0(VAR_3, VAR_0, 0x0d, (u8)(VAR_4 & 0xff));
 FUNC_0(VAR_3, VAR_0, 0x0c, (u8)((VAR_4 >> 8) & 0xff));
 FUNC_0(VAR_3, VAR_0, 0xaf, (u8)((VAR_4 >> 16) & 0xff));

}
