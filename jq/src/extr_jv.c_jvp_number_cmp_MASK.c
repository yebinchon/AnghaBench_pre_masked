
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int jv ;
struct TYPE_2__ {int number; } ;
typedef TYPE_1__ decNumberSingle ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 double FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int FUNC_9(jv VAR_2, jv VAR_3) {
  FUNC_3(FUNC_2(VAR_2, VAR_1));
  FUNC_3(FUNC_2(VAR_3, VAR_1));

  if(FUNC_1(VAR_2, VAR_0) && FUNC_1(VAR_3, VAR_0)) {
    decNumberSingle VAR_4;
    FUNC_4(&VAR_4.number,
                     FUNC_8(VAR_2),
                     FUNC_8(VAR_3),
                     FUNC_0()
                     );
    if (FUNC_6(&VAR_4.number)) {
      return 0;
    } else if (FUNC_5(&VAR_4.number)) {
      return -1;
    } else {
      return 1;
    }
  } else {
    double VAR_5 = FUNC_7(VAR_2), VAR_6 = FUNC_7(VAR_3);
    if (VAR_5 < VAR_6) {
      return -1;
    } else if (VAR_5 == VAR_6) {
      return 0;
    } else {
      return 1;
    }
  }
}
