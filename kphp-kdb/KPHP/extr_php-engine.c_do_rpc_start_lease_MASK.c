
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int port; int ip; } ;
typedef TYPE_1__ npid_t ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 double VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;

int FUNC_4 (npid_t VAR_13, double VAR_14) {
  if (VAR_11 == -1) {
    return -1;
  }

  if (VAR_1 != VAR_5) {
    return -1;
  }
  int VAR_15 = FUNC_0 (VAR_13.ip, VAR_13.port, &VAR_8);
  if (VAR_15 == -1) {
    return -1;
  }
  if (VAR_15 == VAR_11) {
    FUNC_3 (0, "can't lease to itself\n");
    return -1;
  }
  if (VAR_12) {
    return -1;
  }

  VAR_9 = VAR_15;
  VAR_10 = VAR_14;
  VAR_0 = VAR_13;

  VAR_2 = 0;
  VAR_3 = VAR_7;
  VAR_4 = 0;

  FUNC_1 (VAR_6);
  FUNC_2();

  return 0;
}
