
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_surface {int res; } ;
struct vmw_private {int active_display_unit; } ;
struct vmw_framebuffer {int dummy; } ;
struct drm_vmw_rect {int dummy; } ;
struct drm_file {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;


 int FUNC_1 (struct vmw_private*,int) ;
 int FUNC_2 (struct vmw_private*,struct drm_file*,struct vmw_framebuffer*,struct vmw_surface*,int ,int ,int ,struct drm_vmw_rect*,int ) ;
 int FUNC_3 (struct vmw_private*,struct vmw_framebuffer*,int *,struct drm_vmw_rect*,int *,int ,int ,int ,int,int *,int *) ;

int FUNC_4(struct vmw_private *VAR_1,
      struct drm_file *VAR_2,
      struct vmw_framebuffer *VAR_3,
      struct vmw_surface *VAR_4,
      uint32_t VAR_5,
      int32_t VAR_6, int32_t VAR_7,
      struct drm_vmw_rect *VAR_8,
      uint32_t VAR_9)
{
 int VAR_10;

 switch (VAR_1->active_display_unit) {
 case 128:
  VAR_10 = FUNC_3(VAR_1, VAR_3, ((void*)0), VAR_8,
       &VAR_4->res, VAR_6, VAR_7,
       VAR_9, 1, ((void*)0), ((void*)0));
  break;
 case 129:
  VAR_10 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6, VAR_7, VAR_8,
           VAR_9);
  break;
 default:
  FUNC_0(1,
     "Present called with invalid display system.\n");
  VAR_10 = -VAR_0;
  break;
 }
 if (VAR_10)
  return VAR_10;

 FUNC_1(VAR_1, 0);

 return 0;
}
