
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpi_touchscreen {int dummy; } ;
struct drm_panel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rpi_touchscreen* FUNC_0 (struct drm_panel*) ;
 int FUNC_1 (struct rpi_touchscreen*,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_2)
{
 struct rpi_touchscreen *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_3, VAR_1, 0);

 FUNC_1(VAR_3, VAR_0, 0);
 FUNC_2(1);

 return 0;
}
