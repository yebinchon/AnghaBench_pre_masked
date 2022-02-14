
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trusted_key_payload {int dummy; } ;
struct trusted_key_options {int dummy; } ;
struct tpm_chip {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tpm_chip*,struct trusted_key_payload*,struct trusted_key_options*) ;
 struct tpm_chip* FUNC_1 (struct tpm_chip*) ;
 int FUNC_2 (struct tpm_chip*) ;

int FUNC_3(struct tpm_chip *VAR_2,
         struct trusted_key_payload *VAR_3,
         struct trusted_key_options *VAR_4)
{
 int VAR_5;

 VAR_2 = FUNC_1(VAR_2);
 if (!VAR_2 || !(VAR_2->flags & VAR_1))
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);

 FUNC_2(VAR_2);

 return VAR_5;
}
