
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_6__ {int pd_len; } ;
struct TYPE_7__ {TYPE_2__ params; } ;
struct TYPE_8__ {int pdata; TYPE_3__ hdr; } ;
struct siw_cep {scalar_t__ qp; int sock; scalar_t__ enhanced_rdma_conn_est; TYPE_4__ mpa; int ird; int ord; struct iw_cm_id* cm_id; TYPE_1__* listen_cep; } ;
struct mpa_v2_data {int dummy; } ;
struct iw_cm_id {int (* event_handler ) (struct iw_cm_id*,struct iw_cm_event*) ;} ;
struct iw_cm_event {int status; int event; int private_data; int remote_addr; int local_addr; scalar_t__ private_data_len; int ord; int ird; struct siw_cep* provider_data; } ;
typedef int event ;
typedef enum iw_cm_event_type { ____Placeholder_iw_cm_event_type } iw_cm_event_type ;
struct TYPE_5__ {struct iw_cm_id* cm_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct iw_cm_event*,int ,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct siw_cep*,char*,int ,int,int) ;
 int FUNC_6 (struct iw_cm_id*,struct iw_cm_event*) ;

__attribute__((used)) static int FUNC_7(struct siw_cep *VAR_4, enum iw_cm_event_type VAR_5,
    int VAR_6)
{
 struct iw_cm_event VAR_7;
 struct iw_cm_id *VAR_8;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.status = VAR_6;
 VAR_7.event = VAR_5;

 if (VAR_5 == VAR_1) {
  VAR_7.provider_data = VAR_4;
  VAR_8 = VAR_4->listen_cep->cm_id;
 } else {
  VAR_8 = VAR_4->cm_id;
 }

 if (VAR_5 == VAR_2 ||
     VAR_5 == VAR_0) {

  VAR_7.ird = VAR_4->ird;
  VAR_7.ord = VAR_4->ord;
 } else if (VAR_5 == VAR_1) {
  VAR_7.ird = VAR_4->ord;
  VAR_7.ord = VAR_4->ird;
 }

 if (VAR_5 == VAR_1 ||
     VAR_5 == VAR_0) {
  u16 VAR_9 = FUNC_0(VAR_4->mpa.hdr.params.pd_len);

  if (VAR_9) {



   VAR_7.private_data_len = VAR_9;
   VAR_7.private_data = VAR_4->mpa.pdata;


   if (VAR_4->enhanced_rdma_conn_est) {
    VAR_7.private_data_len -=
     sizeof(struct mpa_v2_data);
    VAR_7.private_data +=
     sizeof(struct mpa_v2_data);
   }
  }
  FUNC_1(VAR_4->sock, &VAR_7.local_addr);
  FUNC_2(VAR_4->sock, &VAR_7.remote_addr);
 }
 FUNC_5(VAR_4, "[QP %u]: reason=%d, status=%d\n",
      VAR_4->qp ? FUNC_4(VAR_4->qp) : VAR_3, VAR_5, VAR_6);

 return VAR_8->event_handler(VAR_8, &VAR_7);
}
