
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mv_cesa_tdma_desc {scalar_t__ flags; int op; int src; int dst; int byte_cnt; struct mv_cesa_tdma_desc* next; } ;
struct mv_cesa_tdma_chain {struct mv_cesa_tdma_desc* first; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct mv_cesa_tdma_desc*) ;
 int FUNC_2 (struct mv_cesa_tdma_desc*) ;
 int FUNC_3 (scalar_t__) ;
 struct mv_cesa_tdma_desc* FUNC_4 (struct mv_cesa_tdma_chain*,int ) ;

int FUNC_5(struct mv_cesa_tdma_chain *VAR_6, dma_addr_t VAR_7,
     u32 VAR_8, u32 VAR_9, gfp_t VAR_10)
{
 struct mv_cesa_tdma_desc *VAR_11, *VAR_12;

 VAR_11 = FUNC_4(VAR_6, VAR_10);
 if (FUNC_1(VAR_11))
  return FUNC_2(VAR_11);






 for (VAR_12 = VAR_6->first; VAR_12; VAR_12 = VAR_12->next) {
  u32 VAR_13 = VAR_12->flags & VAR_4;

  if (VAR_13 == VAR_1)
   break;
 }

 if (!VAR_12)
  return -VAR_5;

 VAR_11->byte_cnt = FUNC_3(VAR_8 | FUNC_0(31));
 VAR_11->src = VAR_7;
 VAR_11->dst = VAR_12->src;
 VAR_11->op = VAR_12->op;

 VAR_9 &= (VAR_0 | VAR_3);
 VAR_11->flags = VAR_9 | VAR_2;
 return 0;
}
