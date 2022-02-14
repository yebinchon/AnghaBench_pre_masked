
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxsfb_drm_private {scalar_t__ panel; } ;
struct drm_connector {int dummy; } ;


 struct mxsfb_drm_private* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct drm_connector *VAR_0)
{
 struct mxsfb_drm_private *VAR_1 =
   FUNC_0(VAR_0);

 if (VAR_1->panel)
  return FUNC_1(VAR_1->panel);

 return 0;
}
