
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int et_arg; int (* et_event_cb ) (TYPE_1__*,int ) ;scalar_t__ et_active; } ;
struct atrtc_softc {TYPE_1__ et; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_4)
{
 struct atrtc_softc *VAR_5 = (struct atrtc_softc *)VAR_4;
 int VAR_6 = 0;

 while (FUNC_0(VAR_3) & VAR_2) {
  VAR_6 = 1;
  if (VAR_5->et.et_active)
   VAR_5->et.et_event_cb(&VAR_5->et, VAR_5->et.et_arg);
 }
 return(VAR_6 ? VAR_0 : VAR_1);
}
