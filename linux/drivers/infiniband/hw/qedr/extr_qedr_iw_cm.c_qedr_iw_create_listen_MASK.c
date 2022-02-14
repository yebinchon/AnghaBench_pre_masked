
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * u6_addr32; } ;
struct TYPE_8__ {TYPE_2__ in6_u; } ;
struct sockaddr_in6 {int sin6_port; TYPE_3__ sin6_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
struct qedr_iw_listener {int backlog; int qed_handle; struct iw_cm_id* cm_id; struct qedr_dev* dev; } ;
struct qedr_dev {int rdma_ctx; TYPE_4__* ops; } ;
struct qed_iwarp_listen_out {int handle; } ;
struct qed_iwarp_listen_in {int max_backlog; void** ip_addr; int vlan; void* port; int ip_version; int event_cb; struct qedr_iw_listener* cb_context; } ;
struct TYPE_10__ {scalar_t__ ss_family; } ;
struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;struct qedr_iw_listener* provider_data; TYPE_5__ local_addr; int (* add_ref ) (struct iw_cm_id*) ;int m_local_addr; int device; } ;
struct TYPE_9__ {int (* iwarp_create_listen ) (int ,struct qed_iwarp_listen_in*,struct qed_iwarp_listen_out*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qedr_dev*,int ,char*,TYPE_5__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct qedr_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct qedr_iw_listener*) ;
 struct qedr_iw_listener* FUNC_4 (int,int ) ;
 int FUNC_5 (void**,int ,int) ;
 void* FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int VAR_7 ;
 int FUNC_8 (struct qedr_dev*,void**) ;
 int FUNC_9 (void**) ;
 int FUNC_10 (struct iw_cm_id*) ;
 int FUNC_11 (int ,struct qed_iwarp_listen_in*,struct qed_iwarp_listen_out*) ;
 int FUNC_12 (struct iw_cm_id*) ;

int FUNC_13(struct iw_cm_id *VAR_8, int VAR_9)
{
 struct qedr_dev *VAR_10 = FUNC_2(VAR_8->device);
 struct qedr_iw_listener *VAR_11;
 struct qed_iwarp_listen_in VAR_12;
 struct qed_iwarp_listen_out VAR_13;
 struct sockaddr_in *VAR_14;
 struct sockaddr_in6 *VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_14 = (struct sockaddr_in *)&VAR_8->m_local_addr;
 VAR_15 = (struct sockaddr_in6 *)&VAR_8->m_local_addr;

 FUNC_0(VAR_10, VAR_4,
   "Create Listener address: %pISpc\n", &VAR_8->local_addr);

 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->dev = VAR_10;
 VAR_8->add_ref(VAR_8);
 VAR_11->cm_id = VAR_8;
 VAR_11->backlog = VAR_9;

 VAR_12.cb_context = VAR_11;
 VAR_12.event_cb = VAR_7;
 VAR_12.max_backlog = VAR_9;

 if (!FUNC_1(VAR_1) ||
     VAR_8->local_addr.ss_family == VAR_0) {
  VAR_12.ip_version = VAR_5;
  FUNC_5(VAR_12.ip_addr, 0, sizeof(VAR_12.ip_addr));

  VAR_12.ip_addr[0] = FUNC_6(VAR_14->sin_addr.s_addr);
  VAR_12.port = FUNC_7(VAR_14->sin_port);
  VAR_12.vlan = FUNC_8(VAR_10, VAR_12.ip_addr);
 } else {
  VAR_12.ip_version = VAR_6;

  for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
   VAR_12.ip_addr[VAR_17] =
       FUNC_6(VAR_15->sin6_addr.in6_u.u6_addr32[VAR_17]);
  }

  VAR_12.port = FUNC_7(VAR_15->sin6_port);

  VAR_12.vlan = FUNC_9(VAR_12.ip_addr);
 }
 VAR_16 = VAR_10->ops->iwarp_create_listen(VAR_10->rdma_ctx, &VAR_12, &VAR_13);
 if (VAR_16)
  goto err;

 VAR_11->qed_handle = VAR_13.handle;
 VAR_8->provider_data = VAR_11;
 return VAR_16;

err:
 VAR_8->rem_ref(VAR_8);
 FUNC_3(VAR_11);
 return VAR_16;
}
