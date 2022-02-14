
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_drm_priv {int dummy; } ;
struct drm_file {struct lima_drm_priv* driver_priv; } ;



__attribute__((used)) static inline struct lima_drm_priv *
FUNC_0(struct drm_file *VAR_0)
{
 return VAR_0->driver_priv;
}
