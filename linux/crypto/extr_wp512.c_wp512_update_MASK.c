
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned long long u64 ;
typedef int u32 ;
struct wp512_ctx {int bufferBits; int* buffer; int* bitLength; int bufferPos; } ;
struct shash_desc {int dummy; } ;


 int VAR_0 ;
 struct wp512_ctx* FUNC_0 (struct shash_desc*) ;
 int FUNC_1 (struct wp512_ctx*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_1, const u8 *VAR_2,
    unsigned int VAR_3)
{
 struct wp512_ctx *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = 0;
 unsigned int VAR_6 = VAR_3 * 8;
 int VAR_7 = (8 - ((int)VAR_6 & 7)) & 7;
 int VAR_8 = VAR_4->bufferBits & 7;
 int VAR_9;
 u32 VAR_10, VAR_11;
 u8 *VAR_12 = VAR_4->buffer;
 u8 *VAR_13 = VAR_4->bitLength;
 int VAR_14 = VAR_4->bufferBits;
 int VAR_15 = VAR_4->bufferPos;

 u64 VAR_16 = VAR_6;
 for (VAR_9 = 31, VAR_11 = 0; VAR_9 >= 0 && (VAR_11 != 0 || VAR_16 != 0ULL); VAR_9--) {
  VAR_11 += VAR_13[VAR_9] + ((u32)VAR_16 & 0xff);
  VAR_13[VAR_9] = (u8)VAR_11;
  VAR_11 >>= 8;
  VAR_16 >>= 8;
 }
 while (VAR_6 > 8) {
  VAR_10 = ((VAR_2[VAR_5] << VAR_7) & 0xff) |
  ((VAR_2[VAR_5 + 1] & 0xff) >> (8 - VAR_7));
  VAR_12[VAR_15++] |= (u8)(VAR_10 >> VAR_8);
  VAR_14 += 8 - VAR_8;
  if (VAR_14 == VAR_0 * 8) {
   FUNC_1(VAR_4);
   VAR_14 = VAR_15 = 0;
  }
  VAR_12[VAR_15] = VAR_10 << (8 - VAR_8);
  VAR_14 += VAR_8;
  VAR_6 -= 8;
  VAR_5++;
 }
 if (VAR_6 > 0) {
  VAR_10 = (VAR_2[VAR_5] << VAR_7) & 0xff;
  VAR_12[VAR_15] |= VAR_10 >> VAR_8;
 } else {
  VAR_10 = 0;
 }
 if (VAR_8 + VAR_6 < 8) {
  VAR_14 += VAR_6;
 } else {
  VAR_15++;
  VAR_14 += 8 - VAR_8;
  VAR_6 -= 8 - VAR_8;
  if (VAR_14 == VAR_0 * 8) {
   FUNC_1(VAR_4);
   VAR_14 = VAR_15 = 0;
  }
  VAR_12[VAR_15] = VAR_10 << (8 - VAR_8);
  VAR_14 += (int)VAR_6;
 }

 VAR_4->bufferBits = VAR_14;
 VAR_4->bufferPos = VAR_15;

 return 0;
}
