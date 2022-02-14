
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pthread_key_t ;
struct TYPE_5__ {int digits; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ decContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static decContext* FUNC_6(pthread_key_t *VAR_10) {
  FUNC_4(&VAR_7, VAR_9);
  decContext *VAR_11 = (decContext*)FUNC_3(*VAR_10);
  if (VAR_11) {
    return VAR_11;
  }

  decContext VAR_12 = {
      0,
      VAR_2,
      VAR_3,
      VAR_4,
      0,
      0,
      0,
    };
  if (VAR_10 == &VAR_6) {
    VAR_12.digits = VAR_1;
  } else if (VAR_10 == &VAR_5) {
    VAR_12.digits = VAR_0;
  }

  VAR_11 = FUNC_2(sizeof(decContext));
  if (VAR_11) {
    *VAR_11 = VAR_12;
    if (FUNC_5(*VAR_10, VAR_11) != 0) {
      FUNC_1(VAR_8, "error: cannot store thread specific data");
      FUNC_0();
    }
  }
  return VAR_11;
}
