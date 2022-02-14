
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct aes_cbc_mac_ctx {int cryptDataLength; int const* nonce; int nonceLength; size_t authDataCount; size_t blockIndex; int* staging_block; int authDataLength; int block; int rounds; int keysched; } ;
typedef int sizeVal ;
typedef int b0 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int const*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned long long) ;
 int FUNC_5 (unsigned long long) ;
 int FUNC_6 (int ,int ,int*,int ) ;

void
FUNC_7(struct aes_cbc_mac_ctx *VAR_2, const uint8_t *VAR_3, uint16_t VAR_4)
{
 uint8_t VAR_5[VAR_1];
 uint8_t *VAR_6 = VAR_5, VAR_7 = 0;
 uint8_t VAR_8 = 0;
 uint64_t VAR_9 = VAR_2->cryptDataLength;

 FUNC_0(VAR_4 >= 7 && VAR_4 <= 13,
     ("nonceLen must be between 7 and 13 bytes"));

 VAR_2->nonce = VAR_3;
 VAR_2->nonceLength = VAR_4;

 VAR_2->authDataCount = 0;
 VAR_2->blockIndex = 0;
 FUNC_2(VAR_2->staging_block, sizeof(VAR_2->staging_block));







 VAR_8 = 15 - VAR_4;

 VAR_7 = ((VAR_2->authDataLength > 0) << 6) +
     (((VAR_0 - 2) / 2) << 3) +
     VAR_8 - 1;




 VAR_5[0] = VAR_7;
 FUNC_1(VAR_3, VAR_5 + 1, VAR_4);
 VAR_6 = VAR_5 + 1 + VAR_4;


 for (uint8_t *VAR_10 = VAR_5 + sizeof(VAR_5) - 1; VAR_10 >= VAR_6; VAR_10--) {
  *VAR_10 = VAR_9;
  VAR_9 >>= 8;
 }

 FUNC_6(VAR_2->keysched, VAR_2->rounds, VAR_5, VAR_2->block);

 if (VAR_2->authDataLength) {
  size_t VAR_11;
  if (VAR_2->authDataLength < ((1<<16) - (1<<8))) {
   uint16_t VAR_12 = FUNC_3(VAR_2->authDataLength);
   FUNC_1(&VAR_12, VAR_2->staging_block, sizeof(VAR_12));
   VAR_11 = sizeof(VAR_12);
  } else if (VAR_2->authDataLength < (1ULL<<32)) {
   uint32_t VAR_13 = FUNC_4(VAR_2->authDataLength);
   VAR_2->staging_block[0] = 0xff;
   VAR_2->staging_block[1] = 0xfe;
   FUNC_1(&VAR_13, VAR_2->staging_block+2, sizeof(VAR_13));
   VAR_11 = 2 + sizeof(VAR_13);
  } else {
   uint64_t VAR_14 = FUNC_5(VAR_2->authDataLength);
   VAR_2->staging_block[0] = 0xff;
   VAR_2->staging_block[1] = 0xff;
   FUNC_1(&VAR_14, VAR_2->staging_block+2, sizeof(VAR_14));
   VAR_11 = 2 + sizeof(VAR_14);
  }
  VAR_2->blockIndex = VAR_11;




  VAR_2->authDataLength += VAR_11;
  VAR_2->authDataCount = VAR_11;
 }
}
