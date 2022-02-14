
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_vmw_unref_dmabuf_arg {int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int tfile; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 TYPE_1__* FUNC_1 (struct drm_file*) ;

int FUNC_2(struct drm_device *VAR_1, void *VAR_2,
         struct drm_file *VAR_3)
{
 struct drm_vmw_unref_dmabuf_arg *VAR_4 =
     (struct drm_vmw_unref_dmabuf_arg *)VAR_2;

 return FUNC_0(FUNC_1(VAR_3)->tfile,
      VAR_4->handle,
      VAR_0);
}
