
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ttm_object_file {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct ttm_object_file* tfile; } ;


 int FUNC_0 (struct ttm_object_file*,int,int *) ;
 TYPE_1__* FUNC_1 (struct drm_file*) ;

int FUNC_2(struct drm_device *VAR_0,
      struct drm_file *VAR_1,
      int VAR_2, u32 *VAR_3)
{
 struct ttm_object_file *VAR_4 = FUNC_1(VAR_1)->tfile;

 return FUNC_0(VAR_4, VAR_2, VAR_3);
}
