
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
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 unsigned int VAR_19 ;
 size_t VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 unsigned long* VAR_28 ;
 int FUNC_1 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(u64 VAR_29[], int VAR_30,
          unsigned int VAR_31[], unsigned long VAR_32[], struct perf_event *VAR_33[])
{
 unsigned long VAR_34 = 0;
 unsigned long VAR_35 = VAR_8 | VAR_9;
 unsigned int VAR_36, VAR_37, VAR_38, VAR_39;
 unsigned int VAR_40, VAR_41;
 int VAR_42, VAR_43, VAR_44, VAR_45;
 unsigned int VAR_46 = 0;
 unsigned int VAR_47[2];
 unsigned char VAR_48[4];
 unsigned char VAR_49[16];
 int VAR_50;

 if (VAR_30 > 6)
  return -1;


 VAR_47[0] = VAR_47[1] = 0;
 FUNC_1(VAR_48, 0, sizeof(VAR_48));
 FUNC_1(VAR_49, 0, sizeof(VAR_49));
 for (VAR_42 = 0; VAR_42 < VAR_30; ++VAR_42) {
  VAR_36 = (VAR_29[VAR_42] >> VAR_25) & VAR_24;
  if (VAR_36) {
   if (VAR_36 > 6)
    return -1;
   if (VAR_46 & (1 << (VAR_36 - 1)))
    return -1;
   VAR_46 |= 1 << (VAR_36 - 1);

   if (VAR_36 <= 4)
    ++VAR_47[(VAR_36 - 1) >> 1];
  }
  if (VAR_29[VAR_42] & VAR_10) {
   VAR_37 = (VAR_29[VAR_42] >> VAR_27) & VAR_26;
   VAR_38 = (VAR_29[VAR_42] >> VAR_12) & VAR_11;
   if (VAR_37 > VAR_21)
    return -1;
   if (VAR_37 == VAR_19)
    VAR_37 = VAR_18;
   if (VAR_38 >= 4) {
    if (VAR_37 != VAR_22)
     return -1;
    ++VAR_37;
    VAR_38 &= 3;
   }
   if (!VAR_36)
    ++VAR_47[VAR_38 & 1];
   if (VAR_48[VAR_38] && VAR_48[VAR_38] != VAR_37)
    return -1;
   VAR_48[VAR_38] = VAR_37;
   VAR_49[VAR_37] = 1;
  }
 }
 if (VAR_47[0] > 2 || VAR_47[1] > 2)
  return -1;







 if (VAR_49[VAR_18] &
     (VAR_49[VAR_13] | VAR_49[VAR_17] | VAR_49[VAR_20])) {
  VAR_49[VAR_19] = 1;
  VAR_49[VAR_18] = 0;
 }

 VAR_50 = 0;
 for (VAR_42 = VAR_13; VAR_42 <= VAR_20; ++VAR_42) {
  if (!VAR_49[VAR_42])
   continue;
  if (VAR_50++)
   return -1;
  VAR_34 |= (unsigned long)VAR_42 << VAR_4;
 }
 VAR_50 = 0;
 for (; VAR_42 <= VAR_14; ++VAR_42) {
  if (!VAR_49[VAR_42])
   continue;
  if (VAR_50++)
   return -1;
  VAR_34 |= (unsigned long)(VAR_42 & 3) << VAR_5;
 }
 if (VAR_50 > 1)
  return -1;


 for (VAR_38 = 0; VAR_38 < 4; ++VAR_38) {
  VAR_37 = VAR_48[VAR_38];
  if (!VAR_37)
   continue;
  if (VAR_37 == VAR_18 && VAR_49[VAR_19]) {

   VAR_37 = VAR_19;
  } else if (VAR_37 == VAR_22 + 1) {

   VAR_34 |= 1ul << (VAR_6 + 3 - VAR_38);
  }
  VAR_40 = VAR_37 >> 2;
  VAR_34 |= (unsigned long)VAR_40
   << (VAR_3 - 2 * VAR_38);
 }


 for (VAR_42 = 0; VAR_42 < VAR_30; ++VAR_42) {
  VAR_36 = (VAR_29[VAR_42] >> VAR_25) & VAR_24;
  VAR_37 = (VAR_29[VAR_42] >> VAR_27) & VAR_26;
  VAR_38 = (VAR_29[VAR_42] >> VAR_12) & VAR_11;
  VAR_39 = VAR_29[VAR_42] & VAR_23;
  VAR_43 = VAR_29[VAR_42] & VAR_10;
  if (!VAR_36) {

   for (VAR_36 = 0; VAR_36 < 4; ++VAR_36) {
    if (VAR_46 & (1 << VAR_36))
     continue;
    VAR_41 = (VAR_36 >> 1) & 1;
    if (VAR_43) {
     if (VAR_41 == (VAR_38 & 1))
      break;
    } else if (VAR_47[VAR_41] < 2) {
     ++VAR_47[VAR_41];
     break;
    }
   }
   VAR_46 |= 1 << VAR_36;
  } else if (VAR_36 <= 4) {

   --VAR_36;
   if ((VAR_39 == 8 || VAR_39 == 0x10) && VAR_43 && (VAR_38 & 2))

    VAR_34 |= 1ul << (VAR_2 - VAR_36);
  } else {

   --VAR_36;
  }
  if (VAR_43 && VAR_37 == VAR_14) {
   VAR_44 = VAR_39 & 7;
   VAR_45 = (VAR_29[VAR_42] >> VAR_16) & VAR_15;
   VAR_34 |= (unsigned long)VAR_45 << VAR_28[VAR_44];
  }
  if (FUNC_2(VAR_29[VAR_42]))
   VAR_35 |= VAR_7;
  if (VAR_36 <= 3)
   VAR_34 |= VAR_39 << FUNC_0(VAR_36);
  VAR_31[VAR_42] = VAR_36;
 }


 VAR_32[0] = 0;
 if (VAR_46 & 1)
  VAR_32[0] = VAR_0;
 if (VAR_46 & 0x3e)
  VAR_32[0] |= VAR_1;
 VAR_32[1] = VAR_34;
 VAR_32[2] = VAR_35;
 return 0;
}
