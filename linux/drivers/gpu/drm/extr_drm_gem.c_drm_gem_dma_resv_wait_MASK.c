
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_gem_object {int resv; } ;
struct drm_file {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 long VAR_0 ;
 long VAR_1 ;
 long FUNC_1 (int ,int,int,unsigned long) ;
 struct drm_gem_object* FUNC_2 (struct drm_file*,int ) ;
 int FUNC_3 (struct drm_gem_object*) ;

long FUNC_4(struct drm_file *VAR_2, u32 VAR_3,
        bool VAR_4, unsigned long VAR_5)
{
 long VAR_6;
 struct drm_gem_object *VAR_7;

 VAR_7 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_7) {
  FUNC_0("Failed to look up GEM BO %d\n", VAR_3);
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_7->resv, VAR_4,
        1, VAR_5);
 if (VAR_6 == 0)
  VAR_6 = -VAR_1;
 else if (VAR_6 > 0)
  VAR_6 = 0;

 FUNC_3(VAR_7);

 return VAR_6;
}
