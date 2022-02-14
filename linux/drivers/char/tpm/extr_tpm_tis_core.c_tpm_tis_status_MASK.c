
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_tis_data {int locality; } ;
struct tpm_chip {int dev; } ;


 int FUNC_0 (int ) ;
 struct tpm_tis_data* FUNC_1 (int *) ;
 int FUNC_2 (struct tpm_tis_data*,int ,int *) ;

__attribute__((used)) static u8 FUNC_3(struct tpm_chip *VAR_0)
{
 struct tpm_tis_data *VAR_1 = FUNC_1(&VAR_0->dev);
 int VAR_2;
 u8 VAR_3;

 VAR_2 = FUNC_2(VAR_1, FUNC_0(VAR_1->locality), &VAR_3);
 if (VAR_2 < 0)
  return 0;

 return VAR_3;
}
