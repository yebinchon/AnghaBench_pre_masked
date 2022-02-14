
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dummy; } ;
struct tpm_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tpm_buf*) ;
 int FUNC_1 (struct tpm_buf*,int ,int ) ;
 int FUNC_2 (struct tpm_chip*,struct tpm_buf*,int ,char*) ;

__attribute__((used)) static int FUNC_3(struct tpm_chip *VAR_2)
{
 struct tpm_buf VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_3, VAR_1, VAR_0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_2, &VAR_3, 0, "continue selftest");
 FUNC_0(&VAR_3);
 return VAR_4;
}
