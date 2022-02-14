
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_srq {int srq_context; int (* event_handler ) (struct ib_event*,int ) ;int pd; int device; } ;
struct siw_srq {struct ib_srq base_srq; } ;
struct TYPE_2__ {struct ib_srq* srq; } ;
struct ib_event {int event; TYPE_1__ element; int device; } ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ib_event*,int ) ;

void FUNC_2(struct siw_srq *VAR_0, enum ib_event_type VAR_1)
{
 struct ib_event VAR_2;
 struct ib_srq *VAR_3 = &VAR_0->base_srq;

 VAR_2.event = VAR_1;
 VAR_2.device = VAR_3->device;
 VAR_2.element.srq = VAR_3;

 if (VAR_3->event_handler) {
  FUNC_0(VAR_0->base_srq.pd,
      "reporting SRQ event %d\n", VAR_1);
  VAR_3->event_handler(&VAR_2, VAR_3->srq_context);
 }
}
