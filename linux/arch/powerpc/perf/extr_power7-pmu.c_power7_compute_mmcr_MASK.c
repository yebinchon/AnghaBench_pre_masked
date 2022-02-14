
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct perf_event {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(u64 VAR_17[], int VAR_18,
          unsigned int VAR_19[], unsigned long VAR_20[], struct perf_event *VAR_21[])
{
 unsigned long VAR_22 = 0;
 unsigned long VAR_23 = VAR_6 | VAR_7;
 unsigned int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 unsigned int VAR_29 = 0;
 int VAR_30;


 for (VAR_30 = 0; VAR_30 < VAR_18; ++VAR_30) {
  VAR_24 = (VAR_17[VAR_30] >> VAR_14) & VAR_13;
  if (VAR_24) {
   if (VAR_24 > 6)
    return -1;
   if (VAR_29 & (1 << (VAR_24 - 1)))
    return -1;
   VAR_29 |= 1 << (VAR_24 - 1);
  }
 }


 for (VAR_30 = 0; VAR_30 < VAR_18; ++VAR_30) {
  VAR_24 = (VAR_17[VAR_30] >> VAR_14) & VAR_13;
  VAR_25 = (VAR_17[VAR_30] >> VAR_16) & VAR_15;
  VAR_26 = (VAR_17[VAR_30] >> VAR_9) & VAR_8;
  VAR_27 = (VAR_17[VAR_30] >> VAR_11) & VAR_10;
  VAR_28 = VAR_17[VAR_30] & VAR_12;
  if (!VAR_24) {

   for (VAR_24 = 0; VAR_24 < 4; ++VAR_24) {
    if (!(VAR_29 & (1 << VAR_24)))
     break;
   }
   if (VAR_24 >= 4)
    return -1;
   VAR_29 |= 1 << VAR_24;
  } else {

   --VAR_24;
  }
  if (VAR_24 <= 3) {
   VAR_22 |= (unsigned long) VAR_25
    << (VAR_4 - 4 * VAR_24);
   VAR_22 |= (unsigned long) VAR_26
    << (VAR_3 - VAR_24);
   VAR_22 |= VAR_28 << FUNC_0(VAR_24);
   if (VAR_25 == 6)
    VAR_22 |= (unsigned long) VAR_27
     << VAR_2;
  }
  if (FUNC_1(VAR_17[VAR_30]))
   VAR_23 |= VAR_5;
  VAR_19[VAR_30] = VAR_24;
 }


 VAR_20[0] = 0;
 if (VAR_29 & 1)
  VAR_20[0] = VAR_0;
 if (VAR_29 & 0x3e)
  VAR_20[0] |= VAR_1;
 VAR_20[1] = VAR_22;
 VAR_20[2] = VAR_23;
 return 0;
}
