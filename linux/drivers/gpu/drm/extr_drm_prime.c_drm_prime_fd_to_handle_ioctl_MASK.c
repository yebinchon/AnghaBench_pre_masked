
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_prime_handle {int handle; int fd; } ;
struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* prime_fd_to_handle ) (struct drm_device*,struct drm_file*,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,struct drm_file*,int ,int *) ;

int FUNC_1(struct drm_device *VAR_1, void *VAR_2,
     struct drm_file *VAR_3)
{
 struct drm_prime_handle *VAR_4 = VAR_2;

 if (!VAR_1->driver->prime_fd_to_handle)
  return -VAR_0;

 return VAR_1->driver->prime_fd_to_handle(VAR_1, VAR_3,
   VAR_4->fd, &VAR_4->handle);
}
