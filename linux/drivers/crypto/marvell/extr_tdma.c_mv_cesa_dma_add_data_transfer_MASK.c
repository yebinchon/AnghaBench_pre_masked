
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv_cesa_tdma_desc {int flags; void* dst; void* src; int byte_cnt; } ;
struct mv_cesa_tdma_chain {int dummy; } ;
typedef int gfp_t ;
typedef void* dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mv_cesa_tdma_desc*) ;
 int FUNC_2 (struct mv_cesa_tdma_desc*) ;
 int FUNC_3 (int) ;
 struct mv_cesa_tdma_desc* FUNC_4 (struct mv_cesa_tdma_chain*,int ) ;

int FUNC_5(struct mv_cesa_tdma_chain *VAR_3,
      dma_addr_t VAR_4, dma_addr_t VAR_5, u32 VAR_6,
      u32 VAR_7, gfp_t VAR_8)
{
 struct mv_cesa_tdma_desc *VAR_9;

 VAR_9 = FUNC_4(VAR_3, VAR_8);
 if (FUNC_1(VAR_9))
  return FUNC_2(VAR_9);

 VAR_9->byte_cnt = FUNC_3(VAR_6 | FUNC_0(31));
 VAR_9->src = VAR_5;
 VAR_9->dst = VAR_4;

 VAR_7 &= (VAR_1 | VAR_2);
 VAR_9->flags = VAR_7 | VAR_0;

 return 0;
}
