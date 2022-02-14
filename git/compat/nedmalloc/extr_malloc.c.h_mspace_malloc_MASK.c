
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef TYPE_1__* mstate ;
typedef int mspace ;
typedef TYPE_2__* mchunkptr ;
typedef int binmap_t ;
typedef int bindex_t ;
struct TYPE_30__ {size_t head; struct TYPE_30__* fd; } ;
struct TYPE_29__ {int smallmap; size_t dvsize; scalar_t__ treemap; size_t topsize; TYPE_2__* top; TYPE_2__* dv; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,void*,size_t) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 void* FUNC_6 (TYPE_2__*) ;
 void* FUNC_7 (TYPE_2__*,size_t) ;
 size_t FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_1__*) ;
 size_t FUNC_14 (size_t) ;
 int FUNC_15 (TYPE_1__*,TYPE_2__*,size_t) ;
 int FUNC_16 (TYPE_1__*,TYPE_2__*,size_t) ;
 int FUNC_17 (TYPE_2__*,size_t) ;
 int FUNC_18 (TYPE_1__*,TYPE_2__*,size_t) ;
 int FUNC_19 (size_t) ;
 size_t FUNC_20 (int) ;
 TYPE_2__* FUNC_21 (TYPE_1__*,int) ;
 void* FUNC_22 (TYPE_1__*,size_t) ;
 void* FUNC_23 (TYPE_1__*,size_t) ;
 void* FUNC_24 (TYPE_1__*,size_t) ;
 int FUNC_25 (TYPE_1__*,TYPE_2__*,TYPE_2__*,int) ;

void* FUNC_26(mspace VAR_7, size_t VAR_8) {
  mstate VAR_9 = (mstate)VAR_7;
  if (!FUNC_13(VAR_9)) {
    FUNC_2(VAR_9,VAR_9);
    return 0;
  }
  if (!FUNC_1(VAR_9)) {
    void* VAR_10;
    size_t VAR_11;
    if (VAR_8 <= VAR_2) {
      bindex_t VAR_12;
      binmap_t VAR_13;
      VAR_11 = (VAR_8 < VAR_4)? VAR_3 : FUNC_14(VAR_8);
      VAR_12 = FUNC_19(VAR_11);
      VAR_13 = VAR_9->smallmap >> VAR_12;

      if ((VAR_13 & 0x3U) != 0) {
 mchunkptr VAR_14, VAR_15;
 VAR_12 += ~VAR_13 & 1;
 VAR_14 = FUNC_21(VAR_9, VAR_12);
 VAR_15 = VAR_14->fd;
 FUNC_3(FUNC_8(VAR_15) == FUNC_20(VAR_12));
 FUNC_25(VAR_9, VAR_14, VAR_15, VAR_12);
 FUNC_16(VAR_9, VAR_15, FUNC_20(VAR_12));
 VAR_10 = FUNC_6(VAR_15);
 FUNC_4(VAR_9, VAR_10, VAR_11);
 goto postaction;
      }

      else if (VAR_11 > VAR_9->dvsize) {
 if (VAR_13 != 0) {
   mchunkptr VAR_16, VAR_17, VAR_18;
   size_t VAR_19;
   bindex_t VAR_20;
   binmap_t VAR_21 = (VAR_13 << VAR_12) & FUNC_12(FUNC_10(VAR_12));
   binmap_t VAR_22 = FUNC_11(VAR_21);
   FUNC_9(VAR_22, VAR_20);
   VAR_16 = FUNC_21(VAR_9, VAR_20);
   VAR_17 = VAR_16->fd;
   FUNC_3(FUNC_8(VAR_17) == FUNC_20(VAR_20));
   FUNC_25(VAR_9, VAR_16, VAR_17, VAR_20);
   VAR_19 = FUNC_20(VAR_20) - VAR_11;

   if (VAR_6 != 4 && VAR_19 < VAR_3)
     FUNC_16(VAR_9, VAR_17, FUNC_20(VAR_20));
   else {
     FUNC_18(VAR_9, VAR_17, VAR_11);
     VAR_18 = FUNC_7(VAR_17, VAR_11);
     FUNC_17(VAR_18, VAR_19);
     FUNC_15(VAR_9, VAR_18, VAR_19);
   }
   VAR_10 = FUNC_6(VAR_17);
   FUNC_4(VAR_9, VAR_10, VAR_11);
   goto postaction;
 }

 else if (VAR_9->treemap != 0 && (VAR_10 = FUNC_24(VAR_9, VAR_11)) != 0) {
   FUNC_4(VAR_9, VAR_10, VAR_11);
   goto postaction;
 }
      }
    }
    else if (VAR_8 >= VAR_0)
      VAR_11 = VAR_1;
    else {
      VAR_11 = FUNC_14(VAR_8);
      if (VAR_9->treemap != 0 && (VAR_10 = FUNC_23(VAR_9, VAR_11)) != 0) {
 FUNC_4(VAR_9, VAR_10, VAR_11);
 goto postaction;
      }
    }

    if (VAR_11 <= VAR_9->dvsize) {
      size_t VAR_23 = VAR_9->dvsize - VAR_11;
      mchunkptr VAR_24 = VAR_9->dv;
      if (VAR_23 >= VAR_3) {
 mchunkptr VAR_25 = VAR_9->dv = FUNC_7(VAR_24, VAR_11);
 VAR_9->dvsize = VAR_23;
 FUNC_17(VAR_25, VAR_23);
 FUNC_18(VAR_9, VAR_24, VAR_11);
      }
      else {
 size_t VAR_26 = VAR_9->dvsize;
 VAR_9->dvsize = 0;
 VAR_9->dv = 0;
 FUNC_16(VAR_9, VAR_24, VAR_26);
      }
      VAR_10 = FUNC_6(VAR_24);
      FUNC_4(VAR_9, VAR_10, VAR_11);
      goto postaction;
    }

    else if (VAR_11 < VAR_9->topsize) {
      size_t VAR_27 = VAR_9->topsize -= VAR_11;
      mchunkptr VAR_28 = VAR_9->top;
      mchunkptr VAR_29 = VAR_9->top = FUNC_7(VAR_28, VAR_11);
      VAR_29->head = VAR_27 | VAR_5;
      FUNC_18(VAR_9, VAR_28, VAR_11);
      VAR_10 = FUNC_6(VAR_28);
      FUNC_5(VAR_9, VAR_9->top);
      FUNC_4(VAR_9, VAR_10, VAR_11);
      goto postaction;
    }

    VAR_10 = FUNC_22(VAR_9, VAR_11);

  postaction:
    FUNC_0(VAR_9);
    return VAR_10;
  }

  return 0;
}
