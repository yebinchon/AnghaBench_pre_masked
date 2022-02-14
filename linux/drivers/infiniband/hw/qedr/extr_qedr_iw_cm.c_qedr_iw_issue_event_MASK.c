
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qedr_iw_ep {TYPE_2__* cm_id; } ;
struct qed_iwarp_cm_event_params {TYPE_1__* cm_info; int status; } ;
struct iw_cm_event {int event; void* private_data; int private_data_len; int ord; int ird; int status; } ;
typedef int event ;
typedef enum iw_cm_event_type { ____Placeholder_iw_cm_event_type } iw_cm_event_type ;
struct TYPE_4__ {int (* event_handler ) (TYPE_2__*,struct iw_cm_event*) ;} ;
struct TYPE_3__ {scalar_t__ private_data; int private_data_len; int ord; int ird; } ;


 int FUNC_0 (struct iw_cm_event*,int ,int) ;
 int FUNC_1 (TYPE_2__*,struct iw_cm_event*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0,
      struct qed_iwarp_cm_event_params *VAR_1,
      enum iw_cm_event_type VAR_2)
{
 struct qedr_iw_ep *VAR_3 = (struct qedr_iw_ep *)VAR_0;
 struct iw_cm_event VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.status = VAR_1->status;
 VAR_4.event = VAR_2;

 if (VAR_1->cm_info) {
  VAR_4.ird = VAR_1->cm_info->ird;
  VAR_4.ord = VAR_1->cm_info->ord;
  VAR_4.private_data_len = VAR_1->cm_info->private_data_len;
  VAR_4.private_data = (void *)VAR_1->cm_info->private_data;
 }

 if (VAR_3->cm_id)
  VAR_3->cm_id->event_handler(VAR_3->cm_id, &VAR_4);
}
