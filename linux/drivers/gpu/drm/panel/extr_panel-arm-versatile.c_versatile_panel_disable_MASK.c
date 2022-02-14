
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct versatile_panel {scalar_t__ ib2_map; int dev; } ;
struct drm_panel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int ,int ,int ) ;
 struct versatile_panel* FUNC_2 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_3)
{
 struct versatile_panel *VAR_4 = FUNC_2(VAR_3);


 if (VAR_4->ib2_map) {
  FUNC_0(VAR_4->dev, "disable IB2 display\n");
  FUNC_1(VAR_4->ib2_map,
       VAR_0,
       VAR_1,
       VAR_2);
 }

 return 0;
}
