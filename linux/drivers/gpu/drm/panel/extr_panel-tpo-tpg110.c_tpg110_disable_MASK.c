
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpg110 {int backlight; } ;
struct drm_panel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct tpg110* FUNC_1 (struct drm_panel*) ;
 int FUNC_2 (struct tpg110*,int ) ;
 int FUNC_3 (struct tpg110*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_1)
{
 struct tpg110 *VAR_2 = FUNC_1(VAR_1);
 u8 VAR_3;


 VAR_3 = FUNC_2(VAR_2, VAR_0);
 VAR_3 &= ~VAR_0;
 FUNC_3(VAR_2, VAR_0, VAR_3);

 FUNC_0(VAR_2->backlight);

 return 0;
}
