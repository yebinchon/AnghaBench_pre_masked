
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int et_arg; int (* et_event_cb ) (TYPE_1__*,int ) ;scalar_t__ et_active; } ;
struct riscv_timer_softc {TYPE_1__ et; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_3)
{
 struct riscv_timer_softc *VAR_4;

 VAR_4 = (struct riscv_timer_softc *)VAR_3;

 FUNC_0(VAR_2, VAR_1);

 if (VAR_4->et.et_active)
  VAR_4->et.et_event_cb(&VAR_4->et, VAR_4->et.et_arg);

 return (VAR_0);
}
