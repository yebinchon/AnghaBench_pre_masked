
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_val; } ;
struct TYPE_4__ {int chan; TYPE_1__ ireq; int s; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (char*) ;

void FUNC_3(int VAR_2) {
 if (VAR_2 == VAR_1.chan)
  return;

 VAR_1.ireq.i_val = VAR_2;

 if (FUNC_1(VAR_1.s, VAR_0, &VAR_1.ireq) == -1) {
  FUNC_2("ioctl(SIOCS80211) [chan]");
  FUNC_0(1);
 }
 VAR_1.chan = VAR_2;
}
