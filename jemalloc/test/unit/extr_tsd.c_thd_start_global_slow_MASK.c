
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_2__ {int phase; int error; } ;
typedef TYPE_1__ global_slow_data_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;

__attribute__((used)) static void *
FUNC_7(void *VAR_2) {

 global_slow_data_t *VAR_3 = (global_slow_data_t *)VAR_2;
 FUNC_3(FUNC_4(1, 0));

 tsd_t *VAR_4 = FUNC_6();




 FUNC_1(&VAR_3->error, VAR_1 && !FUNC_5(VAR_4),
     VAR_0);
 FUNC_2(&VAR_3->phase, 1, VAR_0);


 while (FUNC_0(&VAR_3->phase, VAR_0) != 2) {
 }
 FUNC_3(FUNC_4(1, 0));
 FUNC_1(&VAR_3->error, FUNC_5(VAR_4), VAR_0);
 FUNC_2(&VAR_3->phase, 3, VAR_0);


 while (FUNC_0(&VAR_3->phase, VAR_0) != 4) {
 }
 FUNC_3(FUNC_4(1, 0));
 FUNC_1(&VAR_3->error, FUNC_5(VAR_4), VAR_0);
 FUNC_2(&VAR_3->phase, 5, VAR_0);


 while (FUNC_0(&VAR_3->phase, VAR_0) != 6) {
 }
 FUNC_3(FUNC_4(1, 0));

 FUNC_1(&VAR_3->error, FUNC_5(VAR_4), VAR_0);
 FUNC_2(&VAR_3->phase, 7, VAR_0);


 while (FUNC_0(&VAR_3->phase, VAR_0) != 8) {
 }
 FUNC_3(FUNC_4(1, 0));




 FUNC_1(&VAR_3->error, VAR_1 && !FUNC_5(VAR_4),
     VAR_0);
 FUNC_2(&VAR_3->phase, 9, VAR_0);

 return ((void*)0);
}
