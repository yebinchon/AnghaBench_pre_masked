
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {struct ib_gid_attr const* sgid_attr; } ;
struct rdma_ah_attr {TYPE_1__ grh; } ;
struct ib_gid_attr {int index; } ;


 int FUNC_0 (struct rdma_ah_attr*,union ib_gid*,int ,int ,int ,int ) ;

void FUNC_1(struct rdma_ah_attr *VAR_0, union ib_gid *VAR_1,
        u32 VAR_2, u8 VAR_3, u8 VAR_4,
        const struct ib_gid_attr *VAR_5)
{
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5->index, VAR_3,
   VAR_4);
 VAR_0->grh.sgid_attr = VAR_5;
}
