
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;



__attribute__((used)) static void FUNC_0 (const u32 VAR_0, char *VAR_1, const u32 VAR_2, const u32 VAR_3, const u32 VAR_4, const u32 VAR_5, const u32 VAR_6, u32 *VAR_7, u32 *VAR_8, u32 *VAR_9, u32 *VAR_10)
{
  u32 *VAR_11 = (u32 *) VAR_1;

  const u32 VAR_12 = 1U << (VAR_11[VAR_2] & 0x1f);
  const u32 VAR_13 = 1U << (VAR_11[VAR_3] & 0x1f);
  const u32 VAR_14 = 1U << (VAR_11[VAR_4] & 0x1f);
  const u32 VAR_15 = 1U << (VAR_11[VAR_5] & 0x1f);

  const u32 VAR_16 = (VAR_11[VAR_2] >> VAR_0) & VAR_6;
  const u32 VAR_17 = (VAR_11[VAR_3] >> VAR_0) & VAR_6;
  const u32 VAR_18 = (VAR_11[VAR_4] >> VAR_0) & VAR_6;
  const u32 VAR_19 = (VAR_11[VAR_5] >> VAR_0) & VAR_6;

  VAR_7[VAR_16] |= VAR_12;
  VAR_8[VAR_17] |= VAR_13;
  VAR_9[VAR_18] |= VAR_14;
  VAR_10[VAR_19] |= VAR_15;
}
