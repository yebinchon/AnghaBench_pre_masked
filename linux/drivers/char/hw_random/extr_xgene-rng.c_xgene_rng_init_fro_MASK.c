
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_rng_dev {scalar_t__ csr_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct xgene_rng_dev *VAR_4, u32 VAR_5)
{
 FUNC_0(VAR_5, VAR_4->csr_base + VAR_2);
 FUNC_0(0x00000000, VAR_4->csr_base + VAR_0);
 FUNC_0(0x00000000, VAR_4->csr_base + VAR_1);
 FUNC_0(0xFFFFFFFF, VAR_4->csr_base + VAR_3);
}
