
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sn_bridge {int dev; scalar_t__ refclk; } ;
struct drm_bridge {int dummy; } ;


 struct ti_sn_bridge* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct drm_bridge *VAR_0)
{
 struct ti_sn_bridge *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->refclk)
  FUNC_1(VAR_1->refclk);

 FUNC_2(VAR_1->dev);
}
