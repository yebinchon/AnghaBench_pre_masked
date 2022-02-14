
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int flags; } ;
struct drm_bridge {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct drm_bridge *VAR_4,
     const struct drm_display_mode *VAR_5,
     struct drm_display_mode *VAR_6)
{

 VAR_6->flags = VAR_5->flags;
 VAR_6->flags |= (VAR_0 | VAR_1);
 VAR_6->flags &= ~(VAR_2 | VAR_3);

 return 1;
}
