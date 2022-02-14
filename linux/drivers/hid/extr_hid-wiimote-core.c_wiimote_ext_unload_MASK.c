
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t exttype; int lock; int flags; } ;
struct wiimote_data {TYPE_1__ state; } ;
struct wiimod_ops {int (* remove ) (struct wiimod_ops const*,struct wiimote_data*) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct wiimod_ops const*,struct wiimote_data*) ;
 struct wiimod_ops** VAR_2 ;

__attribute__((used)) static void FUNC_3(struct wiimote_data *VAR_3)
{
 unsigned long VAR_4;
 const struct wiimod_ops *VAR_5;

 VAR_5 = VAR_2[VAR_3->state.exttype];

 FUNC_0(&VAR_3->state.lock, VAR_4);
 VAR_3->state.exttype = VAR_0;
 VAR_3->state.flags &= ~VAR_1;
 FUNC_1(&VAR_3->state.lock, VAR_4);

 if (VAR_5->remove)
  VAR_5->remove(VAR_5, VAR_3);
}
