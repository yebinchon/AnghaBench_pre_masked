
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct rdma_nla_ls_gid {int dummy; } ;
struct rdma_ls_resolve_header {int dummy; } ;
typedef int ib_sa_comp_mask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(ib_sa_comp_mask VAR_6)
{
 int VAR_7 = 0;

 if (VAR_6 & VAR_3)
  VAR_7 += FUNC_2(sizeof(u64));
 if (VAR_6 & VAR_0)
  VAR_7 += FUNC_2(sizeof(struct rdma_nla_ls_gid));
 if (VAR_6 & VAR_4)
  VAR_7 += FUNC_2(sizeof(struct rdma_nla_ls_gid));
 if (VAR_6 & VAR_5)
  VAR_7 += FUNC_2(sizeof(u8));
 if (VAR_6 & VAR_1)
  VAR_7 += FUNC_2(sizeof(u16));
 if (VAR_6 & VAR_2)
  VAR_7 += FUNC_2(sizeof(u16));





 if (FUNC_1(VAR_7 == 0))
  return VAR_7;


 VAR_7 += FUNC_0(sizeof(struct rdma_ls_resolve_header));

 return VAR_7;
}
