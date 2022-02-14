
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct drm_syncobj {int dummy; } ;


 int FUNC_0 (struct drm_syncobj*) ;
 int FUNC_1 (struct drm_syncobj**) ;

__attribute__((used)) static void FUNC_2(struct drm_syncobj **VAR_0,
       uint32_t VAR_1)
{
 uint32_t VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0(VAR_0[VAR_2]);
 FUNC_1(VAR_0);
}
