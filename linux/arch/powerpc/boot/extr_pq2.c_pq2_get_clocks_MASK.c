
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int* FUNC_0 () ;
 int FUNC_1 (int*) ;
 int* VAR_2 ;
 int FUNC_2 (char*) ;

int FUNC_3(u32 VAR_3, u32 *VAR_4, u32 *VAR_5,
                   u32 *VAR_6, u32 *VAR_7)
{
 u32 *VAR_8;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_8 = FUNC_0();
 if (!VAR_8) {
  FUNC_2("pq2_get_clocks: Couldn't get IMMR base.\r\n");
  return 0;
 }

 VAR_9 = FUNC_1(&VAR_8[VAR_0]);
 VAR_10 = FUNC_1(&VAR_8[VAR_1]);

 VAR_17 = VAR_9 & 3;
 VAR_13 = (VAR_10 >> 24) & 0x1f;
 VAR_14 = (VAR_10 >> 20) & 0xf;
 VAR_15 = (VAR_10 >> 12) & 1;
 VAR_16 = VAR_10 & 0xfff;

 VAR_11 = VAR_3 * (VAR_16 + 1) / (VAR_15 + 1);
 VAR_12 = VAR_11 / (VAR_14 + 1);

 if (VAR_4)
  *VAR_4 = VAR_11 / 2;
 if (VAR_6)
  *VAR_6 = VAR_12 / 4;
 if (VAR_7)
  *VAR_7 = VAR_11 / (1 << ((VAR_17 + 1) * 2));

 if (VAR_5) {
  int VAR_18 = VAR_2[VAR_13];

  if (VAR_18 < 0)
   *VAR_5 = VAR_11 / 2;
  else if (VAR_18 == 0)
   return 0;
  else
   *VAR_5 = VAR_12 * VAR_18 / 2;
 }

 return 1;
}
