
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_dma {int dev; scalar_t__ csr_dma; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct xgene_dma*) ;

__attribute__((used)) static int FUNC_5(struct xgene_dma *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  return VAR_5;


 FUNC_2(0x0, VAR_4->csr_dma + VAR_3);


 FUNC_1(VAR_4->csr_dma + VAR_3);


 FUNC_3(1000, 1100);

 if (FUNC_1(VAR_4->csr_dma + VAR_1)
  != VAR_2) {
  FUNC_0(VAR_4->dev,
   "Failed to release DMA memory from shutdown\n");
  return -VAR_0;
 }

 return 0;
}
