
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct tpm_tis_tcg_phy {scalar_t__ iobase; } ;
struct tpm_tis_data {int dummy; } ;


 int FUNC_0 (int ,scalar_t__) ;
 struct tpm_tis_tcg_phy* FUNC_1 (struct tpm_tis_data*) ;

__attribute__((used)) static int FUNC_2(struct tpm_tis_data *VAR_0, u32 VAR_1, u16 VAR_2,
          const u8 *VAR_3)
{
 struct tpm_tis_tcg_phy *VAR_4 = FUNC_1(VAR_0);

 while (VAR_2--)
  FUNC_0(*VAR_3++, VAR_4->iobase + VAR_1);

 return 0;
}
