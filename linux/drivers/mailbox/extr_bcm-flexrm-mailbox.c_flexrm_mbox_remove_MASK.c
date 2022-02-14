
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct flexrm_mbox {int bd_pool; int cmpl_pool; int root; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct flexrm_mbox* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct flexrm_mbox *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_2->root);

 FUNC_3(VAR_1);

 FUNC_1(VAR_2->cmpl_pool);
 FUNC_1(VAR_2->bd_pool);

 return 0;
}
