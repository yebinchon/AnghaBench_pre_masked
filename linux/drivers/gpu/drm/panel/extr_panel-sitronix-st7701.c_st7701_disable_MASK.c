
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st7701 {int backlight; } ;
struct drm_panel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct st7701*,int ,int) ;
 int FUNC_1 (int ) ;
 struct st7701* FUNC_2 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_1)
{
 struct st7701 *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2->backlight);
 FUNC_0(VAR_2, VAR_0, 0x00);

 return 0;
}
