
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int sysbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int FUNC_4 () ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 TYPE_1__* FUNC_7 (int) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static unsigned int FUNC_9(int VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 u32 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 u64 VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;

 VAR_22 = FUNC_7(VAR_10)->sysbase;
 VAR_25 = FUNC_6(VAR_10);
 VAR_15 = FUNC_4();


 if (VAR_15)
  VAR_24 = (FUNC_8(VAR_22,
    VAR_4) >> 18) & 0x3;
 else
  VAR_24 = (FUNC_8(VAR_22,
     VAR_9) >> 18) & 0x3;
 switch (VAR_24) {
 case 0:
  VAR_26 = 200000000ULL;
  VAR_20 = 3;
  break;
 case 1:
  VAR_26 = 100000000ULL;
  VAR_20 = 1;
  break;
 case 2:
  VAR_26 = 125000000ULL;
  VAR_20 = 1;
  break;
 case 3:
  VAR_26 = 400000000ULL;
  VAR_20 = 3;
  break;
 }


 if (VAR_15) {
  VAR_19 = FUNC_8(VAR_25,
    VAR_1) & 0x3;
  switch (VAR_19) {
  case 0:
   VAR_11 = FUNC_8(VAR_25,
     VAR_2);
   VAR_12 = FUNC_8(VAR_25,
     VAR_3);
   break;
  case 1:
   VAR_11 = FUNC_8(VAR_25,
     FUNC_0(0));
   VAR_12 = FUNC_8(VAR_25,
     FUNC_1(0));
   break;
  case 2:
   VAR_11 = FUNC_8(VAR_25,
     FUNC_0(1));
   VAR_12 = FUNC_8(VAR_25,
     FUNC_1(1));
   break;
  case 3:
   VAR_11 = FUNC_8(VAR_25,
     FUNC_0(2));
   VAR_12 = FUNC_8(VAR_25,
     FUNC_1(2));
   break;
  }
 } else {
  VAR_19 = (FUNC_8(VAR_22,
     VAR_6) >> 22) & 0x3;
  switch (VAR_19) {
  case 0:
   VAR_11 = FUNC_8(VAR_22,
     VAR_7);
   VAR_12 = FUNC_8(VAR_22,
     VAR_8);
   break;
  case 1:
   VAR_11 = FUNC_8(VAR_22,
     FUNC_2(0));
   VAR_12 = FUNC_8(VAR_22,
     FUNC_3(0));
   break;
  case 2:
   VAR_11 = FUNC_8(VAR_22,
     FUNC_2(1));
   VAR_12 = FUNC_8(VAR_22,
     FUNC_3(1));
   break;
  case 3:
   VAR_11 = FUNC_8(VAR_22,
     FUNC_2(2));
   VAR_12 = FUNC_8(VAR_22,
     FUNC_3(2));
   break;
  }
 }

 VAR_13 = (VAR_11 >> 5) & 0x7;
 VAR_14 = (VAR_11 >> 24) & 0x7;
 VAR_16 = VAR_12 & 0xff;
 VAR_17 = (VAR_12 >> 8) & 0x1fff;


 switch (VAR_14) {
 case 1:
  VAR_14 = 2;
  break;
 case 3:
  VAR_14 = 4;
  break;
 case 7:
  VAR_14 = 8;
  break;
 case 6:
  VAR_14 = 16;
  break;
 case 0:
 default:
  VAR_14 = 1;
  break;
 }

 VAR_17 = VAR_17/(1 << 13);
 VAR_23 = ((VAR_26 >> 1) * (6 + VAR_16)) + VAR_17;
 VAR_18 = (1 << VAR_13) * VAR_14 * VAR_20;

 if (VAR_18 > 0)
  FUNC_5(VAR_23, VAR_18);


 if (VAR_15)
  VAR_21 = FUNC_8(VAR_25,
    VAR_0) & 0x3;
 else
  VAR_21 = (FUNC_8(VAR_22,
     VAR_5) >> 22) & 0x3;
 FUNC_5(VAR_23, 1 << VAR_21);

 return VAR_23;
}
