
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dev; } ;
struct tpm_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct tpm_buf*,int ) ;
 int FUNC_2 (struct tpm_buf*) ;
 int FUNC_3 (struct tpm_buf*,int ,int ) ;
 int FUNC_4 (struct tpm_chip*,struct tpm_buf*,int ,char*) ;

__attribute__((used)) static int FUNC_5(struct tpm_chip *VAR_3)
{
 struct tpm_buf VAR_4;
 int VAR_5;

 FUNC_0(&VAR_3->dev, "starting up the TPM manually\n");

 VAR_5 = FUNC_3(&VAR_4, VAR_2, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_1(&VAR_4, VAR_1);

 VAR_5 = FUNC_4(VAR_3, &VAR_4, 0, "attempting to start the TPM");
 FUNC_2(&VAR_4);
 return VAR_5;
}
