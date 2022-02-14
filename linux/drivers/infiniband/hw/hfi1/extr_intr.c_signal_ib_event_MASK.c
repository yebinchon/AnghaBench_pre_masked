
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int port_num; } ;
struct ib_event {int event; TYPE_3__ element; int * device; } ;
struct hfi1_pportdata {int port; struct hfi1_devdata* dd; } ;
struct TYPE_4__ {int ibdev; } ;
struct TYPE_5__ {TYPE_1__ rdi; } ;
struct hfi1_devdata {int flags; TYPE_2__ verbs_dev; } ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;


 int VAR_0 ;
 int FUNC_0 (struct ib_event*) ;

__attribute__((used)) static void FUNC_1(struct hfi1_pportdata *VAR_1, enum ib_event_type VAR_2)
{
 struct ib_event VAR_3;
 struct hfi1_devdata *VAR_4 = VAR_1->dd;






 if (!(VAR_4->flags & VAR_0))
  return;
 VAR_3.device = &VAR_4->verbs_dev.rdi.ibdev;
 VAR_3.element.port_num = VAR_1->port;
 VAR_3.event = VAR_2;
 FUNC_0(&VAR_3);
}
