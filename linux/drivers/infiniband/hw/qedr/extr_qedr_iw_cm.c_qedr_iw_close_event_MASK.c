
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedr_iw_ep {TYPE_1__* cm_id; } ;
struct qed_iwarp_cm_event_params {int dummy; } ;
struct TYPE_2__ {int (* rem_ref ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (void*,struct qed_iwarp_cm_event_params*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, struct qed_iwarp_cm_event_params *VAR_2)
{
 struct qedr_iw_ep *VAR_3 = (struct qedr_iw_ep *)VAR_1;

 if (VAR_3->cm_id) {
  FUNC_0(VAR_1, VAR_2, VAR_0);

  VAR_3->cm_id->rem_ref(VAR_3->cm_id);
  VAR_3->cm_id = ((void*)0);
 }
}
