
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_device {struct ast_private* dev_private; } ;
struct ast_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ast_private*,int ,int,int,int ) ;
 int FUNC_1 (struct ast_private*) ;
 int FUNC_2 (struct ast_private*) ;
 scalar_t__ FUNC_3 (struct ast_private*) ;
 scalar_t__ FUNC_4 (struct ast_private*) ;

__attribute__((used)) static bool FUNC_5(struct drm_device *VAR_1, u8 VAR_2)
{
 struct ast_private *VAR_3 = VAR_1->dev_private;

 if (FUNC_4(VAR_3)) {
  FUNC_2(VAR_3);
  FUNC_0(VAR_3, VAR_0, 0x9a, 0x00, VAR_2);
  FUNC_1(VAR_3);
  if (FUNC_3(VAR_3)) {
   FUNC_2(VAR_3);
   return 1;
  }
 }
 FUNC_2(VAR_3);
 return 0;
}
