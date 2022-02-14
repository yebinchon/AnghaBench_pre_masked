
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct siw_qp {TYPE_1__ attrs; struct ib_qp* ib_qp; } ;
struct ib_qp {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct TYPE_4__ {struct ib_qp* qp; } ;
struct ib_event {int event; TYPE_2__ element; int device; } ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;


 int VAR_0 ;
 int FUNC_0 (struct siw_qp*,char*,int) ;
 int FUNC_1 (struct ib_event*,int ) ;

void FUNC_2(struct siw_qp *VAR_1, enum ib_event_type VAR_2)
{
 struct ib_event VAR_3;
 struct ib_qp *VAR_4 = VAR_1->ib_qp;





 if (VAR_1->attrs.flags & VAR_0)
  return;

 VAR_3.event = VAR_2;
 VAR_3.device = VAR_4->device;
 VAR_3.element.qp = VAR_4;

 if (VAR_4->event_handler) {
  FUNC_0(VAR_1, "reporting event %d\n", VAR_2);
  VAR_4->event_handler(&VAR_3, VAR_4->qp_context);
 }
}
