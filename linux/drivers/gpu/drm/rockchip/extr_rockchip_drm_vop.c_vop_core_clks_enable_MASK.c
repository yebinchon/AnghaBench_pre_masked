
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop {int hclk; int aclk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct vop *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->hclk);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0->aclk);
 if (VAR_1 < 0)
  goto err_disable_hclk;

 return 0;

err_disable_hclk:
 FUNC_0(VAR_0->hclk);
 return VAR_1;
}
