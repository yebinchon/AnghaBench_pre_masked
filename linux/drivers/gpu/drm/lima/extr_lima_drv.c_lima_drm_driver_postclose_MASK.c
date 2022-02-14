
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_drm_priv {int vm; int ctx_mgr; } ;
struct drm_file {struct lima_drm_priv* driver_priv; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct lima_drm_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_0, struct drm_file *VAR_1)
{
 struct lima_drm_priv *VAR_2 = VAR_1->driver_priv;

 FUNC_1(&VAR_2->ctx_mgr);
 FUNC_2(VAR_2->vm);
 FUNC_0(VAR_2);
}
