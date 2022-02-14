
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_property {int dummy; } ;
struct drm_device {int dummy; } ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct drm_property* FUNC_1 (struct drm_device*,int,char const*,int ,int ) ;

struct drm_property *FUNC_2(struct drm_device *VAR_1,
            u32 VAR_2, const char *VAR_3,
            int64_t VAR_4, int64_t VAR_5)
{
 return FUNC_1(VAR_1, VAR_0 | VAR_2,
   VAR_3, FUNC_0(VAR_4), FUNC_0(VAR_5));
}
