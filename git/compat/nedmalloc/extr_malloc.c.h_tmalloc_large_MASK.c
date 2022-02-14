
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef TYPE_1__* tchunkptr ;
typedef TYPE_2__* mstate ;
typedef int mchunkptr ;
typedef scalar_t__ binmap_t ;
typedef int bindex_t ;
struct TYPE_23__ {scalar_t__ treemap; size_t dvsize; } ;
struct TYPE_22__ {struct TYPE_22__** child; } ;


 int FUNC_0 (TYPE_2__*) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,size_t) ;
 size_t FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (size_t,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,int ,size_t) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 TYPE_1__* FUNC_12 (TYPE_1__*) ;
 size_t FUNC_13 (int ) ;
 int FUNC_14 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int ) ;
 int FUNC_16 (TYPE_2__*,TYPE_1__*,size_t) ;
 int FUNC_17 (int ,size_t) ;
 int FUNC_18 (TYPE_2__*,TYPE_1__*,size_t) ;
 TYPE_1__** FUNC_19 (TYPE_2__*,int ) ;
 int FUNC_20 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void* FUNC_21(mstate VAR_3, size_t VAR_4) {
  tchunkptr VAR_5 = 0;
  size_t VAR_6 = -VAR_4;
  tchunkptr VAR_7;
  bindex_t VAR_8;
  FUNC_7(VAR_4, VAR_8);
  if ((VAR_7 = *FUNC_19(VAR_3, VAR_8)) != 0) {

    size_t VAR_9 = VAR_4 << FUNC_13(VAR_8);
    tchunkptr VAR_10 = 0;
    for (;;) {
      tchunkptr VAR_11;
      size_t VAR_12 = FUNC_5(VAR_7) - VAR_4;
      if (VAR_12 < VAR_6) {
 VAR_5 = VAR_7;
 if ((VAR_6 = VAR_12) == 0)
   break;
      }
      VAR_11 = VAR_7->child[1];
      VAR_7 = VAR_7->child[(VAR_9 >> (VAR_1-VAR_2)) & 1];
      if (VAR_11 != 0 && VAR_11 != VAR_7)
 VAR_10 = VAR_11;
      if (VAR_7 == 0) {
 VAR_7 = VAR_10;
 break;
      }
      VAR_9 <<= 1;
    }
  }
  if (VAR_7 == 0 && VAR_5 == 0) {
    binmap_t VAR_13 = FUNC_11(FUNC_8(VAR_8)) & VAR_3->treemap;
    if (VAR_13 != 0) {
      bindex_t VAR_14;
      binmap_t VAR_15 = FUNC_10(VAR_13);
      FUNC_6(VAR_15, VAR_14);
      VAR_7 = *FUNC_19(VAR_3, VAR_14);
    }
  }

  while (VAR_7 != 0) {
    size_t VAR_16 = FUNC_5(VAR_7) - VAR_4;
    if (VAR_16 < VAR_6) {
      VAR_6 = VAR_16;
      VAR_5 = VAR_7;
    }
    VAR_7 = FUNC_12(VAR_7);
  }


  if (VAR_5 != 0 && VAR_6 < (size_t)(VAR_3->dvsize - VAR_4)) {
    if (FUNC_1(FUNC_14(VAR_3, VAR_5))) {
      mchunkptr VAR_17 = FUNC_4(VAR_5, VAR_4);
      FUNC_2(FUNC_5(VAR_5) == VAR_6 + VAR_4);
      if (FUNC_1(FUNC_15(VAR_5, VAR_17))) {
 FUNC_20(VAR_3, VAR_5);
 if (VAR_6 < VAR_0)
   FUNC_16(VAR_3, VAR_5, (VAR_6 + VAR_4));
 else {
   FUNC_18(VAR_3, VAR_5, VAR_4);
   FUNC_17(VAR_17, VAR_6);
   FUNC_9(VAR_3, VAR_17, VAR_6);
 }
 return FUNC_3(VAR_5);
      }
    }
    FUNC_0(VAR_3);
  }
  return 0;
}
