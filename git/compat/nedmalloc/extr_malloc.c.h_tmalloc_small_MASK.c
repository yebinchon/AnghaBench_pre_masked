
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int tchunkptr ;
typedef TYPE_1__* mstate ;
typedef int mchunkptr ;
typedef int binmap_t ;
typedef int bindex_t ;
struct TYPE_10__ {int treemap; } ;


 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,size_t) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_1__*,int ,size_t) ;
 int FUNC_12 (TYPE_1__*,int ,size_t) ;
 int FUNC_13 (int ,size_t) ;
 int FUNC_14 (TYPE_1__*,int ,size_t) ;
 int * FUNC_15 (TYPE_1__*,int ) ;
 int FUNC_16 (TYPE_1__*,int ) ;

__attribute__((used)) static void* FUNC_17(mstate VAR_1, size_t VAR_2) {
  tchunkptr VAR_3, VAR_4;
  size_t VAR_5;
  bindex_t VAR_6;
  binmap_t VAR_7 = FUNC_7(VAR_1->treemap);
  FUNC_6(VAR_7, VAR_6);
  VAR_4 = VAR_3 = *FUNC_15(VAR_1, VAR_6);
  VAR_5 = FUNC_5(VAR_3) - VAR_2;

  while ((VAR_3 = FUNC_8(VAR_3)) != 0) {
    size_t VAR_8 = FUNC_5(VAR_3) - VAR_2;
    if (VAR_8 < VAR_5) {
      VAR_5 = VAR_8;
      VAR_4 = VAR_3;
    }
  }

  if (FUNC_1(FUNC_9(VAR_1, VAR_4))) {
    mchunkptr VAR_9 = FUNC_4(VAR_4, VAR_2);
    FUNC_2(FUNC_5(VAR_4) == VAR_5 + VAR_2);
    if (FUNC_1(FUNC_10(VAR_4, VAR_9))) {
      FUNC_16(VAR_1, VAR_4);
      if (VAR_5 < VAR_0)
 FUNC_12(VAR_1, VAR_4, (VAR_5 + VAR_2));
      else {
 FUNC_14(VAR_1, VAR_4, VAR_2);
 FUNC_13(VAR_9, VAR_5);
 FUNC_11(VAR_1, VAR_9, VAR_5);
      }
      return FUNC_3(VAR_4);
    }
  }

  FUNC_0(VAR_1);
  return 0;
}
