
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mpa_v2_conn_params {int dummy; } ;
struct mpa_message {int dummy; } ;
struct iw_cm_event {int status; scalar_t__ private_data; scalar_t__ private_data_len; void* ird; void* ord; int remote_addr; int local_addr; int event; } ;
struct TYPE_4__ {TYPE_1__* cm_id; int history; int dev; int remote_addr; int local_addr; } ;
struct c4iw_ep {TYPE_2__ com; int hwtid; scalar_t__ mpa_pkt; scalar_t__ plen; void* ord; void* ird; int tried_with_mpa_v1; } ;
typedef int event ;
struct TYPE_3__ {int (* event_handler ) (TYPE_1__*,struct iw_cm_event*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct iw_cm_event*,int ,int) ;
 int FUNC_4 (char*,struct c4iw_ep*,int ,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_1__*,struct iw_cm_event*) ;

__attribute__((used)) static void FUNC_7(struct c4iw_ep *VAR_3, int VAR_4)
{
 struct iw_cm_event VAR_5;

 FUNC_4("ep %p tid %u status %d\n",
   VAR_3, VAR_3->hwtid, VAR_4);
 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.event = VAR_2;
 VAR_5.status = VAR_4;
 FUNC_2(&VAR_5.local_addr, &VAR_3->com.local_addr,
        sizeof(VAR_3->com.local_addr));
 FUNC_2(&VAR_5.remote_addr, &VAR_3->com.remote_addr,
        sizeof(VAR_3->com.remote_addr));

 if ((VAR_4 == 0) || (VAR_4 == -VAR_1)) {
  if (!VAR_3->tried_with_mpa_v1) {

   VAR_5.ord = VAR_3->ird;
   VAR_5.ird = VAR_3->ord;
   VAR_5.private_data_len = VAR_3->plen -
    sizeof(struct mpa_v2_conn_params);
   VAR_5.private_data = VAR_3->mpa_pkt +
    sizeof(struct mpa_message) +
    sizeof(struct mpa_v2_conn_params);
  } else {

   VAR_5.ord = FUNC_0(VAR_3->com.dev);
   VAR_5.ird = FUNC_0(VAR_3->com.dev);
   VAR_5.private_data_len = VAR_3->plen;
   VAR_5.private_data = VAR_3->mpa_pkt +
    sizeof(struct mpa_message);
  }
 }

 FUNC_4("ep %p tid %u status %d\n", VAR_3,
   VAR_3->hwtid, VAR_4);
 FUNC_5(VAR_0, &VAR_3->com.history);
 VAR_3->com.cm_id->event_handler(VAR_3->com.cm_id, &VAR_5);

 if (VAR_4 < 0)
  FUNC_1(&VAR_3->com);
}
