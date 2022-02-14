
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_sg_mem {scalar_t__ handle; int virtual; } ;
struct drm_scatter_gather {scalar_t__ handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct drm_sg_mem* sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct drm_sg_mem*) ;

int FUNC_3(struct drm_device *VAR_4, void *VAR_5,
         struct drm_file *VAR_6)
{
 struct drm_scatter_gather *VAR_7 = VAR_5;
 struct drm_sg_mem *VAR_8;

 if (!FUNC_1(VAR_4, VAR_0))
  return -VAR_3;

 if (!FUNC_1(VAR_4, VAR_1))
  return -VAR_3;

 VAR_8 = VAR_4->sg;
 VAR_4->sg = ((void*)0);

 if (!VAR_8 || VAR_8->handle != VAR_7->handle)
  return -VAR_2;

 FUNC_0("virtual  = %p\n", VAR_8->virtual);

 FUNC_2(VAR_8);

 return 0;
}
