
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tv_mode {int dummy; } ;
struct drm_display_mode {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_display_mode*,struct tv_mode const*) ;

__attribute__((used)) static void
FUNC_1(struct drm_display_mode *VAR_2,
         const struct tv_mode *VAR_3)
{
 VAR_2->type = VAR_0;

 if (FUNC_0(VAR_2, VAR_3))
  VAR_2->type |= VAR_1;
}
