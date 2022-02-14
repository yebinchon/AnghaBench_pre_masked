
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int forking; int witnesses; } ;
typedef TYPE_1__ witness_tsd_t ;
typedef int witness_list_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void
FUNC_1(witness_tsd_t *VAR_1) {
 if (!VAR_0) {
  return;
 }

 witness_list_t *VAR_2;

 VAR_2 = &VAR_1->witnesses;
 FUNC_0(VAR_2);

 VAR_1->forking = 0;
}
