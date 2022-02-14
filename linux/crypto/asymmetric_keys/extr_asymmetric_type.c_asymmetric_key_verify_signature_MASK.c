
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct public_key_signature {void* digest; void* s; int hash_algo; int encoding; int digest_size; int s_size; } ;
struct kernel_pkey_params {int key; int hash_algo; int encoding; int in_len; int in2_len; } ;


 int FUNC_0 (int ,struct public_key_signature*) ;

__attribute__((used)) static int FUNC_1(struct kernel_pkey_params *VAR_0,
        const void *VAR_1, const void *VAR_2)
{
 struct public_key_signature VAR_3 = {
  .s_size = VAR_0->in2_len,
  .digest_size = VAR_0->in_len,
  .encoding = VAR_0->encoding,
  .hash_algo = VAR_0->hash_algo,
  .digest = (void *)VAR_1,
  .s = (void *)VAR_2,
 };

 return FUNC_0(VAR_0->key, &VAR_3);
}
