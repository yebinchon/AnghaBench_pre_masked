
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_2__ {int mtx; } ;


 int FUNC_0 (int ,int ,char*) ;
 TYPE_1__* FUNC_1 (unsigned int) ;
 int FUNC_2 (void**) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,void*) ;

__attribute__((used)) static void
FUNC_7(void **VAR_1, unsigned VAR_2, unsigned VAR_3) {
 tsdn_t *VAR_4;
 unsigned VAR_5;

 VAR_4 = FUNC_5();

 if (VAR_0) {
  FUNC_3(VAR_4,
      &FUNC_1(VAR_3)->mtx);
 }

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  FUNC_0(FUNC_6(VAR_4, VAR_1[VAR_5]), 0,
      "Allocation should no longer exist");
 }
 if (VAR_0) {
  FUNC_4(VAR_4,
      &FUNC_1(VAR_3)->mtx);
 }

 FUNC_2(VAR_1);
}
