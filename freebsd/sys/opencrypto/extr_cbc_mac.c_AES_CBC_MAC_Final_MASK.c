
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct aes_cbc_mac_ctx {scalar_t__ blockIndex; int* staging_block; int* block; int rounds; int keysched; int nonceLength; int nonce; int cryptDataCount; } ;
typedef int s0 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int ) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int ,int ,int*,int*) ;
 int FUNC_4 (struct aes_cbc_mac_ctx*,int*,int*) ;

void
FUNC_5(uint8_t *VAR_2, struct aes_cbc_mac_ctx *VAR_3)
{
 uint8_t VAR_4[VAR_1];





 if (VAR_3->blockIndex != 0) {
  FUNC_4(VAR_3, VAR_3->staging_block, VAR_3->block);
  VAR_3->cryptDataCount += VAR_3->blockIndex;
  VAR_3->blockIndex = 0;
  FUNC_2(VAR_3->staging_block, sizeof(VAR_3->staging_block));
 }
 FUNC_1(VAR_4, sizeof(VAR_4));
 VAR_4[0] = (15 - VAR_3->nonceLength) - 1;
 FUNC_0(VAR_3->nonce, VAR_4 + 1, VAR_3->nonceLength);
 FUNC_3(VAR_3->keysched, VAR_3->rounds, VAR_4, VAR_4);
 for (size_t VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_2[VAR_5] = VAR_3->block[VAR_5] ^ VAR_4[VAR_5];
 FUNC_2(VAR_4, sizeof(VAR_4));
}
