
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int * addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {int nbytes; scalar_t__ total; int * iv; TYPE_4__ src; TYPE_2__ dst; } ;
struct crypto_aes_ctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_aes_ctx*,int *,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int *,scalar_t__) ;
 int FUNC_4 (struct skcipher_walk*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct skcipher_walk *VAR_1, u8 VAR_2[], u8 VAR_3[],
         struct crypto_aes_ctx *VAR_4, bool VAR_5)
{
 u8 VAR_6[VAR_0];
 int VAR_7 = 0;

 while (VAR_1->nbytes) {
  int VAR_8 = VAR_1->nbytes / VAR_0;
  u32 VAR_9 = VAR_1->nbytes % VAR_0;
  u8 *VAR_10 = VAR_1->dst.virt.addr;
  u8 *VAR_11 = VAR_1->src.virt.addr;
  u32 VAR_12 = VAR_1->nbytes;

  if (VAR_12 == VAR_1->total && VAR_9 > 0) {
   VAR_8++;
   VAR_9 = 0;
  }

  do {
   u32 VAR_13 = VAR_0;

   if (VAR_12 < VAR_0)
    VAR_13 = VAR_12;

   FUNC_1(VAR_1->iv, VAR_0);
   FUNC_0(VAR_4, VAR_6, VAR_1->iv);
   FUNC_0(VAR_4, VAR_2, VAR_2);
   if (VAR_5)
    FUNC_2(VAR_2, VAR_11, VAR_13);
   FUNC_3(VAR_10, VAR_11, VAR_6, VAR_13);
   if (!VAR_5)
    FUNC_2(VAR_2, VAR_10, VAR_13);
   VAR_10 += VAR_13;
   VAR_11 += VAR_13;
   VAR_12 -= VAR_13;
  } while (--VAR_8);

  VAR_7 = FUNC_4(VAR_1, VAR_9);
 }

 if (!VAR_7) {
  FUNC_0(VAR_4, VAR_6, VAR_3);
  FUNC_0(VAR_4, VAR_2, VAR_2);
  FUNC_2(VAR_2, VAR_6, VAR_0);
 }
 return VAR_7;
}
