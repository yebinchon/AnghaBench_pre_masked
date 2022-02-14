
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_rng_dev {int datum_size; scalar_t__ csr_base; } ;
struct hwrng {scalar_t__ priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct hwrng *VAR_3, u32 *VAR_4)
{
 struct xgene_rng_dev *VAR_5 = (struct xgene_rng_dev *) VAR_3->priv;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->datum_size; VAR_6++)
  VAR_4[VAR_6] = FUNC_0(VAR_5->csr_base + VAR_1 + VAR_6 * 4);


 FUNC_1(VAR_0, VAR_5->csr_base + VAR_2);

 return VAR_5->datum_size << 2;
}
