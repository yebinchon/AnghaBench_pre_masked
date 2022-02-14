
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dummy; } ;
struct tpm_buf {void* data; } ;


 int VAR_0 ;
 struct tpm_chip* FUNC_0 (struct tpm_chip*) ;
 int FUNC_1 (struct tpm_chip*) ;
 int FUNC_2 (struct tpm_chip*,struct tpm_buf*,int ,char*) ;

int FUNC_3(struct tpm_chip *VAR_1, void *VAR_2, size_t VAR_3)
{
 struct tpm_buf VAR_4;
 int VAR_5;

 VAR_1 = FUNC_0(VAR_1);
 if (!VAR_1)
  return -VAR_0;

 VAR_4.data = VAR_2;
 VAR_5 = FUNC_2(VAR_1, &VAR_4, 0, "attempting to a send a command");

 FUNC_1(VAR_1);
 return VAR_5;
}
