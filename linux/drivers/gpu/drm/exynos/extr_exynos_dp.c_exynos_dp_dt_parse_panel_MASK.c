
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_dp_device {TYPE_1__* dev; int vm; } ;
struct TYPE_2__ {int of_node; } ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct exynos_dp_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->dev->of_node, &VAR_1->vm, VAR_0);
 if (VAR_2) {
  FUNC_0(VAR_1->dev,
         "failed: of_get_videomode() : %d\n", VAR_2);
  return VAR_2;
 }
 return 0;
}
