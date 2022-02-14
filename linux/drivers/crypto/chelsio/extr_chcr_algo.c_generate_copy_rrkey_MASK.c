
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ablk_ctx {scalar_t__ ciph_mode; int enckey_len; scalar_t__ rrkey; scalar_t__ key; } ;
struct _key_ctx {scalar_t__ key; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct ablk_ctx *VAR_1,
          struct _key_ctx *VAR_2)
{
 if (VAR_1->ciph_mode == VAR_0) {
  FUNC_0(VAR_2->key, VAR_1->rrkey, VAR_1->enckey_len);
 } else {
  FUNC_0(VAR_2->key,
         VAR_1->key + (VAR_1->enckey_len >> 1),
         VAR_1->enckey_len >> 1);
  FUNC_0(VAR_2->key + (VAR_1->enckey_len >> 1),
         VAR_1->rrkey, VAR_1->enckey_len >> 1);
 }
 return 0;
}
