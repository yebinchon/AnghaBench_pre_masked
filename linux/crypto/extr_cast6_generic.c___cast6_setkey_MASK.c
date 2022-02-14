
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cast6_ctx {int** Kr; int** Km; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int const*,unsigned int) ;
 int FUNC_3 (int *,int ,int) ;

int FUNC_4(struct cast6_ctx *VAR_2, const u8 *VAR_3,
     unsigned VAR_4, u32 *VAR_5)
{
 int VAR_6;
 u32 VAR_7[8];
 __be32 VAR_8[8];

 if (VAR_4 % 4 != 0) {
  *VAR_5 |= VAR_0;
  return -VAR_1;
 }

 FUNC_3(VAR_8, 0, 32);
 FUNC_2(VAR_8, VAR_3, VAR_4);

 VAR_7[0] = FUNC_1(VAR_8[0]);
 VAR_7[1] = FUNC_1(VAR_8[1]);
 VAR_7[2] = FUNC_1(VAR_8[2]);
 VAR_7[3] = FUNC_1(VAR_8[3]);
 VAR_7[4] = FUNC_1(VAR_8[4]);
 VAR_7[5] = FUNC_1(VAR_8[5]);
 VAR_7[6] = FUNC_1(VAR_8[6]);
 VAR_7[7] = FUNC_1(VAR_8[7]);

 for (VAR_6 = 0; VAR_6 < 12; VAR_6++) {
  FUNC_0(VAR_7, 2 * VAR_6);
  FUNC_0(VAR_7, 2 * VAR_6 + 1);

  VAR_2->Kr[VAR_6][0] = VAR_7[0] & 0x1f;
  VAR_2->Kr[VAR_6][1] = VAR_7[2] & 0x1f;
  VAR_2->Kr[VAR_6][2] = VAR_7[4] & 0x1f;
  VAR_2->Kr[VAR_6][3] = VAR_7[6] & 0x1f;

  VAR_2->Km[VAR_6][0] = VAR_7[7];
  VAR_2->Km[VAR_6][1] = VAR_7[5];
  VAR_2->Km[VAR_6][2] = VAR_7[3];
  VAR_2->Km[VAR_6][3] = VAR_7[1];
 }

 return 0;
}
