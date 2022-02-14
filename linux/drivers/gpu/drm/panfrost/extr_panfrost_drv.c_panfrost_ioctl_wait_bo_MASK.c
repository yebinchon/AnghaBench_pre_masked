
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_panfrost_wait_bo {int handle; scalar_t__ pad; int timeout_ns; } ;
struct drm_gem_object {int resv; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 long FUNC_0 (int ,int,int,unsigned long) ;
 struct drm_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 unsigned long FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct drm_device *VAR_4, void *VAR_5,
         struct drm_file *VAR_6)
{
 long VAR_7;
 struct drm_panfrost_wait_bo *VAR_8 = VAR_5;
 struct drm_gem_object *VAR_9;
 unsigned long VAR_10 = FUNC_3(VAR_8->timeout_ns);

 if (VAR_8->pad)
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_6, VAR_8->handle);
 if (!VAR_9)
  return -VAR_2;

 VAR_7 = FUNC_0(VAR_9->resv, 1,
        1, VAR_10);
 if (!VAR_7)
  VAR_7 = VAR_10 ? -VAR_3 : -VAR_0;

 FUNC_2(VAR_9);

 return VAR_7;
}
