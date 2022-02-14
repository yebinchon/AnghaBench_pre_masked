
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (const u8 VAR_0[16], u8 VAR_1[22])
{
  int VAR_2;

  VAR_2 = (VAR_0[ 0] << 16) | (VAR_0[ 6] << 8) | (VAR_0[12] << 0);

  VAR_1[ 0] = FUNC_0 (VAR_2 & 0x3f); VAR_2 >>= 6;
  VAR_1[ 1] = FUNC_0 (VAR_2 & 0x3f); VAR_2 >>= 6;
  VAR_1[ 2] = FUNC_0 (VAR_2 & 0x3f); VAR_2 >>= 6;
  VAR_1[ 3] = FUNC_0 (VAR_2 & 0x3f);

  VAR_2 = (VAR_0[ 1] << 16) | (VAR_0[ 7] << 8) | (VAR_0[13] << 0);

  VAR_1[ 4] = FUNC_0 (VAR_2 & 0x3f); VAR_2 >>= 6;
  VAR_1[ 5] = FUNC_0 (VAR_2 & 0x3f); VAR_2 >>= 6;
  VAR_1[ 6] = FUNC_0 (VAR_2 & 0x3f); VAR_2 >>= 6;
  VAR_1[ 7] = FUNC_0 (VAR_2 & 0x3f);

  VAR_2 = (VAR_0[ 2] << 16) | (VAR_0[ 8] << 8) | (VAR_0[14] << 0);

  VAR_1[ 8] = FUNC_0 (VAR_2 & 0x3f); VAR_2 >>= 6;
  VAR_1[ 9] = FUNC_0 (VAR_2 & 0x3f); VAR_2 >>= 6;
  VAR_1[10] = FUNC_0 (VAR_2 & 0x3f); VAR_2 >>= 6;
  VAR_1[11] = FUNC_0 (VAR_2 & 0x3f);

  VAR_2 = (VAR_0[ 3] << 16) | (VAR_0[ 9] << 8) | (VAR_0[15] << 0);

  VAR_1[12] = FUNC_0 (VAR_2 & 0x3f); VAR_2 >>= 6;
  VAR_1[13] = FUNC_0 (VAR_2 & 0x3f); VAR_2 >>= 6;
  VAR_1[14] = FUNC_0 (VAR_2 & 0x3f); VAR_2 >>= 6;
  VAR_1[15] = FUNC_0 (VAR_2 & 0x3f);

  VAR_2 = (VAR_0[ 4] << 16) | (VAR_0[10] << 8) | (VAR_0[ 5] << 0);

  VAR_1[16] = FUNC_0 (VAR_2 & 0x3f); VAR_2 >>= 6;
  VAR_1[17] = FUNC_0 (VAR_2 & 0x3f); VAR_2 >>= 6;
  VAR_1[18] = FUNC_0 (VAR_2 & 0x3f); VAR_2 >>= 6;
  VAR_1[19] = FUNC_0 (VAR_2 & 0x3f);

  VAR_2 = (VAR_0[11] << 0);

  VAR_1[20] = FUNC_0 (VAR_2 & 0x3f); VAR_2 >>= 6;
  VAR_1[21] = FUNC_0 (VAR_2 & 0x3f);
}
