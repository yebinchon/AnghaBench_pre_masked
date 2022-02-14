
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int * driver_priv; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,struct drm_device*,struct drm_file*) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_0, struct drm_file *VAR_1)
{
 VAR_1->driver_priv = ((void*)0);

 FUNC_0("open: dev=%p, file=%p", VAR_0, VAR_1);

 return 0;
}
