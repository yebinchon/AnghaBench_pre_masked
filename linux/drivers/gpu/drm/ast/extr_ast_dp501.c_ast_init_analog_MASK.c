
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {struct ast_private* dev_private; } ;
struct ast_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ast_private*,int) ;
 int FUNC_1 (struct ast_private*,int ,int,int,int) ;
 int FUNC_2 (struct ast_private*,int,int) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_1)
{
 struct ast_private *VAR_2 = VAR_1->dev_private;
 u32 VAR_3;






 FUNC_2(VAR_2, 0xf004, 0x1e6e0000);
 FUNC_2(VAR_2, 0xf000, 0x1);


 FUNC_2(VAR_2, 0x12000, 0x1688a8a8);
 FUNC_2(VAR_2, 0x12000, 0x1688a8a8);
 FUNC_2(VAR_2, 0x12000, 0x1688a8a8);


 VAR_3 = FUNC_0(VAR_2, 0x1202c);
 VAR_3 &= 0xfffcffff;
 FUNC_2(VAR_2, 0, VAR_3);


 FUNC_1(VAR_2, VAR_0, 0xa3, 0xcf, 0x00);
}
