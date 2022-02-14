
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tpm_tis_data {scalar_t__ ilb_base_addr; int locality; } ;
struct tpm_chip {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct tpm_tis_data* FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct tpm_chip*,int) ;
 int FUNC_4 (struct tpm_tis_data*,int,int*) ;
 int FUNC_5 (struct tpm_tis_data*,int,int) ;

void FUNC_6(struct tpm_chip *VAR_1)
{
 struct tpm_tis_data *VAR_2 = FUNC_1(&VAR_1->dev);
 u32 VAR_3 = FUNC_0(VAR_2->locality);
 u32 VAR_4;
 int VAR_5;

 FUNC_3(VAR_1, 1);

 VAR_5 = FUNC_4(VAR_2, VAR_3, &VAR_4);
 if (VAR_5 < 0)
  VAR_4 = 0;

 FUNC_5(VAR_2, VAR_3, ~VAR_0 & VAR_4);

 FUNC_3(VAR_1, 0);

 if (VAR_2->ilb_base_addr)
  FUNC_2(VAR_2->ilb_base_addr);
}
