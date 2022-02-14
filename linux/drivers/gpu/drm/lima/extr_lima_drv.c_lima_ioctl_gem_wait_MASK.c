
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_lima_gem_wait {int op; int timeout_ns; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_file*,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_3, void *VAR_4, struct drm_file *VAR_5)
{
 struct drm_lima_gem_wait *VAR_6 = VAR_4;

 if (VAR_6->op & ~(VAR_1|VAR_2))
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_6->handle, VAR_6->op, VAR_6->timeout_ns);
}
