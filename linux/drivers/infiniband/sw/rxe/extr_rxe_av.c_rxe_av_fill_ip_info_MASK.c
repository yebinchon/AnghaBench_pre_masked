
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct rxe_av {int network_type; int dgid_addr; int sgid_addr; } ;
struct TYPE_3__ {struct ib_gid_attr* sgid_attr; } ;
struct rdma_ah_attr {TYPE_1__ grh; } ;
struct ib_gid_attr {int gid; } ;
struct TYPE_4__ {int dgid; } ;


 TYPE_2__* FUNC_0 (struct rdma_ah_attr*) ;
 int FUNC_1 (struct sockaddr*,int *) ;
 int FUNC_2 (struct ib_gid_attr const*) ;

void FUNC_3(struct rxe_av *VAR_0, struct rdma_ah_attr *VAR_1)
{
 const struct ib_gid_attr *VAR_2 = VAR_1->grh.sgid_attr;

 FUNC_1((struct sockaddr *)&VAR_0->sgid_addr, &VAR_2->gid);
 FUNC_1((struct sockaddr *)&VAR_0->dgid_addr,
      &FUNC_0(VAR_1)->dgid);
 VAR_0->network_type = FUNC_2(VAR_2);
}
