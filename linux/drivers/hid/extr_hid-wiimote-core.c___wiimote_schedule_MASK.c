
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct wiimote_data {int init_worker; TYPE_1__ state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct wiimote_data *VAR_1)
{
 if (!(VAR_1->state.flags & VAR_0))
  FUNC_0(&VAR_1->init_worker);
}
