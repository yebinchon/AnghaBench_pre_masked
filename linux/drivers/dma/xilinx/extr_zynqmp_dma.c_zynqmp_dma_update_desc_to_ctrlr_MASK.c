
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zynqmp_dma_desc_sw {int dst_p; int src_p; } ;
struct zynqmp_dma_chan {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zynqmp_dma_chan*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct zynqmp_dma_chan *VAR_2,
          struct zynqmp_dma_desc_sw *VAR_3)
{
 dma_addr_t VAR_4;

 VAR_4 = VAR_3->src_p;
 FUNC_0(VAR_2, VAR_1, VAR_4);
 VAR_4 = VAR_3->dst_p;
 FUNC_0(VAR_2, VAR_0, VAR_4);
}
