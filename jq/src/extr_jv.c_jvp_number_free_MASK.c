
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* literal_data; } ;
typedef TYPE_2__ jvp_literal_number ;
struct TYPE_10__ {int ptr; } ;
struct TYPE_12__ {TYPE_1__ u; } ;
typedef TYPE_3__ jv ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__,int ) ;
 int FUNC_1 (TYPE_3__,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_3__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(jv VAR_2) {
  FUNC_2(FUNC_1(VAR_2, VAR_1));
  if (FUNC_0(VAR_2, VAR_0) && FUNC_5(VAR_2.u.ptr)) {
    jvp_literal_number* VAR_3 = FUNC_4(VAR_2);
    if (VAR_3->literal_data) {
      FUNC_3(VAR_3->literal_data);
    }
    FUNC_3(VAR_3);
  }
}
