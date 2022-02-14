
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_dma_chan {int dummy; } ;
typedef enum xgene_dma_ring_cfgsize { ____Placeholder_xgene_dma_ring_cfgsize } xgene_dma_ring_cfgsize ;


 int VAR_0 ;





 int FUNC_0 (struct xgene_dma_chan*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct xgene_dma_chan *VAR_1,
       enum xgene_dma_ring_cfgsize VAR_2)
{
 int VAR_3;

 switch (VAR_2) {
 case 130:
  VAR_3 = 0x200;
  break;
 case 131:
  VAR_3 = 0x800;
  break;
 case 132:
  VAR_3 = 0x4000;
  break;
 case 128:
  VAR_3 = 0x10000;
  break;
 case 129:
  VAR_3 = 0x80000;
  break;
 default:
  FUNC_0(VAR_1, "Unsupported cfg ring size %d\n", VAR_2);
  return -VAR_0;
 }

 return VAR_3;
}
