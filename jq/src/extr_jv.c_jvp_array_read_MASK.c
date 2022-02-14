
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int * elements; } ;
typedef TYPE_1__ jvp_array ;
typedef int jv ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;

__attribute__((used)) static jv* FUNC_5(jv VAR_1, int VAR_2) {
  FUNC_1(FUNC_0(VAR_1, VAR_0));
  if (VAR_2 >= 0 && VAR_2 < FUNC_2(VAR_1)) {
    jvp_array* VAR_3 = FUNC_4(VAR_1);
    FUNC_1(VAR_2 + FUNC_3(VAR_1) < VAR_3->length);
    return &VAR_3->elements[VAR_2 + FUNC_3(VAR_1)];
  } else {
    return 0;
  }
}
