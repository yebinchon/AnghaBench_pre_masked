
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_syncobj {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_syncobj**) ;
 int FUNC_2 (struct drm_syncobj*,int) ;

__attribute__((used)) static void
FUNC_3(struct drm_syncobj **VAR_0, unsigned int VAR_1)
{
 while (VAR_1--)
  FUNC_0(FUNC_2(VAR_0[VAR_1], 2));
 FUNC_1(VAR_0);
}
