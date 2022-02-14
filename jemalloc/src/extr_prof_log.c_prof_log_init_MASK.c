
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *,char*,int ,int ) ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int *) ;

bool FUNC_7(tsd_t *VAR_14) {
 if (VAR_8) {
  FUNC_5(FUNC_6(VAR_14), ((void*)0));
 }

 if (FUNC_1(VAR_11) != 0) {
  FUNC_4("<jemalloc>: Error in atexit() "
        "for logging\n");
  if (VAR_7) {
   FUNC_0();
  }
 }

 if (FUNC_3(&VAR_3, "prof_log",
     VAR_1, VAR_6)) {
  return 1;
 }

 if (FUNC_2(VAR_14, &VAR_2, VAR_0,
     VAR_9, VAR_10)) {
  return 1;
 }

 if (FUNC_2(VAR_14, &VAR_5, VAR_0,
     VAR_12, VAR_13)) {
  return 1;
 }

 VAR_4 = 1;
 return 0;
}
