
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ib_qp {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;} ;
struct TYPE_2__ {int port_num; struct ib_qp* qp; } ;
struct ib_event {int event; TYPE_1__ element; struct ib_device* device; } ;
struct ib_device {int dummy; } ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;


 int FUNC_0 (struct ib_event*) ;
 int FUNC_1 (struct ib_event*,int ) ;

__attribute__((used)) static void FUNC_2(struct ib_device *VAR_0, struct ib_qp *VAR_1,
       u8 VAR_2, enum ib_event_type VAR_3)
{
 struct ib_event VAR_4;

 VAR_4.device = VAR_0;
 if (VAR_1) {
  VAR_4.element.qp = VAR_1;
  VAR_4.event = VAR_3;
  if (VAR_1->event_handler)
   VAR_1->event_handler(&VAR_4, VAR_1->qp_context);

 } else {
  VAR_4.element.port_num = VAR_2;
  VAR_4.event = VAR_3;
  FUNC_0(&VAR_4);
 }
}
