
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct driver_data {TYPE_1__* port; int dd_flag; } ;
struct TYPE_2__ {long ic_pause_timer; int svc_wait; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline bool FUNC_6(struct driver_data *VAR_3)
{
 if (FUNC_4(FUNC_2(VAR_1, &VAR_3->port->flags))) {
  if (VAR_3->port->ic_pause_timer) {
   unsigned long VAR_4 = VAR_3->port->ic_pause_timer +
       FUNC_1(1000);
   if (FUNC_3(VAR_2, VAR_4)) {
    FUNC_0(VAR_1,
       &VAR_3->port->flags);
    FUNC_0(VAR_0, &VAR_3->dd_flag);
    VAR_3->port->ic_pause_timer = 0;
    FUNC_5(&VAR_3->port->svc_wait);
    return 0;
   }
  }
  return 1;
 }
 return 0;
}
