
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unituse ;
typedef int u64 ;
struct perf_event {int dummy; } ;
typedef int busbyte ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 unsigned int VAR_17 ;
 size_t VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 unsigned long* VAR_26 ;
 int FUNC_1 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(u64 VAR_27[], int VAR_28,
    unsigned int VAR_29[], unsigned long VAR_30[], struct perf_event *VAR_31[])
{
 unsigned long VAR_32 = 0;
 unsigned long VAR_33 = 0;
 unsigned int VAR_34, VAR_35, VAR_36, VAR_37;
 unsigned int VAR_38;
 int VAR_39, VAR_40, VAR_41, VAR_42;
 unsigned int VAR_43 = 0;
 unsigned char VAR_44[4];
 unsigned char VAR_45[16];
 int VAR_46;

 if (VAR_28 > 6)
  return -1;


 FUNC_1(VAR_44, 0, sizeof(VAR_44));
 FUNC_1(VAR_45, 0, sizeof(VAR_45));
 for (VAR_39 = 0; VAR_39 < VAR_28; ++VAR_39) {
  VAR_34 = (VAR_27[VAR_39] >> VAR_23) & VAR_22;
  if (VAR_34) {
   if (VAR_34 > 6)
    return -1;
   if (VAR_43 & (1 << (VAR_34 - 1)))
    return -1;
   VAR_43 |= 1 << (VAR_34 - 1);
  }
  if (VAR_27[VAR_39] & VAR_8) {
   VAR_35 = (VAR_27[VAR_39] >> VAR_25) & VAR_24;
   VAR_36 = (VAR_27[VAR_39] >> VAR_10) & VAR_9;
   if (VAR_35 > VAR_19)
    return -1;
   if (VAR_35 == VAR_17)
    VAR_35 = VAR_16;
   if (VAR_36 >= 4) {
    if (VAR_35 != VAR_20)
     return -1;
    ++VAR_35;
    VAR_36 &= 3;
   }
   if (VAR_44[VAR_36] && VAR_44[VAR_36] != VAR_35)
    return -1;
   VAR_44[VAR_36] = VAR_35;
   VAR_45[VAR_35] = 1;
  }
 }







 if (VAR_45[VAR_16] &
     (VAR_45[VAR_11] | VAR_45[VAR_15] | VAR_45[VAR_18])) {
  VAR_45[VAR_17] = 1;
  VAR_45[VAR_16] = 0;
 }

 VAR_46 = 0;
 for (VAR_39 = VAR_11; VAR_39 <= VAR_18; ++VAR_39) {
  if (!VAR_45[VAR_39])
   continue;
  if (VAR_46++)
   return -1;
  VAR_32 |= (unsigned long)VAR_39 << VAR_4;
 }
 VAR_46 = 0;
 for (; VAR_39 <= VAR_12; ++VAR_39) {
  if (!VAR_45[VAR_39])
   continue;
  if (VAR_46++)
   return -1;
  VAR_32 |= (unsigned long)(VAR_39 & 3) << VAR_5;
 }
 if (VAR_46 > 1)
  return -1;


 for (VAR_36 = 0; VAR_36 < 4; ++VAR_36) {
  VAR_35 = VAR_44[VAR_36];
  if (!VAR_35)
   continue;
  if (VAR_35 == VAR_16 && VAR_45[VAR_17]) {

   VAR_35 = VAR_17;
  } else if (VAR_35 == VAR_20 + 1) {

   VAR_32 |= 1ul << (VAR_6 + 3 - VAR_36);
  }
  VAR_38 = VAR_35 >> 2;
  VAR_32 |= (unsigned long)VAR_38
   << (VAR_3 - 2 * VAR_36);
 }


 for (VAR_39 = 0; VAR_39 < VAR_28; ++VAR_39) {
  VAR_34 = (VAR_27[VAR_39] >> VAR_23) & VAR_22;
  VAR_35 = (VAR_27[VAR_39] >> VAR_25) & VAR_24;
  VAR_36 = (VAR_27[VAR_39] >> VAR_10) & VAR_9;
  VAR_37 = VAR_27[VAR_39] & VAR_21;
  VAR_40 = VAR_27[VAR_39] & VAR_8;
  if (!VAR_34) {

   for (VAR_34 = 0; VAR_34 < 4; ++VAR_34) {
    if (!(VAR_43 & (1 << VAR_34)))
     break;
   }
   if (VAR_34 >= 4)
    return -1;
   VAR_43 |= 1 << VAR_34;
  } else if (VAR_34 <= 4) {

   --VAR_34;
   if (VAR_40 && (VAR_36 & 2) &&
       (VAR_37 == 8 || VAR_37 == 0x10 || VAR_37 == 0x28))

    VAR_32 |= 1ul << (VAR_2 - VAR_34);
  } else {

   --VAR_34;
  }
  if (VAR_40 && VAR_35 == VAR_12) {
   VAR_41 = VAR_37 & 7;
   VAR_42 = (VAR_27[VAR_39] >> VAR_14) & VAR_13;
   VAR_32 |= (unsigned long)VAR_42 << VAR_26[VAR_41];
  }
  if (FUNC_2(VAR_27[VAR_39]))
   VAR_33 |= VAR_7;
  if ((VAR_37 & 0x58) == 0x40 && (VAR_36 & 1) != ((VAR_34 >> 1) & 1))

   VAR_37 |= 0x10;
  if (VAR_34 <= 3)
   VAR_32 |= VAR_37 << FUNC_0(VAR_34);
  VAR_29[VAR_39] = VAR_34;
 }


 VAR_30[0] = 0;
 if (VAR_43 & 1)
  VAR_30[0] = VAR_0;
 if (VAR_43 & 0x3e)
  VAR_30[0] |= VAR_1;
 VAR_30[1] = VAR_32;
 VAR_30[2] = VAR_33;
 return 0;
}
