
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct salsa20_ctx {void** initial_state; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct salsa20_ctx* FUNC_0 (struct crypto_skcipher*) ;
 void* FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(struct crypto_skcipher *VAR_3, const u8 *VAR_4,
     unsigned int VAR_5)
{
 static const char VAR_6[16] = "expand 32-byte k";
 static const char VAR_7[16] = "expand 16-byte k";
 struct salsa20_ctx *VAR_8 = FUNC_0(VAR_3);
 const char *VAR_9;

 if (VAR_5 != VAR_2 &&
     VAR_5 != VAR_1)
  return -VAR_0;

 VAR_8->initial_state[1] = FUNC_1(VAR_4 + 0);
 VAR_8->initial_state[2] = FUNC_1(VAR_4 + 4);
 VAR_8->initial_state[3] = FUNC_1(VAR_4 + 8);
 VAR_8->initial_state[4] = FUNC_1(VAR_4 + 12);
 if (VAR_5 == 32) {
  VAR_4 += 16;
  VAR_9 = VAR_6;
 } else {
  VAR_9 = VAR_7;
 }
 VAR_8->initial_state[11] = FUNC_1(VAR_4 + 0);
 VAR_8->initial_state[12] = FUNC_1(VAR_4 + 4);
 VAR_8->initial_state[13] = FUNC_1(VAR_4 + 8);
 VAR_8->initial_state[14] = FUNC_1(VAR_4 + 12);
 VAR_8->initial_state[0] = FUNC_1(VAR_9 + 0);
 VAR_8->initial_state[5] = FUNC_1(VAR_9 + 4);
 VAR_8->initial_state[10] = FUNC_1(VAR_9 + 8);
 VAR_8->initial_state[15] = FUNC_1(VAR_9 + 12);


 VAR_8->initial_state[6] = 0;
 VAR_8->initial_state[7] = 0;


 VAR_8->initial_state[8] = 0;
 VAR_8->initial_state[9] = 0;

 return 0;
}
