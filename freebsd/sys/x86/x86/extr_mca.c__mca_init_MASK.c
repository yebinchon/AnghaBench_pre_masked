
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int (* status ) (int) ;int (* ctl ) (int) ;int misc; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 int VAR_15 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_1__ VAR_21 ;
 int FUNC_13 (int) ;
 int VAR_22 ;
 int FUNC_14 (int) ;
 int VAR_23 ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 () ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int ,int) ;

__attribute__((used)) static void
FUNC_23(int VAR_24)
{
 uint64_t VAR_25;
 uint64_t VAR_26, VAR_27;
 int VAR_28, VAR_29, VAR_30;

 VAR_30 = FUNC_0(VAR_17);


 if (!VAR_19 || !(VAR_16 & VAR_2))
  return;

 if (VAR_16 & VAR_1) {
  if (VAR_24)
   FUNC_4(VAR_15, 0);

  VAR_25 = FUNC_19(VAR_11);
  if (VAR_25 & VAR_7)

   FUNC_22(VAR_12, VAR_8);
  if (FUNC_2() && VAR_24)
   FUNC_13(VAR_25);
  if (VAR_18 == VAR_3 && VAR_30 == 0x10 &&
      !VAR_13) {
   VAR_27 = FUNC_19(VAR_10);
   if ((VAR_27 & (1UL << 5)) == 0)
    FUNC_22(VAR_10, VAR_27 | (1UL << 5));
  }
  if (VAR_14 & VAR_0) {
   VAR_21.ctl = FUNC_14;
   VAR_21.status = FUNC_15;
   VAR_21.addr = VAR_22;
   VAR_21.misc = VAR_23;
  }





  if (VAR_24)
   FUNC_16(&VAR_20);

  for (VAR_28 = 0; VAR_28 < (VAR_25 & VAR_6); VAR_28++) {

   VAR_26 = 0xffffffffffffffffUL;
   VAR_29 = 0;

   if (VAR_18 == VAR_4) {




    if (VAR_28 == 0 && VAR_30 == 0x6
        && FUNC_1(VAR_17) < 0x1a)
     VAR_29 = 1;
   } else if (VAR_18 == VAR_3) {

    if (VAR_28 == VAR_9 && VAR_30 >= 0xf &&
        VAR_30 < 0x17)
     VAR_26 &= ~(1UL << 10);
   }

   if (!VAR_29)
    FUNC_22(VAR_21.ctl(VAR_28), VAR_26);
   FUNC_22(VAR_21.status(VAR_28), 0);
  }
  if (VAR_24)
   FUNC_17(&VAR_20);






 }

 FUNC_12(FUNC_18() | VAR_5);
}
