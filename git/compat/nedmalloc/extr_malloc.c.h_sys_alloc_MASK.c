
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_14__ ;


typedef TYPE_1__* mstate ;
typedef TYPE_2__* msegmentptr ;
typedef TYPE_3__* mchunkptr ;
typedef int flag_t ;
struct TYPE_34__ {size_t head; } ;
struct TYPE_33__ {char* base; int size; int sflags; struct TYPE_33__* next; } ;
struct TYPE_32__ {scalar_t__ top; size_t topsize; scalar_t__ footprint; scalar_t__ max_footprint; char* least_addr; TYPE_2__ seg; int release_checks; int magic; } ;
struct TYPE_31__ {size_t mmap_threshold; int magic; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 char* VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 int FUNC_3 () ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_4 (TYPE_1__*,char*,size_t,int) ;
 int FUNC_5 (TYPE_1__*,void*,size_t) ;
 int FUNC_6 (TYPE_1__*,TYPE_3__*) ;
 void* FUNC_7 (TYPE_3__*) ;
 TYPE_3__* FUNC_8 (TYPE_3__*,size_t) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 () ;
 size_t FUNC_11 (size_t) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,TYPE_3__*,size_t) ;
 int FUNC_14 (TYPE_2__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (TYPE_1__*) ;
 void* FUNC_19 (TYPE_1__*,size_t) ;
 TYPE_14__ VAR_12 ;
 TYPE_3__* FUNC_20 (int ) ;
 size_t FUNC_21 (size_t) ;
 void* FUNC_22 (TYPE_1__*,char*,char*,size_t) ;
 TYPE_2__* FUNC_23 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_24 (TYPE_2__*,scalar_t__) ;
 int FUNC_25 (TYPE_1__*,TYPE_3__*,size_t) ;
 scalar_t__ FUNC_26 (TYPE_1__*) ;
 int FUNC_27 (TYPE_1__*) ;

__attribute__((used)) static void* FUNC_28(mstate VAR_13, size_t VAR_14) {
  char* VAR_15 = VAR_0;
  size_t VAR_16 = 0;
  flag_t VAR_17 = 0;

  FUNC_10();


  if (FUNC_26(VAR_13) && VAR_14 >= VAR_12.mmap_threshold) {
    void* VAR_18 = FUNC_19(VAR_13, VAR_14);
    if (VAR_18 != 0)
      return VAR_18;
  }
  if (VAR_7 && !FUNC_27(VAR_13)) {
    char* VAR_19 = VAR_0;
    msegmentptr VAR_20 = (VAR_13->top == 0)? 0 : FUNC_23(VAR_13, (char*)VAR_13->top);
    size_t VAR_21 = 0;
    FUNC_0();

    if (VAR_20 == 0) {
      char* VAR_22 = (char*)FUNC_2(0);
      if (VAR_22 != VAR_0) {
 VAR_21 = FUNC_11(VAR_14 + VAR_10);

 if (!FUNC_17(VAR_22))
   VAR_21 += (FUNC_21((size_t)VAR_22) - (size_t)VAR_22);

 if (VAR_21 < VAR_1 &&
     (VAR_19 = (char*)(FUNC_2(VAR_21))) == VAR_22) {
   VAR_15 = VAR_22;
   VAR_16 = VAR_21;
 }
      }
    }
    else {

      VAR_21 = FUNC_11(VAR_14 - VAR_13->topsize + VAR_10);

      if (VAR_21 < VAR_1 &&
   (VAR_19 = (char*)(FUNC_2(VAR_21))) == VAR_20->base+VAR_20->size) {
 VAR_15 = VAR_19;
 VAR_16 = VAR_21;
      }
    }

    if (VAR_15 == VAR_0) {
      if (VAR_19 != VAR_0) {
 if (VAR_21 < VAR_1 &&
     VAR_21 < VAR_14 + VAR_10) {
   size_t VAR_23 = FUNC_11(VAR_14 + VAR_10 - VAR_21);
   if (VAR_23 < VAR_1) {
     char* VAR_24 = (char*)FUNC_2(VAR_23);
     if (VAR_24 != VAR_0)
       VAR_21 += VAR_23;
     else {
       (void) FUNC_2(-VAR_21);
       VAR_19 = VAR_0;
     }
   }
 }
      }
      if (VAR_19 != VAR_0) {
 VAR_15 = VAR_19;
 VAR_16 = VAR_21;
      }
      else
 FUNC_9(VAR_13);
    }

    FUNC_3();
  }

  if (VAR_2 && VAR_15 == VAR_0) {
    size_t VAR_25 = FUNC_11(VAR_14 + VAR_10);
    if (VAR_25 > VAR_14) {
      char* VAR_26 = (char*)(FUNC_1(VAR_25));
      if (VAR_26 != VAR_0) {
 VAR_15 = VAR_26;
 VAR_16 = VAR_25;
 VAR_17 = VAR_4;
      }
    }
  }

  if (VAR_3 && VAR_15 == VAR_0) {
    size_t VAR_27 = FUNC_11(VAR_14 + VAR_10);
    if (VAR_27 < VAR_1) {
      char* VAR_28 = VAR_0;
      char* VAR_29 = VAR_0;
      FUNC_0();
      VAR_28 = (char*)(FUNC_2(VAR_27));
      VAR_29 = (char*)(FUNC_2(0));
      FUNC_3();
      if (VAR_28 != VAR_0 && VAR_29 != VAR_0 && VAR_28 < VAR_29) {
 size_t VAR_30 = VAR_29 - VAR_28;
 if (VAR_30 > VAR_14 + VAR_11) {
   VAR_15 = VAR_28;
   VAR_16 = VAR_30;
 }
      }
    }
  }

  if (VAR_15 != VAR_0) {

    if ((VAR_13->footprint += VAR_16) > VAR_13->max_footprint)
      VAR_13->max_footprint = VAR_13->footprint;

    if (!FUNC_16(VAR_13)) {
      VAR_13->seg.base = VAR_13->least_addr = VAR_15;
      VAR_13->seg.size = VAR_16;
      VAR_13->seg.sflags = VAR_17;
      VAR_13->magic = VAR_12.magic;
      VAR_13->release_checks = VAR_6;
      FUNC_12(VAR_13);

      if (FUNC_15(VAR_13))
 FUNC_13(VAR_13, (mchunkptr)VAR_15, VAR_16 - VAR_11);
      else

      {

 mchunkptr VAR_31 = FUNC_20(FUNC_18(VAR_13));
 FUNC_13(VAR_13, VAR_31, (size_t)((VAR_15 + VAR_16) - (char*)VAR_31) -VAR_11);
      }
    }

    else {

      msegmentptr VAR_32 = &VAR_13->seg;

      while (VAR_32 != 0 && VAR_15 != VAR_32->base + VAR_32->size)
 VAR_32 = (VAR_8) ? 0 : VAR_32->next;
      if (VAR_32 != 0 &&
   !FUNC_14(VAR_32) &&
   (VAR_32->sflags & VAR_4) == VAR_17 &&
   FUNC_24(VAR_32, VAR_13->top)) {
 VAR_32->size += VAR_16;
 FUNC_13(VAR_13, VAR_13->top, VAR_13->topsize + VAR_16);
      }
      else {
 if (VAR_15 < VAR_13->least_addr)
   VAR_13->least_addr = VAR_15;
 VAR_32 = &VAR_13->seg;
 while (VAR_32 != 0 && VAR_32->base != VAR_15 + VAR_16)
   VAR_32 = (VAR_8) ? 0 : VAR_32->next;
 if (VAR_32 != 0 &&
     !FUNC_14(VAR_32) &&
     (VAR_32->sflags & VAR_4) == VAR_17) {
   char* VAR_33 = VAR_32->base;
   VAR_32->base = VAR_15;
   VAR_32->size += VAR_16;
   return FUNC_22(VAR_13, VAR_15, VAR_33, VAR_14);
 }
 else
   FUNC_4(VAR_13, VAR_15, VAR_16, VAR_17);
      }
    }

    if (VAR_14 < VAR_13->topsize) {
      size_t VAR_34 = VAR_13->topsize -= VAR_14;
      mchunkptr VAR_35 = VAR_13->top;
      mchunkptr VAR_36 = VAR_13->top = FUNC_8(VAR_35, VAR_14);
      VAR_36->head = VAR_34 | VAR_9;
      FUNC_25(VAR_13, VAR_35, VAR_14);
      FUNC_6(VAR_13, VAR_13->top);
      FUNC_5(VAR_13, FUNC_7(VAR_35), VAR_14);
      return FUNC_7(VAR_35);
    }
  }

  VAR_5;
  return 0;
}
