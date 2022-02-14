
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hns_roce_wqe_raddr_seg {scalar_t__ len; int rkey; int raddr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_wqe_raddr_seg *VAR_0, u64 VAR_1,
     u32 VAR_2)
{
 VAR_0->raddr = FUNC_1(VAR_1);
 VAR_0->rkey = FUNC_0(VAR_2);
 VAR_0->len = 0;
}
