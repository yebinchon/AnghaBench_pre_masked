
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ecdh_ctx {unsigned int ndigits; int private_key; int curve_id; } ;
struct ecdh {int key_size; scalar_t__ key; int curve_id; } ;
struct crypto_kpp {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void const*,unsigned int,struct ecdh*) ;
 int FUNC_1 (int ,unsigned int,int ) ;
 scalar_t__ FUNC_2 (int ,unsigned int,int const*,int ) ;
 struct ecdh_ctx* FUNC_3 (struct crypto_kpp*) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct crypto_kpp *VAR_1, const void *VAR_2,
      unsigned int VAR_3)
{
 struct ecdh_ctx *VAR_4 = FUNC_3(VAR_1);
 struct ecdh VAR_5;
 unsigned int VAR_6;

 if (FUNC_0(VAR_2, VAR_3, &VAR_5) < 0)
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_5.curve_id);
 if (!VAR_6)
  return -VAR_0;

 VAR_4->curve_id = VAR_5.curve_id;
 VAR_4->ndigits = VAR_6;

 if (!VAR_5.key || !VAR_5.key_size)
  return FUNC_1(VAR_4->curve_id, VAR_4->ndigits,
           VAR_4->private_key);

 if (FUNC_2(VAR_4->curve_id, VAR_4->ndigits,
        (const u64 *)VAR_5.key, VAR_5.key_size) < 0)
  return -VAR_0;

 FUNC_5(VAR_4->private_key, VAR_5.key, VAR_5.key_size);

 return 0;
}
