
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_drm_priv {int ctx_mgr; int vm; } ;
struct lima_device {int dummy; } ;
struct drm_file {struct lima_drm_priv* driver_priv; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lima_drm_priv*) ;
 struct lima_drm_priv* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct lima_device*) ;
 struct lima_device* FUNC_4 (struct drm_device*) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_2, struct drm_file *VAR_3)
{
 int VAR_4;
 struct lima_drm_priv *VAR_5;
 struct lima_device *VAR_6 = FUNC_4(VAR_2);

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->vm = FUNC_3(VAR_6);
 if (!VAR_5->vm) {
  VAR_4 = -VAR_0;
  goto err_out0;
 }

 FUNC_2(&VAR_5->ctx_mgr);

 VAR_3->driver_priv = VAR_5;
 return 0;

err_out0:
 FUNC_0(VAR_5);
 return VAR_4;
}
