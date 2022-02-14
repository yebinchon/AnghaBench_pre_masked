
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u32 ;
struct udl_gem_object {int base; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_file*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct udl_gem_object*) ;
 int FUNC_4 (int ,int ) ;
 struct udl_gem_object* FUNC_5 (struct drm_device*,int ) ;

__attribute__((used)) static int
FUNC_6(struct drm_file *VAR_2,
        struct drm_device *VAR_3,
        uint64_t VAR_4,
        uint32_t *VAR_5)
{
 struct udl_gem_object *VAR_6;
 int VAR_7;
 u32 VAR_8;

 VAR_4 = FUNC_4(VAR_4, VAR_1);

 VAR_6 = FUNC_5(VAR_3, VAR_4);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_2, &VAR_6->base, &VAR_8);
 if (VAR_7) {
  FUNC_2(&VAR_6->base);
  FUNC_3(VAR_6);
  return VAR_7;
 }

 FUNC_1(&VAR_6->base);
 *VAR_5 = VAR_8;
 return 0;
}
