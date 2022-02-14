
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u64 ;
typedef int u32 ;
struct perf_event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int* VAR_10 ;
 int* VAR_11 ;

__attribute__((used)) static int FUNC_3(u64 VAR_12[], int VAR_13, unsigned int VAR_14[],
    unsigned long VAR_15[],
    struct perf_event *VAR_16[])
{
 u8 VAR_17[VAR_2][VAR_3];
 int VAR_18[VAR_2];
 int VAR_19, VAR_20, VAR_21, VAR_22;
 u32 VAR_23 = 0, VAR_24;
 u32 VAR_25 = 0, VAR_26 = 0, VAR_27 = 0;
 u32 VAR_28, VAR_29, VAR_30;

 if (VAR_13 > VAR_3)
  return -1;


 for (VAR_19 = 0; VAR_19 < VAR_2; ++VAR_19)
  VAR_18[VAR_19] = 0;
 for (VAR_19 = 0; VAR_19 < VAR_13; ++VAR_19) {
  VAR_21 = FUNC_1(VAR_12[VAR_19]);
  if (VAR_21 < 0)
   return -1;
  VAR_20 = VAR_18[VAR_21]++;
  VAR_17[VAR_21][VAR_20] = VAR_19;
 }


 for (VAR_21 = VAR_2 - 1; VAR_21 >= 0; --VAR_21) {
  for (VAR_19 = 0; VAR_19 < VAR_18[VAR_21]; ++VAR_19) {
   VAR_28 = VAR_12[VAR_17[VAR_21][VAR_19]];
   if (VAR_21 == 4) {
    VAR_29 = (VAR_28 >> VAR_5) & VAR_4;
    if (VAR_23 & (1 << (VAR_29 - 1)))
     return -1;
   } else {

    VAR_24 = VAR_9[VAR_21] & ~VAR_23;
    if (!VAR_24)
     return -1;
    VAR_29 = FUNC_0(VAR_24);
   }
   VAR_23 |= 1 << (VAR_29 - 1);

   VAR_22 = FUNC_2(VAR_28);
   if (VAR_22) {
    VAR_30 = (VAR_28 >> VAR_7) & VAR_6;
    VAR_25 |= VAR_30 << 16;
    if (VAR_22 == 2 && (VAR_28 & VAR_8))
     VAR_27 = 0x80000000;
   }
   VAR_28 &= VAR_10[VAR_29 - 1];
   VAR_28 <<= VAR_11[VAR_29 - 1];
   if (VAR_29 <= 2)
    VAR_25 |= VAR_28;
   else
    VAR_26 |= VAR_28;
   VAR_14[VAR_17[VAR_21][VAR_19]] = VAR_29 - 1;
  }
 }

 if (VAR_23 & 1)
  VAR_25 |= VAR_0;
 if (VAR_23 & 0x3e)
  VAR_25 |= VAR_1;


 VAR_15[0] = VAR_25;
 VAR_15[1] = VAR_26;
 VAR_15[2] = VAR_27;
 return 0;
}
