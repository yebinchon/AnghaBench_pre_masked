
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_edma_hw_tcd {void* csr; void* biter; void* dlast_sga; void* doff; void* citer; void* slast; void* nbytes; void* soff; void* attr; void* daddr; void* saddr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static inline
void FUNC_4(struct fsl_edma_hw_tcd *VAR_3, u32 VAR_4, u32 VAR_5,
         u16 VAR_6, u16 VAR_7, u32 VAR_8, u32 VAR_9, u16 VAR_10,
         u16 VAR_11, u16 VAR_12, u32 VAR_13, bool VAR_14,
         bool VAR_15, bool VAR_16)
{
 u16 VAR_17 = 0;







 VAR_3->saddr = FUNC_3(VAR_4);
 VAR_3->daddr = FUNC_3(VAR_5);

 VAR_3->attr = FUNC_2(VAR_6);

 VAR_3->soff = FUNC_2(VAR_7);

 VAR_3->nbytes = FUNC_3(VAR_8);
 VAR_3->slast = FUNC_3(VAR_9);

 VAR_3->citer = FUNC_2(FUNC_1(VAR_10));
 VAR_3->doff = FUNC_2(VAR_12);

 VAR_3->dlast_sga = FUNC_3(VAR_13);

 VAR_3->biter = FUNC_2(FUNC_0(VAR_11));
 if (VAR_14)
  VAR_17 |= VAR_2;

 if (VAR_15)
  VAR_17 |= VAR_0;

 if (VAR_16)
  VAR_17 |= VAR_1;

 VAR_3->csr = FUNC_2(VAR_17);
}
