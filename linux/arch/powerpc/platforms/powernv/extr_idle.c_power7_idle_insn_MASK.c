
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct p7_sprs {void* wort; void* dscr; void* spurr; void* purr; void* fscr; void* hfscr; void* lpcr; void* rpr; void* sdr1; void* worc; void* tscr; void* uamor; void* amor; void* iamr; void* amr; } ;
struct TYPE_4__ {unsigned long thread_idle_state; unsigned long subcore_sibling_mask; void* sprg_vdso; } ;
struct TYPE_3__ {unsigned long idle_state; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 unsigned long VAR_30 ;
 unsigned long VAR_31 ;
 unsigned long VAR_32 ;
 unsigned long VAR_33 ;
 unsigned long VAR_34 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ) ;
 unsigned long FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 unsigned long FUNC_12 (unsigned long) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int) ;
 TYPE_2__* VAR_35 ;
 int FUNC_15 () ;
 void* FUNC_16 (int ) ;
 int FUNC_17 (int ,void*) ;
 int FUNC_18 (int ,int ) ;
 scalar_t__ FUNC_19 () ;
 TYPE_1__** VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 int FUNC_20 () ;
 unsigned long VAR_39 ;
 scalar_t__ FUNC_21 (int) ;

__attribute__((used)) static unsigned long FUNC_22(unsigned long VAR_40)
{
 int VAR_41 = FUNC_20();
 int VAR_42 = FUNC_8(VAR_41);
 unsigned long *VAR_43 = &VAR_36[VAR_42]->idle_state;
 unsigned long VAR_44 = 1UL << FUNC_10(VAR_41);
 unsigned long VAR_45 = (1UL << VAR_39) - 1;
 unsigned long VAR_46;
 bool VAR_47;
 struct p7_sprs VAR_48 = {};
 bool VAR_49 = 0;
 int VAR_50;

 if (FUNC_21(VAR_40 != VAR_11)) {
  FUNC_5();

  FUNC_1(!(*VAR_43 & VAR_44));
  *VAR_43 &= ~VAR_44;

  if (VAR_37) {
   if ((*VAR_43 & VAR_45) == 0) {
    VAR_50 = FUNC_18(
      VAR_4,
      VAR_3);
    FUNC_1(VAR_50);
   }
  }

  if (VAR_40 == VAR_13) {
   VAR_48.tscr = FUNC_16(VAR_26);
   VAR_48.worc = FUNC_16(VAR_28);

   VAR_48.sdr1 = FUNC_16(VAR_23);
   VAR_48.rpr = FUNC_16(VAR_22);

   VAR_48.lpcr = FUNC_16(VAR_20);
   if (FUNC_9(VAR_0)) {
    VAR_48.hfscr = FUNC_16(VAR_18);
    VAR_48.fscr = FUNC_16(VAR_17);
   }
   VAR_48.purr = FUNC_16(VAR_21);
   VAR_48.spurr = FUNC_16(VAR_25);
   VAR_48.dscr = FUNC_16(VAR_16);
   VAR_48.wort = FUNC_16(VAR_29);

   VAR_49 = 1;
   *VAR_43 += 1 << VAR_10;
   if ((*VAR_43 & VAR_9)
     >> VAR_10
     == VAR_39)
    *VAR_43 |= VAR_7;
   FUNC_2((*VAR_43 & VAR_9) == 0);
  }

  FUNC_7();
 }

 if (FUNC_9(VAR_0)) {
  VAR_48.amr = FUNC_16(VAR_15);
  VAR_48.iamr = FUNC_16(VAR_19);
  VAR_48.amor = FUNC_16(VAR_14);
  VAR_48.uamor = FUNC_16(VAR_27);
 }

 VAR_35->thread_idle_state = VAR_40;
 VAR_46 = FUNC_12(VAR_40);
 VAR_35->thread_idle_state = VAR_12;

 FUNC_3(!VAR_46);
 FUNC_3(FUNC_15() & (VAR_2|VAR_1));

 if (FUNC_9(VAR_0)) {
  if ((VAR_46 & VAR_32) != VAR_34) {




   FUNC_17(VAR_15, VAR_48.amr);
   FUNC_17(VAR_19, VAR_48.iamr);
   FUNC_17(VAR_14, VAR_48.amor);
   FUNC_17(VAR_27, VAR_48.uamor);
  }
 }

 if (FUNC_21((VAR_46 & VAR_31) == VAR_30))
  FUNC_11(((void*)0));

 if (FUNC_14((VAR_46 & VAR_32) != VAR_33)) {
  if (FUNC_21(VAR_40 != VAR_11)) {
   FUNC_5();
   if (VAR_40 == VAR_13) {
    FUNC_2((*VAR_43 & VAR_9) == 0);
    *VAR_43 -= 1 << VAR_10;
    *VAR_43 &= ~(VAR_44 << VAR_8);
   }
   FUNC_6();
  }
  return VAR_46;
 }


 FUNC_1(VAR_40 == VAR_11);

 FUNC_5();

 VAR_47 = 0;
 if (VAR_40 == VAR_13) {
  FUNC_2((*VAR_43 & VAR_9) == 0);
  *VAR_43 -= 1 << VAR_10;
  if (*VAR_43 & (VAR_44 << VAR_8)) {
   *VAR_43 &= ~(VAR_44 << VAR_8);
   VAR_47 = 1;
   FUNC_1(!VAR_49);
  }
 }

 FUNC_2(*VAR_43 & VAR_44);

 if ((*VAR_43 & VAR_45) != 0)
  goto core_woken;


 if (VAR_47) {
  FUNC_17(VAR_26, VAR_48.tscr);
  FUNC_17(VAR_28, VAR_48.worc);
 }

 if (VAR_38) {
  VAR_50 = FUNC_18(VAR_4,
      VAR_5);
  FUNC_1(VAR_50);
 }


 if (FUNC_19() != VAR_6)
  FUNC_0();

core_woken:
 if (!VAR_47)
  goto subcore_woken;

 if ((*VAR_43 & VAR_35->subcore_sibling_mask) != 0)
  goto subcore_woken;


 FUNC_17(VAR_23, VAR_48.sdr1);
 FUNC_17(VAR_22, VAR_48.rpr);

subcore_woken:





 FUNC_13();
 FUNC_6();


 if (!VAR_47)
  return VAR_46;


 FUNC_17(VAR_20, VAR_48.lpcr);
 if (FUNC_9(VAR_0)) {
  FUNC_17(VAR_18, VAR_48.hfscr);
  FUNC_17(VAR_17, VAR_48.fscr);
 }
 FUNC_17(VAR_21, VAR_48.purr);
 FUNC_17(VAR_25, VAR_48.spurr);
 FUNC_17(VAR_16, VAR_48.dscr);
 FUNC_17(VAR_29, VAR_48.wort);

 FUNC_17(VAR_24, VAR_35->sprg_vdso);






 FUNC_4();

 return VAR_46;
}
