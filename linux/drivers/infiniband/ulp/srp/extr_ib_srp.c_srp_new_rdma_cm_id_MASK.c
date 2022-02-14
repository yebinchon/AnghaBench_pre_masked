
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dst; int src; scalar_t__ src_specified; } ;
struct srp_target_port {TYPE_1__ rdma_cm; int net; } ;
struct TYPE_4__ {int cm_id; } ;
struct srp_rdma_ch {int status; TYPE_2__ rdma_cm; int done; struct srp_target_port* target; } ;
struct sockaddr {int dummy; } ;
struct rdma_cm_id {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rdma_cm_id*) ;
 int FUNC_1 (struct rdma_cm_id*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int *,int,...) ;
 struct rdma_cm_id* FUNC_4 (int ,int ,struct srp_rdma_ch*,int ,int ) ;
 int FUNC_5 (struct rdma_cm_id*) ;
 int FUNC_6 (struct rdma_cm_id*,struct sockaddr*,struct sockaddr*,int ) ;
 int VAR_3 ;
 int FUNC_7 (int ,struct rdma_cm_id*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct srp_rdma_ch *VAR_4)
{
 struct srp_target_port *VAR_5 = VAR_4->target;
 struct rdma_cm_id *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(VAR_5->net, VAR_3, VAR_4,
       VAR_1, VAR_0);
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  VAR_6 = ((void*)0);
  goto out;
 }

 FUNC_2(&VAR_4->done);
 VAR_7 = FUNC_6(VAR_6, VAR_5->rdma_cm.src_specified ?
    (struct sockaddr *)&VAR_5->rdma_cm.src : ((void*)0),
    (struct sockaddr *)&VAR_5->rdma_cm.dst,
    VAR_2);
 if (VAR_7) {
  FUNC_3("No route available from %pIS to %pIS (%d)\n",
         &VAR_5->rdma_cm.src, VAR_5->rdma_cm.dst, VAR_7);
  goto out;
 }
 VAR_7 = FUNC_8(&VAR_4->done);
 if (VAR_7 < 0)
  goto out;

 VAR_7 = VAR_4->status;
 if (VAR_7) {
  FUNC_3("Resolving address %pIS failed (%d)\n",
         &VAR_5->rdma_cm.dst, VAR_7);
  goto out;
 }

 FUNC_7(VAR_4->rdma_cm.cm_id, VAR_6);

out:
 if (VAR_6)
  FUNC_5(VAR_6);

 return VAR_7;
}
