
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int et_arg; int (* et_event_cb ) (TYPE_1__*,int ) ;scalar_t__ et_active; } ;
struct attimer_softc {scalar_t__ period; scalar_t__ mode; TYPE_1__ et; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_9)
{
 struct attimer_softc *VAR_10 = (struct attimer_softc *)VAR_9;

 if (VAR_8 && VAR_10->period != 0) {
  FUNC_0(&VAR_3);
  if (VAR_7)
   VAR_7 = 0;
  else {
   VAR_6 += VAR_5;
   VAR_4 = 0;
  }
  VAR_2 = 0;
  FUNC_1(&VAR_3);
 }

 if (VAR_10->et.et_active && VAR_10->mode != VAR_1)
  VAR_10->et.et_event_cb(&VAR_10->et, VAR_10->et.et_arg);

 return (VAR_0);
}
