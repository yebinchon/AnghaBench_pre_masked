
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_etnaviv_gem_new {int flags; int handle; int size; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drm_device*,struct drm_file*,int ,int,int *) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_5, void *VAR_6,
  struct drm_file *VAR_7)
{
 struct drm_etnaviv_gem_new *VAR_8 = VAR_6;

 if (VAR_8->flags & ~(VAR_1 | VAR_4 | VAR_3 |
       VAR_2))
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_7, VAR_8->size,
   VAR_8->flags, &VAR_8->handle);
}
