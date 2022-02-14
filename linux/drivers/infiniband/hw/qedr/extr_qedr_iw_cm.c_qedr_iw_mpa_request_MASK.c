
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct qedr_iw_listener {TYPE_1__* cm_id; struct qedr_dev* dev; } ;
struct qedr_iw_ep {int qed_context; struct qedr_dev* dev; } ;
struct qedr_dev {int dummy; } ;
struct qed_iwarp_cm_event_params {TYPE_2__* cm_info; int status; int ep_context; } ;
struct iw_cm_event {int ird; int ord; scalar_t__ private_data_len; void* private_data; void* provider_data; int status; int event; } ;
typedef int event ;
struct TYPE_5__ {scalar_t__ ip_version; int ird; int ord; scalar_t__ private_data_len; scalar_t__ private_data; } ;
struct TYPE_4__ {int (* event_handler ) (TYPE_1__*,struct iw_cm_event*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct qedr_iw_ep* FUNC_1 (int,int ) ;
 int FUNC_2 (struct iw_cm_event*,int ,int) ;
 int FUNC_3 (TYPE_2__*,struct iw_cm_event*) ;
 int FUNC_4 (TYPE_2__*,struct iw_cm_event*) ;
 int FUNC_5 (TYPE_1__*,struct iw_cm_event*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_4, struct qed_iwarp_cm_event_params *VAR_5)
{
 struct qedr_iw_listener *VAR_6 = (struct qedr_iw_listener *)VAR_4;
 struct qedr_dev *VAR_7 = VAR_6->dev;
 struct iw_cm_event VAR_8;
 struct qedr_iw_ep *VAR_9;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return;

 VAR_9->dev = VAR_7;
 VAR_9->qed_context = VAR_5->ep_context;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.event = VAR_2;
 VAR_8.status = VAR_5->status;

 if (!FUNC_0(VAR_0) ||
     VAR_5->cm_info->ip_version == VAR_3)
  FUNC_3(VAR_5->cm_info, &VAR_8);
 else
  FUNC_4(VAR_5->cm_info, &VAR_8);

 VAR_8.provider_data = (void *)VAR_9;
 VAR_8.private_data = (void *)VAR_5->cm_info->private_data;
 VAR_8.private_data_len = (u8)VAR_5->cm_info->private_data_len;
 VAR_8.ord = VAR_5->cm_info->ord;
 VAR_8.ird = VAR_5->cm_info->ird;

 VAR_6->cm_id->event_handler(VAR_6->cm_id, &VAR_8);
}
