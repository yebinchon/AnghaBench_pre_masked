
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct drm_syncobj {int dummy; } ;
struct drm_file {int dummy; } ;


 int FUNC_0 (struct drm_syncobj**,int ,int *) ;
 int FUNC_1 (struct drm_file*,struct drm_syncobj*,int *) ;
 int FUNC_2 (struct drm_syncobj*) ;

__attribute__((used)) static int FUNC_3(struct drm_file *VAR_0,
     u32 *VAR_1, uint32_t VAR_2)
{
 int VAR_3;
 struct drm_syncobj *VAR_4;

 VAR_3 = FUNC_0(&VAR_4, VAR_2, ((void*)0));
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_4, VAR_1);
 FUNC_2(VAR_4);
 return VAR_3;
}
