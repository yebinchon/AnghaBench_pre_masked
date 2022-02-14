
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct alt_instr {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ) ;
 int FUNC_5 (int ,int ,int,int ,int ) ;
 int FUNC_6 () ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

void FUNC_11(struct alt_instr *VAR_14,
        __le32 *VAR_15, __le32 *VAR_16, int VAR_17)
{
 u64 VAR_18;
 u32 VAR_19;

 FUNC_0(VAR_17 != 5);

 if (FUNC_9() || !FUNC_8(VAR_8)) {
  FUNC_2(FUNC_8(VAR_8));
  return;
 }

 if (!VAR_13)
  FUNC_6();




 VAR_18 = (uintptr_t)FUNC_10(VAR_10);
 VAR_18 &= VAR_13;
 VAR_18 |= VAR_12 << VAR_11;


 VAR_18 |= ((u64)VAR_15 & FUNC_1(10, 7));





 VAR_18 += VAR_9;


 VAR_19 = FUNC_4(VAR_4,
      VAR_5,
      VAR_6,
      -16,
      VAR_7,
      VAR_1);
 *VAR_16++ = FUNC_7(VAR_19);


 VAR_19 = FUNC_5(VAR_4,
      (u16)VAR_18,
      0,
      VAR_7,
      VAR_3);
 *VAR_16++ = FUNC_7(VAR_19);


 VAR_19 = FUNC_5(VAR_4,
      (u16)(VAR_18 >> 16),
      16,
      VAR_7,
      VAR_2);
 *VAR_16++ = FUNC_7(VAR_19);


 VAR_19 = FUNC_5(VAR_4,
      (u16)(VAR_18 >> 32),
      32,
      VAR_7,
      VAR_2);
 *VAR_16++ = FUNC_7(VAR_19);


 VAR_19 = FUNC_3(VAR_4,
        VAR_0);
 *VAR_16++ = FUNC_7(VAR_19);
}
