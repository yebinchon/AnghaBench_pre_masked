
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int length; int * elements; } ;
typedef TYPE_2__ jvp_array ;
struct TYPE_9__ {int ptr; } ;
struct TYPE_11__ {TYPE_1__ u; } ;
typedef TYPE_3__ jv ;


 int FUNC_0 (TYPE_3__,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_3__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(jv VAR_1) {
  FUNC_1(FUNC_0(VAR_1, VAR_0));
  if (FUNC_5(VAR_1.u.ptr)) {
    jvp_array* VAR_2 = FUNC_4(VAR_1);
    for (int VAR_3=0; VAR_3<VAR_2->length; VAR_3++) {
      FUNC_2(VAR_2->elements[VAR_3]);
    }
    FUNC_3(VAR_2);
  }
}
