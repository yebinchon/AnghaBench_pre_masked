
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_drm_priv {int ctx_mgr; } ;
struct lima_device {int dummy; } ;
struct drm_lima_ctx_create {int id; scalar_t__ _pad; } ;
struct drm_file {struct lima_drm_priv* driver_priv; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lima_device*,int *,int *) ;
 struct lima_device* FUNC_1 (struct drm_device*) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_1, void *VAR_2, struct drm_file *VAR_3)
{
 struct drm_lima_ctx_create *VAR_4 = VAR_2;
 struct lima_drm_priv *VAR_5 = VAR_3->driver_priv;
 struct lima_device *VAR_6 = FUNC_1(VAR_1);

 if (VAR_4->_pad)
  return -VAR_0;

 return FUNC_0(VAR_6, &VAR_5->ctx_mgr, &VAR_4->id);
}
