
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tpm_chip {int dummy; } ;
struct tpm_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tpm_buf*,int ) ;
 int FUNC_1 (struct tpm_buf*) ;
 int FUNC_2 (struct tpm_buf*,int ,int ) ;
 int FUNC_3 (struct tpm_chip*,struct tpm_buf*,int ,char*) ;

void FUNC_4(struct tpm_chip *VAR_2, u16 VAR_3)
{
 struct tpm_buf VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(&VAR_4, VAR_1, VAR_0);
 if (VAR_5)
  return;
 FUNC_0(&VAR_4, VAR_3);
 FUNC_3(VAR_2, &VAR_4, 0, "stopping the TPM");
 FUNC_1(&VAR_4);
}
