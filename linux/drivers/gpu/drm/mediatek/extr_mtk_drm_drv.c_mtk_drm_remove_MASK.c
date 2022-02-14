
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mtk_drm_private {int * comp_node; int mutex_node; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct mtk_drm_private* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct mtk_drm_private *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 FUNC_0(&VAR_2->dev, &VAR_1);
 FUNC_3(&VAR_2->dev);
 FUNC_1(VAR_3->mutex_node);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_1(VAR_3->comp_node[VAR_4]);

 return 0;
}
