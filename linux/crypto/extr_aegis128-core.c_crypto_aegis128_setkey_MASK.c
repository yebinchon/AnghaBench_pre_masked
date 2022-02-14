
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {int bytes; } ;
struct aegis_ctx {TYPE_1__ key; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct aegis_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*,int ) ;
 int FUNC_2 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_aead *VAR_3, const u8 *VAR_4,
      unsigned int VAR_5)
{
 struct aegis_ctx *VAR_6 = FUNC_0(VAR_3);

 if (VAR_5 != VAR_0) {
  FUNC_1(VAR_3, VAR_1);
  return -VAR_2;
 }

 FUNC_2(VAR_6->key.bytes, VAR_4, VAR_0);
 return 0;
}
