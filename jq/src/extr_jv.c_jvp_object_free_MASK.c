
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct object_slot {int value; int string; } ;
struct TYPE_8__ {int ptr; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
typedef TYPE_2__ jv ;


 int FUNC_0 (TYPE_2__,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct object_slot* FUNC_5 (TYPE_2__,int) ;
 int FUNC_6 (TYPE_2__) ;
 int FUNC_7 (TYPE_2__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(jv VAR_2) {
  FUNC_1(FUNC_0(VAR_2, VAR_1));
  if (FUNC_8(VAR_2.u.ptr)) {
    for (int VAR_3=0; VAR_3<FUNC_7(VAR_2); VAR_3++) {
      struct object_slot* VAR_4 = FUNC_5(VAR_2, VAR_3);
      if (FUNC_3(VAR_4->string) != VAR_0) {
        FUNC_9(VAR_4->string);
        FUNC_2(VAR_4->value);
      }
    }
    FUNC_4(FUNC_6(VAR_2));
  }
}
