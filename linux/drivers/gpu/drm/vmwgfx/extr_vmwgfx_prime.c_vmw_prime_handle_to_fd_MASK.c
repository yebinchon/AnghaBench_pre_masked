
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ttm_object_file {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct ttm_object_file* tfile; } ;


 int FUNC_0 (struct ttm_object_file*,int ,int ,int*) ;
 TYPE_1__* FUNC_1 (struct drm_file*) ;

int FUNC_2(struct drm_device *VAR_0,
      struct drm_file *VAR_1,
      uint32_t VAR_2, uint32_t VAR_3,
      int *VAR_4)
{
 struct ttm_object_file *VAR_5 = FUNC_1(VAR_1)->tfile;

 return FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4);
}
