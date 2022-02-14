
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa_path_rec {scalar_t__ packet_life_time; int pkey; } ;
struct rdma_ah_attr {int dummy; } ;
struct ib_gid_attr {int dummy; } ;
struct cm_port {int port_num; struct cm_device* cm_dev; } ;
struct cm_id_private {int dummy; } ;
struct cm_device {int ib_device; } ;
struct cm_av {int ah_attr; scalar_t__ timeout; struct cm_port* port; int pkey_index; } ;


 int VAR_0 ;
 int FUNC_0 (struct cm_id_private*,struct cm_av*,struct cm_port*) ;
 int FUNC_1 (int ) ;
 struct cm_port* FUNC_2 (struct sa_path_rec*,struct ib_gid_attr const*) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,int ,struct sa_path_rec*,struct rdma_ah_attr*,struct ib_gid_attr const*) ;
 int FUNC_5 (struct rdma_ah_attr*) ;
 int FUNC_6 (int *,struct rdma_ah_attr*) ;

__attribute__((used)) static int FUNC_7(struct sa_path_rec *VAR_1,
         const struct ib_gid_attr *VAR_2,
         struct cm_av *VAR_3,
         struct cm_id_private *VAR_4)
{
 struct rdma_ah_attr VAR_5;
 struct cm_device *VAR_6;
 struct cm_port *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_7)
  return -VAR_0;
 VAR_6 = VAR_7->cm_dev;

 VAR_8 = FUNC_3(VAR_6->ib_device, VAR_7->port_num,
      FUNC_1(VAR_1->pkey), &VAR_3->pkey_index);
 if (VAR_8)
  return VAR_8;

 VAR_3->port = VAR_7;
 VAR_8 = FUNC_4(VAR_6->ib_device, VAR_7->port_num, VAR_1,
     &VAR_5, VAR_2);
 if (VAR_8)
  return VAR_8;

 VAR_3->timeout = VAR_1->packet_life_time + 1;

 VAR_8 = FUNC_0(VAR_4, VAR_3, VAR_7);
 if (VAR_8) {
  FUNC_5(&VAR_5);
  return VAR_8;
 }
 FUNC_6(&VAR_3->ah_attr, &VAR_5);
 return 0;
}
