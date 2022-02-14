
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_tis_data {int locality; } ;
struct tpm_chip {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct tpm_tis_data* FUNC_1 (int *) ;
 int FUNC_2 (struct tpm_tis_data*,int ,int*) ;

__attribute__((used)) static bool FUNC_3(struct tpm_chip *VAR_2, int VAR_3)
{
 struct tpm_tis_data *VAR_4 = FUNC_1(&VAR_2->dev);
 int VAR_5;
 u8 VAR_6;

 VAR_5 = FUNC_2(VAR_4, FUNC_0(VAR_3), &VAR_6);
 if (VAR_5 < 0)
  return 0;

 if ((VAR_6 & (VAR_0 | VAR_1)) ==
     (VAR_0 | VAR_1)) {
  VAR_4->locality = VAR_3;
  return 1;
 }

 return 0;
}
