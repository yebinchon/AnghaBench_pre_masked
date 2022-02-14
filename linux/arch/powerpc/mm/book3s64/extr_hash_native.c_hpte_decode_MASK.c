
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hash_pte {int r; int v; } ;
struct TYPE_2__ {int shift; unsigned long avpnm; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;


 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned long FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (unsigned long,unsigned long) ;
 int* VAR_11 ;
 unsigned long VAR_12 ;
 TYPE_1__* VAR_13 ;

__attribute__((used)) static void FUNC_5(struct hash_pte *VAR_14, unsigned long VAR_15,
   int *VAR_16, int *VAR_17, int *VAR_18, unsigned long *VAR_19)
{
 unsigned long VAR_20, VAR_21, VAR_22;
 unsigned long VAR_23 = FUNC_1(VAR_14->v);
 unsigned long VAR_24 = FUNC_1(VAR_14->r);
 unsigned long VAR_25, VAR_26;
 int VAR_27, VAR_28, VAR_29;

 unsigned int VAR_30 = (VAR_24 >> VAR_6) & ((1 << VAR_5) - 1);

 if (FUNC_2(VAR_0)) {
  VAR_23 = FUNC_4(VAR_23, VAR_24);
  VAR_24 = FUNC_3(VAR_24);
 }
 if (!(VAR_23 & VAR_2)) {
  VAR_27 = VAR_7;
  VAR_28 = VAR_7;
 } else {
  VAR_27 = VAR_11[VAR_30] & 0xf;
  VAR_28 = VAR_11[VAR_30] >> 4;
 }

 *VAR_18 = VAR_23 >> VAR_4;
 VAR_29 = VAR_13[VAR_27].shift;

 VAR_20 = (FUNC_0(VAR_23) & ~VAR_13[VAR_27].avpnm);
 VAR_21 = VAR_15 / VAR_1;
 if (VAR_23 & VAR_3)
  VAR_21 = ~VAR_21;

 switch (*VAR_18) {
 case 128:

  VAR_26 = (VAR_20 & 0x1f) << 23;
  VAR_25 = VAR_20 >> 5;

  if (VAR_29 < 23) {
   VAR_22 = (VAR_25 ^ VAR_21) & VAR_12;
   VAR_26 |= VAR_22 << VAR_29;
  }
  *VAR_19 = VAR_25 << (VAR_8 - VAR_10) | VAR_26 >> VAR_10;
  break;
 case 129:

  VAR_26 = (VAR_20 & 0x1ffff) << 23;
  VAR_25 = VAR_20 >> 17;
  if (VAR_29 < 23) {
   VAR_22 = (VAR_25 ^ (VAR_25 << 25) ^ VAR_21) & VAR_12;
   VAR_26 |= VAR_22 << VAR_29;
  }
  *VAR_19 = VAR_25 << (VAR_9 - VAR_10) | VAR_26 >> VAR_10;
  break;
 default:
  *VAR_19 = VAR_27 = 0;
 }
 *VAR_16 = VAR_27;
 *VAR_17 = VAR_28;
}
