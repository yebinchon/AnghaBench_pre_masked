
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trusted_key_payload {int dummy; } ;
struct trusted_key_options {int dummy; } ;
struct tpm_chip {int dummy; } ;


 int FUNC_0 (struct tpm_chip*,int ) ;
 int FUNC_1 (struct tpm_chip*,struct trusted_key_payload*,struct trusted_key_options*,int *) ;
 int FUNC_2 (struct tpm_chip*,struct trusted_key_payload*,struct trusted_key_options*,int ) ;

int FUNC_3(struct tpm_chip *VAR_0,
   struct trusted_key_payload *VAR_1,
   struct trusted_key_options *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_0, VAR_3);
 return VAR_4;
}
