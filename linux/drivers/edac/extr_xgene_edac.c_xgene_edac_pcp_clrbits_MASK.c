
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xgene_edac {int lock; scalar_t__ pcp_csr; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct xgene_edac *VAR_0, u32 VAR_1,
       u32 VAR_2)
{
 u32 VAR_3;

 FUNC_1(&VAR_0->lock);
 VAR_3 = FUNC_0(VAR_0->pcp_csr + VAR_1);
 VAR_3 &= ~VAR_2;
 FUNC_3(VAR_3, VAR_0->pcp_csr + VAR_1);
 FUNC_2(&VAR_0->lock);
}
