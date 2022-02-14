
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_2__ ;
typedef struct TYPE_39__ TYPE_1__ ;


typedef int tchunkptr ;
typedef TYPE_1__* mstate ;
typedef int mspace ;
typedef TYPE_2__* mchunkptr ;
struct TYPE_40__ {size_t prev_foot; int head; } ;
struct TYPE_39__ {size_t footprint; size_t dvsize; size_t topsize; scalar_t__ release_checks; TYPE_2__* dv; TYPE_2__* top; } ;


 scalar_t__ FUNC_0 (char*,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (TYPE_2__*,size_t) ;
 TYPE_2__* FUNC_8 (TYPE_2__*,size_t) ;
 size_t FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_1__* FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*,int ,size_t) ;
 int FUNC_13 (TYPE_1__*,TYPE_2__*,size_t) ;
 scalar_t__ FUNC_14 (size_t) ;
 TYPE_2__* FUNC_15 (void*) ;
 int FUNC_16 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_1__*) ;
 scalar_t__ FUNC_19 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_2__*,size_t,TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_25 (TYPE_1__*,size_t) ;
 int FUNC_26 (TYPE_1__*,int ) ;
 int FUNC_27 (TYPE_1__*,TYPE_2__*,size_t) ;

void FUNC_28(mspace VAR_4, void* VAR_5) {
  if (VAR_5 != 0) {
    mchunkptr VAR_6 = FUNC_15(VAR_5);



    mstate VAR_7 = (mstate)VAR_4;

    if (!FUNC_18(VAR_7)) {
      FUNC_4(VAR_7, VAR_6);
      return;
    }
    if (!FUNC_2(VAR_7)) {
      FUNC_6(VAR_7, VAR_6);
      if (FUNC_3(FUNC_16(VAR_7, VAR_6) && FUNC_17(VAR_6))) {
 size_t VAR_8 = FUNC_9(VAR_6);
 mchunkptr VAR_9 = FUNC_8(VAR_6, VAR_8);
 if (!FUNC_21(VAR_6)) {
   size_t VAR_10 = VAR_6->prev_foot;
   if ((VAR_10 & VAR_1) != 0) {
     VAR_10 &= ~VAR_1;
     VAR_8 += VAR_10 + VAR_2;
     if (FUNC_0((char*)VAR_6 - VAR_10, VAR_8) == 0)
       VAR_7->footprint -= VAR_8;
     goto postaction;
   }
   else {
     mchunkptr VAR_11 = FUNC_7(VAR_6, VAR_10);
     VAR_8 += VAR_10;
     VAR_6 = VAR_11;
     if (FUNC_3(FUNC_16(VAR_7, VAR_11))) {
       if (VAR_6 != VAR_7->dv) {
  FUNC_27(VAR_7, VAR_6, VAR_10);
       }
       else if ((VAR_9->head & VAR_0) == VAR_0) {
  VAR_7->dvsize = VAR_8;
  FUNC_23(VAR_6, VAR_8, VAR_9);
  goto postaction;
       }
     }
     else
       goto erroraction;
   }
 }

 if (FUNC_3(FUNC_19(VAR_6, VAR_9) && FUNC_20(VAR_9))) {
   if (!FUNC_10(VAR_9)) {
     if (VAR_9 == VAR_7->top) {
       size_t VAR_12 = VAR_7->topsize += VAR_8;
       VAR_7->top = VAR_6;
       VAR_6->head = VAR_12 | VAR_3;
       if (VAR_6 == VAR_7->dv) {
  VAR_7->dv = 0;
  VAR_7->dvsize = 0;
       }
       if (FUNC_25(VAR_7, VAR_12))
  FUNC_26(VAR_7, 0);
       goto postaction;
     }
     else if (VAR_9 == VAR_7->dv) {
       size_t VAR_13 = VAR_7->dvsize += VAR_8;
       VAR_7->dv = VAR_6;
       FUNC_24(VAR_6, VAR_13);
       goto postaction;
     }
     else {
       size_t VAR_14 = FUNC_9(VAR_9);
       VAR_8 += VAR_14;
       FUNC_27(VAR_7, VAR_9, VAR_14);
       FUNC_24(VAR_6, VAR_8);
       if (VAR_6 == VAR_7->dv) {
  VAR_7->dvsize = VAR_8;
  goto postaction;
       }
     }
   }
   else
     FUNC_23(VAR_6, VAR_8, VAR_9);

   if (FUNC_14(VAR_8)) {
     FUNC_13(VAR_7, VAR_6, VAR_8);
     FUNC_5(VAR_7, VAR_6);
   }
   else {
     tchunkptr VAR_15 = (tchunkptr)VAR_6;
     FUNC_12(VAR_7, VAR_15, VAR_8);
     FUNC_5(VAR_7, VAR_6);
     if (--VAR_7->release_checks == 0)
       FUNC_22(VAR_7);
   }
   goto postaction;
 }
      }
    erroraction:
      FUNC_4(VAR_7, VAR_6);
    postaction:
      FUNC_1(VAR_7);
    }
  }
}
