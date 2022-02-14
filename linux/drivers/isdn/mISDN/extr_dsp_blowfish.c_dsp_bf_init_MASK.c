
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct dsp {int* bf_crypt_out; int bf_sync; int bf_enable; scalar_t__ bf_decrypt_out_pos; scalar_t__ bf_decrypt_in_pos; scalar_t__ bf_crypt_pos; int * bf_data_out; scalar_t__ bf_s; scalar_t__ bf_p; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int*,int*,int*) ;

int
FUNC_1(struct dsp *VAR_3, const u8 *VAR_4, uint VAR_5)
{
 short VAR_6, VAR_7, VAR_8;
 u32 VAR_9[2], VAR_10;
 u32 *VAR_11 = (u32 *)VAR_3->bf_p;
 u32 *VAR_12 = (u32 *)VAR_3->bf_s;

 if (VAR_5 < 4 || VAR_5 > 56)
  return 1;


 VAR_6 = 0;
 while (VAR_6 < 9) {
  VAR_3->bf_crypt_out[VAR_6] = 0xff;
  VAR_3->bf_data_out[VAR_6] = VAR_2;
  VAR_6++;
 }
 VAR_3->bf_crypt_pos = 0;
 VAR_3->bf_decrypt_in_pos = 0;
 VAR_3->bf_decrypt_out_pos = 0;
 VAR_3->bf_sync = 0x1ff;
 VAR_3->bf_enable = 1;


 for (VAR_6 = 0, VAR_8 = 0; VAR_6 < 256; VAR_6++)
  for (VAR_7 = 0; VAR_7 < 4; VAR_7++, VAR_8++)
   VAR_12[VAR_8] = VAR_1[VAR_8];


 for (VAR_6 = 0; VAR_6 < 16 + 2; VAR_6++)
  VAR_11[VAR_6] = VAR_0[VAR_6];


 for (VAR_7 = 0, VAR_6 = 0; VAR_6 < 16 + 2; VAR_6++) {
  VAR_10 = (((u32)VAR_4[VAR_7] << 24) |
   ((u32)VAR_4[(VAR_7 + 1) % VAR_5] << 16) |
   ((u32)VAR_4[(VAR_7 + 2) % VAR_5] << 8) |
   ((u32)VAR_4[(VAR_7 + 3) % VAR_5]));

  VAR_11[VAR_6] = VAR_11[VAR_6] ^ VAR_10;
  VAR_7 = (VAR_7 + 4) % VAR_5;
 }

 VAR_9[0] = 0x00000000;
 VAR_9[1] = 0x00000000;

 for (VAR_6 = 0; VAR_6 < 16 + 2; VAR_6 += 2) {
  FUNC_0(VAR_11, VAR_12, VAR_9, VAR_9);

  VAR_11[VAR_6] = VAR_9[0];
  VAR_11[VAR_6 + 1] = VAR_9[1];
 }

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  for (VAR_7 = 0, VAR_8 = VAR_6 * 256; VAR_7 < 256; VAR_7 += 2, VAR_8 += 2) {
   FUNC_0(VAR_11, VAR_12, VAR_9, VAR_9);

   VAR_12[VAR_8] = VAR_9[0];
   VAR_12[VAR_8 + 1] = VAR_9[1];
  }
 }

 return 0;
}
