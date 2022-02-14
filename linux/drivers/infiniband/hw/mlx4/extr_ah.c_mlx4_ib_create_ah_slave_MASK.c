
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_5__ {int sgid_index; int * sgid_attr; } ;
struct rdma_ah_attr {scalar_t__ type; TYPE_1__ grh; } ;
struct TYPE_7__ {int vlan; int s_mac; } ;
struct TYPE_6__ {int port_pd; } ;
struct TYPE_8__ {TYPE_3__ eth; TYPE_2__ ib; } ;
struct mlx4_ib_ah {TYPE_4__ av; } ;
struct ib_ah {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (struct ib_ah*,struct rdma_ah_attr*,int ,int *) ;
 int FUNC_4 (struct rdma_ah_attr*) ;
 struct mlx4_ib_ah* FUNC_5 (struct ib_ah*) ;

int FUNC_6(struct ib_ah *VAR_1, struct rdma_ah_attr *VAR_2,
       int VAR_3, u8 *VAR_4, u16 VAR_5)
{
 struct rdma_ah_attr VAR_6 = *VAR_2;
 struct mlx4_ib_ah *VAR_7 = FUNC_5(VAR_1);
 int VAR_8;

 VAR_6.grh.sgid_attr = ((void*)0);
 VAR_6.grh.sgid_index = VAR_3;
 VAR_8 = FUNC_3(VAR_1, &VAR_6, 0, ((void*)0));
 if (VAR_8)
  return VAR_8;

 VAR_1->type = VAR_2->type;


 VAR_7->av.ib.port_pd &= FUNC_1(0x7FFFFFFF);

 if (VAR_2->type == VAR_0)
  FUNC_2(VAR_7->av.eth.s_mac, VAR_4, 6);

 if (VAR_5 < 0x1000)
  VAR_5 |= (FUNC_4(VAR_2) & 7) << 13;
 VAR_7->av.eth.vlan = FUNC_0(VAR_5);

 return 0;
}
