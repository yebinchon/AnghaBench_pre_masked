
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct crypto_aes_ctx {int key_enc; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct crypto_aes_ctx*,int *,int *) ;
 int FUNC_1 (int *,int const*,size_t,size_t*,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int const*,size_t) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (size_t,size_t) ;
 int FUNC_7 (struct crypto_aes_ctx*) ;

__attribute__((used)) static void FUNC_8(struct crypto_aes_ctx *VAR_1, u8 VAR_2[], u8 const VAR_3[],
      u32 VAR_4, u32 *VAR_5)
{
 if (FUNC_2()) {
  FUNC_4();
  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_1->key_enc,
         FUNC_7(VAR_1));
  FUNC_5();
 } else {
  if (*VAR_5 > 0 && *VAR_5 < VAR_0) {
   int VAR_6 = FUNC_6(VAR_4, VAR_0 - *VAR_5);

   FUNC_3(&VAR_2[*VAR_5], VAR_3, VAR_6);

   *VAR_5 += VAR_6;
   VAR_3 += VAR_6;
   VAR_4 -= VAR_6;
  }

  while (VAR_4 >= VAR_0) {
   FUNC_0(VAR_1, VAR_2, VAR_2);
   FUNC_3(VAR_2, VAR_3, VAR_0);

   VAR_3 += VAR_0;
   VAR_4 -= VAR_0;
  }

  if (VAR_4 > 0) {
   FUNC_0(VAR_1, VAR_2, VAR_2);
   FUNC_3(VAR_2, VAR_3, VAR_4);
   *VAR_5 = VAR_4;
  }
 }
}
