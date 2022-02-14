
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ib_cm_sidr_req_event_param {int bth_pkey; int pkey; int service_id; int port; TYPE_4__* listen_id; } ;
struct ib_cm_req_event_param {int bth_pkey; TYPE_3__* primary_path; int port; TYPE_2__* listen_id; } ;
struct TYPE_5__ {struct ib_cm_sidr_req_event_param sidr_req_rcvd; struct ib_cm_req_event_param req_rcvd; } ;
struct ib_cm_event {int event; TYPE_1__ param; } ;
struct cma_req_info {int has_gid; int pkey; int service_id; int port; int device; int local_gid; } ;
struct TYPE_8__ {int device; } ;
struct TYPE_7__ {int pkey; int service_id; int sgid; } ;
struct TYPE_6__ {int device; } ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(const struct ib_cm_event *VAR_1,
        struct cma_req_info *VAR_2)
{
 const struct ib_cm_req_event_param *VAR_3 =
  &VAR_1->param.req_rcvd;
 const struct ib_cm_sidr_req_event_param *VAR_4 =
  &VAR_1->param.sidr_req_rcvd;

 switch (VAR_1->event) {
 case 129:
  VAR_2->device = VAR_3->listen_id->device;
  VAR_2->port = VAR_3->port;
  FUNC_1(&VAR_2->local_gid, &VAR_3->primary_path->sgid,
         sizeof(VAR_2->local_gid));
  VAR_2->has_gid = 1;
  VAR_2->service_id = VAR_3->primary_path->service_id;
  VAR_2->pkey = FUNC_0(VAR_3->primary_path->pkey);
  if (VAR_2->pkey != VAR_3->bth_pkey)
   FUNC_2("RDMA CMA: got different BTH P_Key (0x%x) and primary path P_Key (0x%x)\n"
         "RDMA CMA: in the future this may cause the request to be dropped\n",
         VAR_3->bth_pkey, VAR_2->pkey);
  break;
 case 128:
  VAR_2->device = VAR_4->listen_id->device;
  VAR_2->port = VAR_4->port;
  VAR_2->has_gid = 0;
  VAR_2->service_id = VAR_4->service_id;
  VAR_2->pkey = VAR_4->pkey;
  if (VAR_2->pkey != VAR_4->bth_pkey)
   FUNC_2("RDMA CMA: got different BTH P_Key (0x%x) and SIDR request payload P_Key (0x%x)\n"
         "RDMA CMA: in the future this may cause the request to be dropped\n",
         VAR_4->bth_pkey, VAR_2->pkey);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
