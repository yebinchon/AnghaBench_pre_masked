
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vidi_context {int timer; TYPE_1__* crtc; } ;
struct timer_list {int dummy; } ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 struct vidi_context* VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct vidi_context* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct vidi_context *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);

 if (FUNC_0(&VAR_5->crtc->base))
  FUNC_2(&VAR_5->timer,
   VAR_2 + FUNC_3(VAR_0) - 1);
}
