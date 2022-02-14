
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_dma_chn_hw {int req; int des_blk_step; int src_blk_step; int frg_step; int llist_ptr; int wrap_to; int wrap_ptr; int trsf_step; int trsc_len; int blk_len; int frg_len; int des_addr; int src_addr; int intc; int cfg; int pause; } ;
struct sprd_dma_desc {struct sprd_dma_chn_hw chn_hw; } ;
struct sprd_dma_chn {scalar_t__ chn_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sprd_dma_chn *VAR_16,
        struct sprd_dma_desc *VAR_17)
{
 struct sprd_dma_chn_hw *VAR_18 = &VAR_17->chn_hw;

 FUNC_0(VAR_18->pause, VAR_16->chn_base + VAR_8);
 FUNC_0(VAR_18->cfg, VAR_16->chn_base + VAR_1);
 FUNC_0(VAR_18->intc, VAR_16->chn_base + VAR_6);
 FUNC_0(VAR_18->src_addr, VAR_16->chn_base + VAR_10);
 FUNC_0(VAR_18->des_addr, VAR_16->chn_base + VAR_2);
 FUNC_0(VAR_18->frg_len, VAR_16->chn_base + VAR_5);
 FUNC_0(VAR_18->blk_len, VAR_16->chn_base + VAR_0);
 FUNC_0(VAR_18->trsc_len, VAR_16->chn_base + VAR_12);
 FUNC_0(VAR_18->trsf_step, VAR_16->chn_base + VAR_13);
 FUNC_0(VAR_18->wrap_ptr, VAR_16->chn_base + VAR_14);
 FUNC_0(VAR_18->wrap_to, VAR_16->chn_base + VAR_15);
 FUNC_0(VAR_18->llist_ptr, VAR_16->chn_base + VAR_7);
 FUNC_0(VAR_18->frg_step, VAR_16->chn_base + VAR_4);
 FUNC_0(VAR_18->src_blk_step, VAR_16->chn_base + VAR_11);
 FUNC_0(VAR_18->des_blk_step, VAR_16->chn_base + VAR_3);
 FUNC_0(VAR_18->req, VAR_16->chn_base + VAR_9);
}
