
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_aes_ctx {int key_length; int key_enc; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_aes_ctx*,int *,int *) ;
 int FUNC_1 (int const*,int ,int,int,int *,int,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int const*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct crypto_aes_ctx *VAR_1, u8 const VAR_2[], int VAR_3,
     u8 VAR_4[], int VAR_5, int VAR_6)
{
 int VAR_7 = 6 + VAR_1->key_length / 4;

 if (FUNC_2()) {
  FUNC_4();
  FUNC_1(VAR_2, VAR_1->key_enc, VAR_7, VAR_3, VAR_4, VAR_5,
          VAR_6);
  FUNC_5();
 } else {
  if (VAR_5)
   FUNC_0(VAR_1, VAR_4, VAR_4);

  while (VAR_3--) {
   FUNC_3(VAR_4, VAR_2, VAR_0);
   VAR_2 += VAR_0;

   if (VAR_3 || VAR_6)
    FUNC_0(VAR_1, VAR_4, VAR_4);
  }
 }
}
