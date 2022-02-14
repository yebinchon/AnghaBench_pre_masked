
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_tis_data {int locality; } ;
struct tpm_chip {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct tpm_tis_data* FUNC_1 (int *) ;
 int FUNC_2 (struct tpm_tis_data*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct tpm_chip *VAR_1)
{
 struct tpm_tis_data *VAR_2 = FUNC_1(&VAR_1->dev);


 FUNC_2(VAR_2, FUNC_0(VAR_2->locality), VAR_0);
}
