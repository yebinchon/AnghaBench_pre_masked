
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_stdu_update {int dummy; } ;
struct TYPE_2__ {int unit; } ;
struct vmw_screen_target_display_unit {int display_height; int display_width; TYPE_1__ base; int defined; } ;
struct vmw_private {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct vmw_stdu_update* FUNC_1 (struct vmw_private*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct vmw_private*,int) ;
 int FUNC_4 (struct vmw_stdu_update*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct vmw_private *VAR_2,
         struct vmw_screen_target_display_unit *VAR_3)
{
 struct vmw_stdu_update *VAR_4;

 if (!VAR_3->defined) {
  FUNC_0("No screen target defined");
  return -VAR_0;
 }

 VAR_4 = FUNC_1(VAR_2, sizeof(*VAR_4));
 if (FUNC_2(VAR_4 == ((void*)0)))
  return -VAR_1;

 FUNC_4(VAR_4, VAR_3->base.unit,
     0, VAR_3->display_width,
     0, VAR_3->display_height);

 FUNC_3(VAR_2, sizeof(*VAR_4));

 return 0;
}
