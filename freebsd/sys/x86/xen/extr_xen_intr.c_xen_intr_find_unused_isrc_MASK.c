
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {scalar_t__ is_handlers; } ;
struct xenisrc {scalar_t__ xi_type; TYPE_1__ xi_intsrc; } ;
typedef enum evtchn_type { ____Placeholder_evtchn_type } evtchn_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct xenisrc *
FUNC_3(enum evtchn_type VAR_4)
{
 int VAR_5;

 FUNC_0(FUNC_2(&VAR_3), ("Evtchn isrc lock not held"));

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5 ++) {
  struct xenisrc *VAR_6;
  u_int VAR_7;

  VAR_7 = VAR_1 + VAR_5;
  VAR_6 = (struct xenisrc *)FUNC_1(VAR_7);
  if (VAR_6 != ((void*)0)
   && VAR_6->xi_type == VAR_0) {
   FUNC_0(VAR_6->xi_intsrc.is_handlers == 0,
       ("Free evtchn still has handlers"));
   VAR_6->xi_type = VAR_4;
   return (VAR_6);
  }
 }
 return (((void*)0));
}
