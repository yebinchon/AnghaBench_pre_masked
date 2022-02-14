
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int * FUNC_3 () ;
 int VAR_3 ;

tsd_t *
FUNC_4(void) {
 tsd_t *VAR_4;

 VAR_2 = 0;
 if (FUNC_0(&VAR_3, "tsd_nominal_tsds_lock",
     VAR_0, VAR_1)) {
  return ((void*)0);
 }
 if (FUNC_2()) {
  return ((void*)0);
 }
 VAR_4 = FUNC_3();
 *FUNC_1(VAR_4) = 1;
 return VAR_4;
}
