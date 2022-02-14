
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_qdma_format {void* data; } ;
struct fsl_qdma_comp {scalar_t__ desc_bus_addr; scalar_t__ bus_addr; struct fsl_qdma_format* desc_virt_addr; struct fsl_qdma_format* virt_addr; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fsl_qdma_format*,int ,int ) ;
 int FUNC_3 (struct fsl_qdma_format*) ;
 int FUNC_4 (struct fsl_qdma_format*) ;
 int FUNC_5 (struct fsl_qdma_format*,int ) ;
 int FUNC_6 (struct fsl_qdma_format*,int ) ;
 int FUNC_7 (struct fsl_qdma_format*,int) ;
 int FUNC_8 (struct fsl_qdma_format*,int) ;
 int FUNC_9 (struct fsl_qdma_format*,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct fsl_qdma_comp *VAR_6,
          dma_addr_t VAR_7, dma_addr_t VAR_8, u32 VAR_9)
{
 u32 VAR_10;
 struct fsl_qdma_format *VAR_11, *VAR_12;
 struct fsl_qdma_format *VAR_13, *VAR_14, *VAR_15, *VAR_16;

 VAR_13 = VAR_6->virt_addr;
 VAR_14 = VAR_6->virt_addr + 1;
 VAR_15 = VAR_6->virt_addr + 2;
 VAR_16 = VAR_6->virt_addr + 3;
 VAR_11 = VAR_6->desc_virt_addr;
 VAR_12 = VAR_6->desc_virt_addr + 1;

 FUNC_2(VAR_6->virt_addr, 0, VAR_4);
 FUNC_2(VAR_6->desc_virt_addr, 0, VAR_5);

 FUNC_9(VAR_13, VAR_6->bus_addr + 16);
 FUNC_5(VAR_13, FUNC_3(VAR_13));
 FUNC_6(VAR_13, FUNC_4(VAR_13));


 FUNC_9(VAR_14, VAR_6->desc_bus_addr);

 FUNC_8(VAR_14, 32);
 FUNC_9(VAR_15, VAR_8);
 FUNC_8(VAR_15, VAR_9);
 FUNC_9(VAR_16, VAR_7);
 FUNC_8(VAR_16, VAR_9);

 FUNC_7(VAR_16, VAR_9);

 VAR_10 = FUNC_1(VAR_2 <<
     VAR_3);
 VAR_11->data = FUNC_0(VAR_10);

 VAR_10 = FUNC_1(VAR_2 <<
     VAR_3);
 VAR_10 |= FUNC_1(VAR_0 << VAR_1);
 VAR_12->data = FUNC_0(VAR_10);
}
