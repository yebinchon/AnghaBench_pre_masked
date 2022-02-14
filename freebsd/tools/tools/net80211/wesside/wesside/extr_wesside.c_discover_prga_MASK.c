
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int len; } ;
struct TYPE_6__ {int last; scalar_t__ waiting_relay; int data; } ;


 int FUNC_0 (int,char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_2__ VAR_1 ;
 int FUNC_3 (int,TYPE_1__*,TYPE_2__*) ;

void FUNC_4(int VAR_2) {


 if (!VAR_0.data) {
  int VAR_3 = 0;

  if (VAR_1.len >= 20)
   VAR_3 = VAR_1.len*3;

  FUNC_2(&VAR_0, VAR_3);
 }

 if (!VAR_0.waiting_relay) {
  FUNC_3(VAR_2, &VAR_0, &VAR_1);
  if (VAR_0.waiting_relay) {
   if (FUNC_1(&VAR_0.last, ((void*)0)) == -1)
    FUNC_0(1, "gettimeofday()");
  }
 }
}
