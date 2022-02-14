
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef char u8 ;
struct hmac_ctx {struct crypto_shash* hash; } ;
struct crypto_shash {int dummy; } ;
struct TYPE_7__ {struct crypto_shash* tfm; } ;


 char VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct crypto_shash*) ;
 struct hmac_ctx* FUNC_1 (char*,int ) ;
 int FUNC_2 (struct crypto_shash*) ;
 char* FUNC_3 (struct crypto_shash*) ;
 int FUNC_4 (TYPE_1__*,char const*,unsigned int,char*) ;
 int FUNC_5 (struct crypto_shash*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct crypto_shash*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,char*,int) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,char const*,int) ;
 int FUNC_12 (char*,int ,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_13(struct crypto_shash *VAR_3,
         const u8 *VAR_4, unsigned int VAR_5)
{
 int VAR_6 = FUNC_2(VAR_3);
 int VAR_7 = FUNC_5(VAR_3);
 int VAR_8 = FUNC_8(VAR_3);
 char *VAR_9 = FUNC_3(VAR_3);
 char *VAR_10 = VAR_9 + VAR_8;
 struct hmac_ctx *VAR_11 = FUNC_1(VAR_10 + VAR_8,
      FUNC_10());
 struct crypto_shash *VAR_12 = VAR_11->hash;
 FUNC_0(VAR_2, VAR_12);
 unsigned int VAR_13;

 VAR_2->tfm = VAR_12;

 if (VAR_5 > VAR_6) {
  int VAR_14;

  VAR_14 = FUNC_4(VAR_2, VAR_4, VAR_5, VAR_9);
  if (VAR_14)
   return VAR_14;

  VAR_5 = VAR_7;
 } else
  FUNC_11(VAR_9, VAR_4, VAR_5);

 FUNC_12(VAR_9 + VAR_5, 0, VAR_6 - VAR_5);
 FUNC_11(VAR_10, VAR_9, VAR_6);

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  VAR_9[VAR_13] ^= VAR_0;
  VAR_10[VAR_13] ^= VAR_1;
 }

 return FUNC_7(VAR_2) ?:
        FUNC_9(VAR_2, VAR_9, VAR_6) ?:
        FUNC_6(VAR_2, VAR_9) ?:
        FUNC_7(VAR_2) ?:
        FUNC_9(VAR_2, VAR_10, VAR_6) ?:
        FUNC_6(VAR_2, VAR_10);
}
