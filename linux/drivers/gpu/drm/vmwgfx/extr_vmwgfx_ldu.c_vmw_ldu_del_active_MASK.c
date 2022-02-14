
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_private {struct vmw_legacy_display* ldu_priv; } ;
struct vmw_legacy_display_unit {int active; } ;
struct vmw_legacy_display {scalar_t__ num_active; TYPE_1__* fb; } ;
struct TYPE_2__ {int (* unpin ) (TYPE_1__*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct vmw_private *VAR_0,
         struct vmw_legacy_display_unit *VAR_1)
{
 struct vmw_legacy_display *VAR_2 = VAR_0->ldu_priv;
 if (FUNC_2(&VAR_1->active))
  return 0;


 FUNC_1(&VAR_1->active);
 if (--(VAR_2->num_active) == 0) {
  FUNC_0(!VAR_2->fb);
  if (VAR_2->fb->unpin)
   VAR_2->fb->unpin(VAR_2->fb);
  VAR_2->fb = ((void*)0);
 }

 return 0;
}
