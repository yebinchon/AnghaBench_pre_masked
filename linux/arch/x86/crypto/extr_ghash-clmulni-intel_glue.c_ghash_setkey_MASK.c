
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_3__ {int a; int b; } ;
struct ghash_ctx {TYPE_1__ shash; } ;
struct crypto_shash {int dummy; } ;
struct TYPE_4__ {int b; int a; } ;
typedef TYPE_2__ be128 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 struct ghash_ctx* FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (struct crypto_shash*,int ) ;

__attribute__((used)) static int FUNC_3(struct crypto_shash *VAR_3,
   const u8 *VAR_4, unsigned int VAR_5)
{
 struct ghash_ctx *VAR_6 = FUNC_1(VAR_3);
 be128 *VAR_7 = (be128 *)VAR_4;
 u64 VAR_8, VAR_9;

 if (VAR_5 != VAR_2) {
  FUNC_2(VAR_3, VAR_0);
  return -VAR_1;
 }


 VAR_8 = FUNC_0(VAR_7->a);
 VAR_9 = FUNC_0(VAR_7->b);

 VAR_6->shash.a = (VAR_9 << 1) | (VAR_8 >> 63);
 VAR_6->shash.b = (VAR_8 << 1) | (VAR_9 >> 63);

 if (VAR_8 >> 63)
  VAR_6->shash.b ^= ((u64)0xc2) << 56;

 return 0;
}
