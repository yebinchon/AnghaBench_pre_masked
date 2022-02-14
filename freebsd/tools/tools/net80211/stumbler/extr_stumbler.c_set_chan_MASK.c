
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_val; } ;
struct TYPE_4__ {int chan; int last_hop; TYPE_1__ ireq; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int VAR_2 ;

void FUNC_4(int VAR_3) {
        VAR_1.ireq.i_val = VAR_3;

        if (FUNC_3(VAR_2, VAR_0, &VAR_1.ireq) == -1)
                FUNC_0(1, "ioctl(SIOCS80211) [chan]");

 VAR_1.chan = VAR_3;

 if (FUNC_2(&VAR_1.last_hop, ((void*)0)) == -1)
  FUNC_0(1, "gettimeofday()");

 FUNC_1();
}
