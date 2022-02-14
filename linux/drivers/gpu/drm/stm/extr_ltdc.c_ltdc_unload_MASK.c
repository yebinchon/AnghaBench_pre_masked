
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(struct drm_device *VAR_1)
{
 int VAR_2;

 FUNC_0("\n");

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_1(VAR_1->dev->of_node, 0, VAR_2);

 FUNC_2(VAR_1->dev);
}
