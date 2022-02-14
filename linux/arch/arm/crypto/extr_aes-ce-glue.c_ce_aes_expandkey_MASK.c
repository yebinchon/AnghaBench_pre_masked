
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_aes_ctx {unsigned int key_length; int* key_enc; scalar_t__ key_dec; } ;
struct aes_block {int dummy; } ;
typedef int rcon ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aes_block*,struct aes_block*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct crypto_aes_ctx*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct crypto_aes_ctx *VAR_4, const u8 *VAR_5,
       unsigned int VAR_6)
{



 static u8 const VAR_7[] = {
  0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36,
 };

 u32 VAR_8 = VAR_6 / sizeof(u32);
 struct aes_block *VAR_9, *VAR_10;
 int VAR_11, VAR_12;

 if (VAR_6 != VAR_0 &&
     VAR_6 != VAR_1 &&
     VAR_6 != VAR_2)
  return -VAR_3;

 VAR_4->key_length = VAR_6;
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
  VAR_4->key_enc[VAR_11] = FUNC_2(VAR_5 + VAR_11 * sizeof(u32));

 FUNC_3();
 for (VAR_11 = 0; VAR_11 < sizeof(VAR_7); VAR_11++) {
  u32 *VAR_13 = VAR_4->key_enc + (VAR_11 * VAR_8);
  u32 *VAR_14 = VAR_13 + VAR_8;

  VAR_14[0] = FUNC_6(FUNC_1(VAR_13[VAR_8 - 1]), 8);
  VAR_14[0] = VAR_14[0] ^ VAR_13[0] ^ VAR_7[VAR_11];
  VAR_14[1] = VAR_14[0] ^ VAR_13[1];
  VAR_14[2] = VAR_14[1] ^ VAR_13[2];
  VAR_14[3] = VAR_14[2] ^ VAR_13[3];

  if (VAR_6 == VAR_1) {
   if (VAR_11 >= 7)
    break;
   VAR_14[4] = VAR_14[3] ^ VAR_13[4];
   VAR_14[5] = VAR_14[4] ^ VAR_13[5];
  } else if (VAR_6 == VAR_2) {
   if (VAR_11 >= 6)
    break;
   VAR_14[4] = FUNC_1(VAR_14[3]) ^ VAR_13[4];
   VAR_14[5] = VAR_14[4] ^ VAR_13[5];
   VAR_14[6] = VAR_14[5] ^ VAR_13[6];
   VAR_14[7] = VAR_14[6] ^ VAR_13[7];
  }
 }







 VAR_9 = (struct aes_block *)VAR_4->key_enc;
 VAR_10 = (struct aes_block *)VAR_4->key_dec;
 VAR_12 = FUNC_5(VAR_4);

 VAR_10[0] = VAR_9[VAR_12];
 for (VAR_11 = 1, VAR_12--; VAR_12 > 0; VAR_11++, VAR_12--)
  FUNC_0(VAR_10 + VAR_11, VAR_9 + VAR_12);
 VAR_10[VAR_11] = VAR_9[0];

 FUNC_4();
 return 0;
}
