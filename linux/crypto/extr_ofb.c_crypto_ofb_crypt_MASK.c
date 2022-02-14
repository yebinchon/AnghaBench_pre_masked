
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int const u8 ;
struct TYPE_7__ {int const* addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int const* addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {unsigned int const nbytes; int const* const iv; TYPE_4__ src; TYPE_2__ dst; } ;
struct skcipher_request {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_cipher {int dummy; } ;


 unsigned int FUNC_0 (struct crypto_cipher*) ;
 int FUNC_1 (struct crypto_cipher*,int const* const,int const* const) ;
 struct crypto_skcipher* FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (int const*,int const*,int const* const,unsigned int const) ;
 struct crypto_cipher* FUNC_4 (struct crypto_skcipher*) ;
 int FUNC_5 (struct skcipher_walk*,unsigned int) ;
 int FUNC_6 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_7(struct skcipher_request *VAR_0)
{
 struct crypto_skcipher *VAR_1 = FUNC_2(VAR_0);
 struct crypto_cipher *VAR_2 = FUNC_4(VAR_1);
 const unsigned int VAR_3 = FUNC_0(VAR_2);
 struct skcipher_walk VAR_4;
 int VAR_5;

 VAR_5 = FUNC_6(&VAR_4, VAR_0, 0);

 while (VAR_4.nbytes >= VAR_3) {
  const u8 *VAR_6 = VAR_4.src.virt.addr;
  u8 *VAR_7 = VAR_4.dst.virt.addr;
  u8 * const VAR_8 = VAR_4.iv;
  unsigned int VAR_9 = VAR_4.nbytes;

  do {
   FUNC_1(VAR_2, VAR_8, VAR_8);
   FUNC_3(VAR_7, VAR_6, VAR_8, VAR_3);
   VAR_7 += VAR_3;
   VAR_6 += VAR_3;
  } while ((VAR_9 -= VAR_3) >= VAR_3);

  VAR_5 = FUNC_5(&VAR_4, VAR_9);
 }

 if (VAR_4.nbytes) {
  FUNC_1(VAR_2, VAR_4.iv, VAR_4.iv);
  FUNC_3(VAR_4.dst.virt.addr, VAR_4.src.virt.addr, VAR_4.iv,
          VAR_4.nbytes);
  VAR_5 = FUNC_5(&VAR_4, 0);
 }
 return VAR_5;
}
