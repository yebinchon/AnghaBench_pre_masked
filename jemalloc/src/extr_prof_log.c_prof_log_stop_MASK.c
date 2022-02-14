
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int tsd_t ;
struct prof_emitter_cb_arg_s {int fd; int ret; } ;
typedef int emitter_t ;
struct TYPE_4__ {char* member_2; int member_4; int member_3; struct prof_emitter_cb_arg_s* member_1; int member_0; } ;
typedef TYPE_1__ buf_writer_arg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (int *,int ,int ,int,int *,int,int ,int) ;
 int FUNC_10 (int *,char*,int *,int *,int,int) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 scalar_t__ VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (char*,int ,int ) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *) ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_18 (int ) ;
 int * FUNC_19 (int *) ;

bool
FUNC_20(tsdn_t *VAR_27) {
 if (!VAR_19 || !VAR_20) {
  return 1;
 }

 tsd_t *VAR_28 = FUNC_19(VAR_27);
 FUNC_11(VAR_27, &VAR_12);

 if (VAR_23 != VAR_25) {
  FUNC_12(VAR_27, &VAR_12);
  return 1;
 }






 VAR_23 = VAR_24;
 FUNC_12(VAR_27, &VAR_12);


 emitter_t VAR_29;



 int VAR_30;







 VAR_30 = FUNC_5(VAR_11, 0644);


 if (VAR_30 == -1) {
  FUNC_13("<jemalloc>: creat() for log file \"%s\" "
         " failed with %d\n", VAR_11, VAR_4);
  if (VAR_18) {
   FUNC_0();
  }
  return 1;
 }

 struct prof_emitter_cb_arg_s VAR_31;
 VAR_31.fd = VAR_30;

 char *VAR_32 = (char *)FUNC_9(VAR_27,
     VAR_0, FUNC_18(VAR_0),
     0, ((void*)0), 1, FUNC_1(VAR_1, 0, 1), 1);
 buf_writer_arg_t VAR_33 = {VAR_21, &VAR_31,
     VAR_32, VAR_0 - 1, 0};


 FUNC_8(&VAR_29, VAR_3,
     VAR_2, &VAR_33);

 FUNC_6(&VAR_29);
 FUNC_15(&VAR_29);
 FUNC_16(VAR_28, &VAR_29);
 FUNC_17(VAR_28, &VAR_29);
 FUNC_14(VAR_28, &VAR_29);
 FUNC_7(&VAR_29);

 FUNC_2(&VAR_33);
 FUNC_10(VAR_27, VAR_32, ((void*)0), ((void*)0), 1, 1);


 if (VAR_13) {
  FUNC_3(VAR_28, &VAR_10);
  FUNC_3(VAR_28, &VAR_17);
 }
 VAR_13 = 0;
 VAR_8 = 0;
 VAR_15 = 0;
 VAR_7 = ((void*)0);
 VAR_9 = ((void*)0);
 VAR_14 = ((void*)0);
 VAR_16 = ((void*)0);
 VAR_5 = ((void*)0);
 VAR_6 = ((void*)0);

 FUNC_11(VAR_27, &VAR_12);
 VAR_23 = VAR_26;
 FUNC_12(VAR_27, &VAR_12);






 return FUNC_4(VAR_30) || VAR_31.ret == -1;
}
