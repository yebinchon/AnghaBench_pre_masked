
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unituse ;
typedef int u64 ;
struct perf_event {int dummy; } ;
typedef int pmcsel ;
typedef int busbyte ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 size_t VAR_24 ;
 int FUNC_0 (unsigned char*,int,int) ;
 unsigned long long* VAR_25 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(u64 VAR_26[], int VAR_27,
        unsigned int VAR_28[], unsigned long VAR_29[], struct perf_event *VAR_30[])
{
 unsigned long VAR_31 = 0, VAR_32 = 0, VAR_33 = 0;
 unsigned int VAR_34, VAR_35, VAR_36, VAR_37;
 unsigned int VAR_38, VAR_39;
 unsigned int VAR_40 = 0;
 unsigned int VAR_41[2];
 unsigned char VAR_42[4];
 unsigned char VAR_43[16];
 unsigned char VAR_44[] = { 0, 0<<3, 3<<3, 1<<3, 2<<3, 0|4, 3|4 };
 unsigned char VAR_45[2];
 unsigned char VAR_46[8];
 int VAR_47;
 int VAR_48;

 if (VAR_27 > 8)
  return -1;


 VAR_41[0] = VAR_41[1] = 0;
 FUNC_0(VAR_42, 0, sizeof(VAR_42));
 FUNC_0(VAR_43, 0, sizeof(VAR_43));
 for (VAR_47 = 0; VAR_47 < VAR_27; ++VAR_47) {
  VAR_34 = (VAR_26[VAR_47] >> VAR_18) & VAR_17;
  if (VAR_34) {
   if (VAR_40 & (1 << (VAR_34 - 1)))
    return -1;
   VAR_40 |= 1 << (VAR_34 - 1);

   ++VAR_41[((VAR_34 - 1) >> 1) & 1];
  }
  VAR_35 = (VAR_26[VAR_47] >> VAR_23) & VAR_22;
  VAR_36 = (VAR_26[VAR_47] >> VAR_9) & VAR_8;
  if (VAR_35) {
   if (VAR_35 > VAR_13)
    return -1;
   if (!VAR_34)
    ++VAR_41[VAR_36 & 1];
   if (VAR_42[VAR_36] && VAR_42[VAR_36] != VAR_35)
    return -1;
   VAR_42[VAR_36] = VAR_35;
   VAR_43[VAR_35] = 1;
  }
 }
 if (VAR_41[0] > 4 || VAR_41[1] > 4)
  return -1;







 if (VAR_43[VAR_12] &
     (VAR_43[VAR_10] | VAR_43[VAR_11] | VAR_43[VAR_24]))
  VAR_44[VAR_12] = 2 | 4;

 VAR_45[0] = VAR_45[1] = 0;
 for (VAR_47 = VAR_10; VAR_47 <= VAR_21; ++VAR_47) {
  if (!VAR_43[VAR_47])
   continue;
  VAR_38 = VAR_44[VAR_47];
  ++VAR_45[(VAR_38 >> 2) & 1];
  VAR_32 |= (unsigned long)(VAR_38 & ~4) << VAR_5;
 }

 if (VAR_45[0] > 1 || VAR_45[1] > 1)
  return -1;


 for (VAR_36 = 0; VAR_36 < 4; ++VAR_36) {
  VAR_35 = VAR_42[VAR_36];
  if (!VAR_35)
   continue;
  if (VAR_35 <= VAR_21)
   VAR_38 = (VAR_44[VAR_35] >> 2) & 1;
  else if (VAR_35 == VAR_14)
   VAR_38 = 2;
  else {
   VAR_38 = 3;
   if (VAR_35 == VAR_15 && VAR_36 >= 2)
    VAR_32 |= 1ull << (VAR_6 + 3 - VAR_36);
  }
  VAR_32 |= (unsigned long)VAR_38
   << (VAR_4 - 2 * VAR_36);
 }


 FUNC_0(VAR_46, 0x8, sizeof(VAR_46));
 for (VAR_47 = 0; VAR_47 < VAR_27; ++VAR_47) {
  VAR_34 = (VAR_26[VAR_47] >> VAR_18) & VAR_17;
  VAR_35 = (VAR_26[VAR_47] >> VAR_23) & VAR_22;
  VAR_36 = (VAR_26[VAR_47] >> VAR_9) & VAR_8;
  VAR_37 = VAR_26[VAR_47] & VAR_16;
  if (!VAR_34) {

   if (VAR_35)
    VAR_37 |= 0x10 | ((VAR_36 & 2) << 2);
   else
    VAR_37 |= 8;
   for (VAR_34 = 0; VAR_34 < 8; ++VAR_34) {
    if (VAR_40 & (1 << VAR_34))
     continue;
    VAR_39 = (VAR_34 >> 1) & 1;
    if (VAR_35) {
     if (VAR_39 == (VAR_36 & 1))
      break;
    } else if (VAR_41[VAR_39] < 4) {
     ++VAR_41[VAR_39];
     break;
    }
   }
   VAR_40 |= 1 << VAR_34;
  } else {

   --VAR_34;
   if (VAR_37 == 0 && (VAR_36 & 2))

    VAR_32 |= 1ull << VAR_25[VAR_34];
  }
  VAR_46[VAR_34] = VAR_37;
  VAR_28[VAR_47] = VAR_34;
  VAR_48 = (VAR_26[VAR_47] >> VAR_20) & VAR_19;
  VAR_32 |= VAR_48;
  if (FUNC_1(VAR_26[VAR_47]))
   VAR_33 |= VAR_7;
 }
 for (VAR_34 = 0; VAR_34 < 2; ++VAR_34)
  VAR_31 |= VAR_46[VAR_34] << (VAR_1 - 7 * VAR_34);
 for (; VAR_34 < 8; ++VAR_34)
  VAR_32 |= (unsigned long)VAR_46[VAR_34]
   << (VAR_3 - 5 * (VAR_34 - 2));
 if (VAR_40 & 1)
  VAR_31 |= VAR_0;
 if (VAR_40 & 0xfe)
  VAR_31 |= VAR_2;

 VAR_33 |= 0x2000;


 VAR_29[0] = VAR_31;
 VAR_29[1] = VAR_32;
 VAR_29[2] = VAR_33;
 return 0;
}
