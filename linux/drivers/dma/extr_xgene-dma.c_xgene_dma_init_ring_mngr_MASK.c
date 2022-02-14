
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_dma {scalar_t__ csr_ring; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct xgene_dma *VAR_14)
{
 if (FUNC_1(VAR_14->csr_ring + VAR_3) &&
     (!FUNC_1(VAR_14->csr_ring + VAR_9)))
  return 0;

 FUNC_2(0x3, VAR_14->csr_ring + VAR_3);
 FUNC_2(0x0, VAR_14->csr_ring + VAR_9);


 FUNC_2(0x0, VAR_14->csr_ring + VAR_8);


 FUNC_1(VAR_14->csr_ring + VAR_8);


 FUNC_3(1000, 1100);

 if (FUNC_1(VAR_14->csr_ring + VAR_1)
  != VAR_2) {
  FUNC_0(VAR_14->dev,
   "Failed to release ring mngr memory from shutdown\n");
  return -VAR_0;
 }


 FUNC_2(VAR_11,
    VAR_14->csr_ring + VAR_10);
 FUNC_2(VAR_13,
    VAR_14->csr_ring + VAR_12);
 FUNC_2(VAR_7,
    VAR_14->csr_ring + VAR_6);


 FUNC_2(VAR_5,
    VAR_14->csr_ring + VAR_4);

 return 0;
}
