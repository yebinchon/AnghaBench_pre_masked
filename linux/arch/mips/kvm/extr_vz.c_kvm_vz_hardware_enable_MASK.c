
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_3__ {unsigned int tlbsize; } ;
struct TYPE_4__ {unsigned int tlbsize; unsigned int tlbsizevtlb; int guestid_mask; int guestid_cache; TYPE_1__ guest; } ;



 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int*,int ,unsigned int) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 TYPE_2__ VAR_21 ;
 int FUNC_3 () ;
 unsigned int VAR_22 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 unsigned int FUNC_6 (unsigned int) ;
 int FUNC_7 () ;
 unsigned long long FUNC_8 () ;
 unsigned long long FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (unsigned long long) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (unsigned long long) ;

__attribute__((used)) static int FUNC_15(void)
{
 unsigned int VAR_23, VAR_24, VAR_25;
 u64 VAR_26, VAR_27;

 switch (FUNC_3()) {
 case 128:

  VAR_26 = FUNC_9();
  VAR_26 &= ~VAR_2;
  VAR_26 |= 7ull << VAR_3;
  VAR_26 &= ~VAR_0;
  VAR_26 |= 6ull << VAR_1;
  FUNC_14(VAR_26);

  VAR_27 = FUNC_8();

  VAR_27 |= VAR_4;

  VAR_23 = ((VAR_27 & VAR_5)
       >> VAR_6) + 1;
  VAR_24 = VAR_23 / 2;
  VAR_23 -= VAR_24;
  VAR_27 &= ~VAR_7;
  VAR_27 |= VAR_23 - 1;
  FUNC_11(VAR_27);


  VAR_21.tlbsize = VAR_23;
  VAR_21.tlbsizevtlb = VAR_23;
  VAR_21.guest.tlbsize = VAR_24;


  FUNC_4();
  break;
 default:





  VAR_23 = VAR_21.tlbsizevtlb;
  VAR_25 = VAR_21.tlbsize - VAR_23;


  VAR_24 = FUNC_6(VAR_23);
  VAR_21.guest.tlbsize = VAR_24 + VAR_25;
  FUNC_4();






  VAR_24 = VAR_23 - FUNC_7() - 2;
  VAR_24 = FUNC_6(VAR_24);
  VAR_21.guest.tlbsize = VAR_24 + VAR_25;







  if (FUNC_2(&VAR_22, 0, VAR_24) &&
      FUNC_0(VAR_24 != VAR_22,
    "Available guest VTLB size mismatch"))
   return -VAR_8;
  break;
 }
 FUNC_12(VAR_17 |
      (VAR_13 << VAR_14) |
      VAR_16 | VAR_15);
 if (VAR_18)
  FUNC_10(VAR_12);

 if (VAR_20) {
  FUNC_13(0);
  FUNC_5();

  VAR_10 = VAR_21.guestid_mask;
  VAR_9 = VAR_10 + 1;
  VAR_11 = ~VAR_10;

  VAR_21.guestid_cache = VAR_9;
 }


 if (VAR_19)
  FUNC_1(0x3f << 10);

 return 0;
}
