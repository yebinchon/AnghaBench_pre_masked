
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_interface {scalar_t__ mode; } ;
struct mdp5_encoder {struct mdp5_interface* intf; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drm_encoder*,struct drm_display_mode*,struct drm_display_mode*) ;
 int FUNC_1 (struct drm_encoder*,struct drm_display_mode*,struct drm_display_mode*) ;
 struct mdp5_encoder* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_1,
      struct drm_display_mode *VAR_2,
      struct drm_display_mode *VAR_3)
{
 struct mdp5_encoder *VAR_4 = FUNC_2(VAR_1);
 struct mdp5_interface *VAR_5 = VAR_4->intf;

 if (VAR_5->mode == VAR_0)
  FUNC_0(VAR_1, VAR_2, VAR_3);
 else
  FUNC_1(VAR_1, VAR_2, VAR_3);
}
