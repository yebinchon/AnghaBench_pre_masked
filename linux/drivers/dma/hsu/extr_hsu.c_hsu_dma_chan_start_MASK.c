
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hsu_dma_desc {unsigned int nents; unsigned int active; TYPE_1__* sg; } ;
struct dma_slave_config {int dst_maxburst; int dst_addr_width; int src_maxburst; int src_addr_width; } ;
struct hsu_dma_chan {scalar_t__ direction; struct hsu_dma_desc* desc; struct dma_slave_config config; } ;
struct TYPE_2__ {int addr; int len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int VAR_4 ;
 int FUNC_1 (unsigned int) ;
 int VAR_5 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_6 (struct hsu_dma_chan*) ;
 int FUNC_7 (struct hsu_dma_chan*) ;
 int FUNC_8 (struct hsu_dma_chan*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct hsu_dma_chan *VAR_8)
{
 struct dma_slave_config *VAR_9 = &VAR_8->config;
 struct hsu_dma_desc *VAR_10 = VAR_8->desc;
 u32 VAR_11 = 0, VAR_12 = 0;
 u32 VAR_13 = VAR_5 | VAR_4;
 unsigned int VAR_14, VAR_15;

 if (VAR_8->direction == VAR_1) {
  VAR_11 = VAR_9->dst_maxburst;
  VAR_12 = VAR_9->dst_addr_width;
 } else if (VAR_8->direction == VAR_0) {
  VAR_11 = VAR_9->src_maxburst;
  VAR_12 = VAR_9->src_addr_width;
 }

 FUNC_6(VAR_8);

 FUNC_8(VAR_8, VAR_3, 0);
 FUNC_8(VAR_8, VAR_2, VAR_11);
 FUNC_8(VAR_8, VAR_6, VAR_12);


 VAR_15 = VAR_10->nents - VAR_10->active;
 for (VAR_14 = 0; VAR_14 < VAR_15 && VAR_14 < VAR_7; VAR_14++) {
  FUNC_8(VAR_8, FUNC_4(VAR_14), VAR_10->sg[VAR_14].addr);
  FUNC_8(VAR_8, FUNC_5(VAR_14), VAR_10->sg[VAR_14].len);


  VAR_13 |= FUNC_3(VAR_14);
  VAR_13 |= FUNC_2(VAR_14);

  VAR_10->active++;
 }

 VAR_13 |= FUNC_1(VAR_15 - 1);
 VAR_13 |= FUNC_0(VAR_15 - 1);

 FUNC_8(VAR_8, VAR_3, VAR_13);

 FUNC_7(VAR_8);
}
