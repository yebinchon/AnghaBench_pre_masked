
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tpm_digest {scalar_t__ alg_id; } ;
struct tpm_chip {struct tpm_bank_info* allocated_banks; } ;
struct tpm_bank_info {scalar_t__ alg_id; int crypto_id; int digest_size; } ;
typedef enum hash_algo { ____Placeholder_hash_algo } hash_algo ;
struct TYPE_3__ {int crypto_id; scalar_t__ tpm_id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int * VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct tpm_chip*,int ,struct tpm_digest*,int *) ;

__attribute__((used)) static int FUNC_2(struct tpm_chip *VAR_2, u32 VAR_3)
{
 struct tpm_bank_info *VAR_4 = VAR_2->allocated_banks + VAR_3;
 struct tpm_digest VAR_5 = { .alg_id = VAR_4->alg_id };
 int VAR_6;





 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  enum hash_algo VAR_7 = VAR_1[VAR_6].crypto_id;

  if (VAR_4->alg_id != VAR_1[VAR_6].tpm_id)
   continue;

  VAR_4->digest_size = VAR_0[VAR_7];
  VAR_4->crypto_id = VAR_7;
  return 0;
 }

 return FUNC_1(VAR_2, 0, &VAR_5, &VAR_4->digest_size);
}
