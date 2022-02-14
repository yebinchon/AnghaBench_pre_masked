
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nstime_t ;
typedef int emitter_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(emitter_t *VAR_7) {
 FUNC_2(VAR_7, "info");

 nstime_t VAR_8 = VAR_1;

 FUNC_4(&VAR_8);
 uint64_t VAR_9 = FUNC_3(&VAR_8) - FUNC_3(&VAR_6);
 FUNC_0(VAR_7, "duration", VAR_4, &VAR_9);

 char *VAR_10 = VAR_0;
 FUNC_0(VAR_7, "version",
     VAR_3, &VAR_10);

 FUNC_0(VAR_7, "lg_sample_rate",
     VAR_2, &VAR_5);

 int VAR_11 = FUNC_5();
 FUNC_0(VAR_7, "pid", VAR_2, &VAR_11);

 FUNC_1(VAR_7);
}
