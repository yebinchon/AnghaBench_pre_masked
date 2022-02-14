
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxsfb_drm_private {scalar_t__ base; } ;
struct drm_simple_display_pipe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct mxsfb_drm_private* FUNC_0 (struct drm_simple_display_pipe*) ;
 int FUNC_1 (struct mxsfb_drm_private*) ;
 int FUNC_2 (struct mxsfb_drm_private*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct drm_simple_display_pipe *VAR_5)
{
 struct mxsfb_drm_private *VAR_6 = FUNC_0(VAR_5);


 FUNC_2(VAR_6);
 FUNC_3(VAR_0, VAR_6->base + VAR_2 + VAR_3);
 FUNC_3(VAR_1, VAR_6->base + VAR_2 + VAR_4);
 FUNC_1(VAR_6);

 return 0;
}
