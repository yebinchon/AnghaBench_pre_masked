
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int flags; } ;
struct wiimote_data {TYPE_1__ state; } ;
struct wiimod_ops {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(const struct wiimod_ops *VAR_1,
    struct wiimote_data *VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_2->state.lock, VAR_3);
 VAR_2->state.flags |= VAR_0;
 FUNC_1(&VAR_2->state.lock, VAR_3);
}
