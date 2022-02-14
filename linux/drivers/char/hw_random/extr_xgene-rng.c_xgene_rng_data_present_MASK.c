
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xgene_rng_dev {scalar_t__ csr_base; } ;
struct hwrng {scalar_t__ priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct hwrng *VAR_4, int VAR_5)
{
 struct xgene_rng_dev *VAR_6 = (struct xgene_rng_dev *) VAR_4->priv;
 u32 VAR_7, VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_8 = FUNC_0(VAR_6->csr_base + VAR_1);
  if ((VAR_8 & VAR_0) || !VAR_5)
   break;
  FUNC_1(VAR_3);
 }

 return (VAR_8 & VAR_0);
}
