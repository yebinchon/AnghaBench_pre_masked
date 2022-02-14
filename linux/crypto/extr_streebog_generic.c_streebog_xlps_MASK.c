
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct streebog_uint512 {int* qword; } ;


 int ** VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(const struct streebog_uint512 *VAR_1,
     const struct streebog_uint512 *VAR_2,
     struct streebog_uint512 *VAR_3)
{
 u64 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_4 = FUNC_1(VAR_1->qword[0] ^ VAR_2->qword[0]);
 VAR_5 = FUNC_1(VAR_1->qword[1] ^ VAR_2->qword[1]);
 VAR_6 = FUNC_1(VAR_1->qword[2] ^ VAR_2->qword[2]);
 VAR_7 = FUNC_1(VAR_1->qword[3] ^ VAR_2->qword[3]);
 VAR_8 = FUNC_1(VAR_1->qword[4] ^ VAR_2->qword[4]);
 VAR_9 = FUNC_1(VAR_1->qword[5] ^ VAR_2->qword[5]);
 VAR_10 = FUNC_1(VAR_1->qword[6] ^ VAR_2->qword[6]);
 VAR_11 = FUNC_1(VAR_1->qword[7] ^ VAR_2->qword[7]);

 for (VAR_12 = 0; VAR_12 <= 7; VAR_12++) {
  VAR_3->qword[VAR_12] = FUNC_0(VAR_0[0][VAR_4 & 0xFF]);
  VAR_3->qword[VAR_12] ^= FUNC_0(VAR_0[1][VAR_5 & 0xFF]);
  VAR_3->qword[VAR_12] ^= FUNC_0(VAR_0[2][VAR_6 & 0xFF]);
  VAR_3->qword[VAR_12] ^= FUNC_0(VAR_0[3][VAR_7 & 0xFF]);
  VAR_3->qword[VAR_12] ^= FUNC_0(VAR_0[4][VAR_8 & 0xFF]);
  VAR_3->qword[VAR_12] ^= FUNC_0(VAR_0[5][VAR_9 & 0xFF]);
  VAR_3->qword[VAR_12] ^= FUNC_0(VAR_0[6][VAR_10 & 0xFF]);
  VAR_3->qword[VAR_12] ^= FUNC_0(VAR_0[7][VAR_11 & 0xFF]);
  VAR_4 >>= 8;
  VAR_5 >>= 8;
  VAR_6 >>= 8;
  VAR_7 >>= 8;
  VAR_8 >>= 8;
  VAR_9 >>= 8;
  VAR_10 >>= 8;
  VAR_11 >>= 8;
 }
}
