
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_dma_promise {int cfg; int len; int dst; int src; int para; } ;
struct sun4i_dma_pchan {scalar_t__ base; scalar_t__ is_dedicated; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sun4i_dma_pchan *VAR_9,
       struct sun4i_dma_promise *VAR_10)
{




 if (VAR_9->is_dedicated) {
  FUNC_0(VAR_10->src, VAR_9->base + VAR_4);
  FUNC_0(VAR_10->dst, VAR_9->base + VAR_2);
  FUNC_0(VAR_10->len, VAR_9->base + VAR_0);
  FUNC_0(VAR_10->para, VAR_9->base + VAR_3);
  FUNC_0(VAR_10->cfg, VAR_9->base + VAR_1);
 } else {
  FUNC_0(VAR_10->src, VAR_9->base + VAR_8);
  FUNC_0(VAR_10->dst, VAR_9->base + VAR_7);
  FUNC_0(VAR_10->len, VAR_9->base + VAR_5);
  FUNC_0(VAR_10->cfg, VAR_9->base + VAR_6);
 }
}
