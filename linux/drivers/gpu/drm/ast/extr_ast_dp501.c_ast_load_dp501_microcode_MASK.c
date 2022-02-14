
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dev; struct ast_private* dev_private; } ;
struct ast_private {int dp501_fw; } ;


 int FUNC_0 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_0)
{
 struct ast_private *VAR_1 = VAR_0->dev_private;

 return FUNC_0(&VAR_1->dp501_fw, "ast_dp501_fw.bin", VAR_0->dev);
}
