
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sa_path_rec {int dummy; } ;
struct net_device {int dummy; } ;
struct ipoib_dev_priv {TYPE_1__* qp; } ;
struct ipoib_cm_data {void* mtu; void* qpn; } ;
struct ib_qp {int qp_type; int qp_num; } ;
struct ib_cm_req_param {int private_data_len; int responder_resources; int remote_cm_response_timeout; int local_cm_response_timeout; int max_cm_retries; int srq; scalar_t__ rnr_retry_count; scalar_t__ retry_count; scalar_t__ starting_psn; scalar_t__ flow_control; struct ipoib_cm_data* private_data; int qp_type; int qp_num; int service_id; int * alternate_path; struct sa_path_rec* primary_path; } ;
struct ib_cm_id {int dummy; } ;
typedef int data ;
struct TYPE_2__ {int qp_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ib_cm_id*,struct ib_cm_req_param*) ;
 int FUNC_3 (struct net_device*) ;
 struct ipoib_dev_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
        struct ib_cm_id *VAR_3, struct ib_qp *VAR_4,
        u32 VAR_5,
        struct sa_path_rec *VAR_6)
{
 struct ipoib_dev_priv *VAR_7 = FUNC_4(VAR_2);
 struct ipoib_cm_data VAR_8 = {};
 struct ib_cm_req_param VAR_9 = {};

 VAR_8.qpn = FUNC_0(VAR_7->qp->qp_num);
 VAR_8.mtu = FUNC_0(VAR_0);

 VAR_9.primary_path = VAR_6;
 VAR_9.alternate_path = ((void*)0);
 VAR_9.service_id = FUNC_1(VAR_1 | VAR_5);
 VAR_9.qp_num = VAR_4->qp_num;
 VAR_9.qp_type = VAR_4->qp_type;
 VAR_9.private_data = &VAR_8;
 VAR_9.private_data_len = sizeof(VAR_8);
 VAR_9.flow_control = 0;

 VAR_9.starting_psn = 0;





 VAR_9.responder_resources = 4;
 VAR_9.remote_cm_response_timeout = 20;
 VAR_9.local_cm_response_timeout = 20;
 VAR_9.retry_count = 0;
 VAR_9.rnr_retry_count = 0;
 VAR_9.max_cm_retries = 15;
 VAR_9.srq = FUNC_3(VAR_2);
 return FUNC_2(VAR_3, &VAR_9);
}
