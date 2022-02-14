
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_flip_task {void* data; } ;
typedef int gfp_t ;


 struct drm_flip_task* FUNC_0 (int,int ) ;

struct drm_flip_task *FUNC_1(void *VAR_0, gfp_t VAR_1)
{
 struct drm_flip_task *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_1);
 if (VAR_2)
  VAR_2->data = VAR_0;

 return VAR_2;
}
