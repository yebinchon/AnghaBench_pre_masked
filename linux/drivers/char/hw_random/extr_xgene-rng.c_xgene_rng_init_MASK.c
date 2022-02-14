
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_rng_dev {int datum_size; scalar_t__ csr_base; int dev; int revision; int failure_timer; scalar_t__ failure_cnt; } ;
struct hwrng {scalar_t__ priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (struct xgene_rng_dev*) ;

__attribute__((used)) static int FUNC_7(struct hwrng *VAR_4)
{
 struct xgene_rng_dev *VAR_5 = (struct xgene_rng_dev *) VAR_4->priv;

 VAR_5->failure_cnt = 0;
 FUNC_5(&VAR_5->failure_timer, VAR_3, 0);

 VAR_5->revision = FUNC_4(VAR_5->csr_base + VAR_0);

 FUNC_3(VAR_5->dev, "Rev %d.%d.%d\n",
  FUNC_1(VAR_5->revision),
  FUNC_2(VAR_5->revision),
  FUNC_0(VAR_5->revision));

 FUNC_3(VAR_5->dev, "Options 0x%08X",
  FUNC_4(VAR_5->csr_base + VAR_2));

 FUNC_6(VAR_5);

 VAR_5->datum_size = VAR_1;

 return 0;
}
