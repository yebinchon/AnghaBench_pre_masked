
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct qib_pportdata {TYPE_2__* cpspec; } ;
struct qib_chippport_specific {struct qib_pportdata pportdata; } ;
struct TYPE_3__ {scalar_t__ expires; } ;
struct TYPE_4__ {TYPE_1__ chase_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qib_chippport_specific* VAR_3 ;
 struct qib_chippport_specific* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct qib_pportdata*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_4)
{
 struct qib_chippport_specific *VAR_5 = FUNC_0(VAR_5, VAR_4,
        VAR_2);
 struct qib_pportdata *VAR_6 = &VAR_5->pportdata;

 VAR_6->cpspec->chase_timer.expires = 0;
 FUNC_1(VAR_6, VAR_0,
  VAR_1);
}
