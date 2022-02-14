
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_cq {int cq_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct siw_cq {struct ib_cq base_cq; } ;
struct TYPE_2__ {struct ib_cq* cq; } ;
struct ib_event {int event; TYPE_1__ element; int device; } ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;


 int FUNC_0 (struct siw_cq*,char*,int) ;
 int FUNC_1 (struct ib_event*,int ) ;

void FUNC_2(struct siw_cq *VAR_0, enum ib_event_type VAR_1)
{
 struct ib_event VAR_2;
 struct ib_cq *VAR_3 = &VAR_0->base_cq;

 VAR_2.event = VAR_1;
 VAR_2.device = VAR_3->device;
 VAR_2.element.cq = VAR_3;

 if (VAR_3->event_handler) {
  FUNC_0(VAR_0, "reporting CQ event %d\n", VAR_1);
  VAR_3->event_handler(&VAR_2, VAR_3->cq_context);
 }
}
