
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st7789v {int power; } ;
struct drm_panel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 struct st7789v* FUNC_1 (struct drm_panel*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct st7789v*,int ) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_1)
{
 struct st7789v *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 FUNC_0(VAR_3, FUNC_3(VAR_2, VAR_0));

 FUNC_2(VAR_2->power);

 return 0;
}
