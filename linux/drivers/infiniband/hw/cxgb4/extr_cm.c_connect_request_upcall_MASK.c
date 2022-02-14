
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mpa_v2_conn_params {int dummy; } ;
struct mpa_message {int dummy; } ;
struct iw_cm_event {scalar_t__ private_data; scalar_t__ private_data_len; void* ird; void* ord; struct c4iw_ep* provider_data; int remote_addr; int local_addr; int event; } ;
struct TYPE_7__ {int history; TYPE_2__* cm_id; int dev; int remote_addr; int local_addr; } ;
struct c4iw_ep {TYPE_1__* parent_ep; TYPE_3__ com; scalar_t__ mpa_pkt; scalar_t__ plen; void* ird; void* ord; int tried_with_mpa_v1; int hwtid; } ;
typedef int event ;
struct TYPE_6__ {int (* event_handler ) (TYPE_2__*,struct iw_cm_event*) ;} ;
struct TYPE_5__ {TYPE_3__ com; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct iw_cm_event*,int ,int) ;
 int FUNC_5 (char*,struct c4iw_ep*,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_2__*,struct iw_cm_event*) ;

__attribute__((used)) static int FUNC_8(struct c4iw_ep *VAR_2)
{
 struct iw_cm_event VAR_3;
 int VAR_4;

 FUNC_5("ep %p tid %u\n", VAR_2, VAR_2->hwtid);
 FUNC_4(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.event = VAR_1;
 FUNC_3(&VAR_3.local_addr, &VAR_2->com.local_addr,
        sizeof(VAR_2->com.local_addr));
 FUNC_3(&VAR_3.remote_addr, &VAR_2->com.remote_addr,
        sizeof(VAR_2->com.remote_addr));
 VAR_3.provider_data = VAR_2;
 if (!VAR_2->tried_with_mpa_v1) {

  VAR_3.ord = VAR_2->ord;
  VAR_3.ird = VAR_2->ird;
  VAR_3.private_data_len = VAR_2->plen -
   sizeof(struct mpa_v2_conn_params);
  VAR_3.private_data = VAR_2->mpa_pkt + sizeof(struct mpa_message) +
   sizeof(struct mpa_v2_conn_params);
 } else {

  VAR_3.ord = FUNC_2(VAR_2->com.dev);
  VAR_3.ird = FUNC_2(VAR_2->com.dev);
  VAR_3.private_data_len = VAR_2->plen;
  VAR_3.private_data = VAR_2->mpa_pkt + sizeof(struct mpa_message);
 }
 FUNC_0(&VAR_2->com);
 VAR_4 = VAR_2->parent_ep->com.cm_id->event_handler(VAR_2->parent_ep->com.cm_id,
            &VAR_3);
 if (VAR_4)
  FUNC_1(&VAR_2->com);
 FUNC_6(VAR_0, &VAR_2->com.history);
 FUNC_1(&VAR_2->parent_ep->com);
 return VAR_4;
}
