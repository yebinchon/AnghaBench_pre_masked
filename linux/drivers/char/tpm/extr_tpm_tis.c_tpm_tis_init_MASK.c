
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct tpm_tis_tcg_phy {TYPE_1__ priv; int iobase; } ;
struct tpm_info {int irq; int res; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int *) ;
 struct tpm_tis_tcg_phy* FUNC_6 (struct device*,int,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct device*,TYPE_1__*,int,int *,int ) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_6, struct tpm_info *VAR_7)
{
 struct tpm_tis_tcg_phy *VAR_8;
 int VAR_9 = -1;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_8 = FUNC_6(VAR_6, sizeof(struct tpm_tis_tcg_phy), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_8->iobase = FUNC_5(VAR_6, &VAR_7->res);
 if (FUNC_2(VAR_8->iobase))
  return FUNC_3(VAR_8->iobase);

 if (VAR_3)
  VAR_9 = VAR_7->irq;

 if (VAR_4 || FUNC_7(FUNC_0(VAR_6)))
  VAR_8->priv.flags |= VAR_2;

 return FUNC_8(VAR_6, &VAR_8->priv, VAR_9, &VAR_5,
     FUNC_1(VAR_6));
}
