
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct wiimote_data {TYPE_1__ state; int rumble_worker; } ;
struct wiimod_ops {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct wiimote_data*,int ) ;

__attribute__((used)) static void FUNC_4(const struct wiimod_ops *VAR_0,
     struct wiimote_data *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_1->rumble_worker);

 FUNC_1(&VAR_1->state.lock, VAR_2);
 FUNC_3(VAR_1, 0);
 FUNC_2(&VAR_1->state.lock, VAR_2);
}
