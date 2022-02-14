
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int tsd_t ;
struct TYPE_3__ {int enq_gdump; scalar_t__ enq; } ;
typedef TYPE_1__ prof_tdata_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int *,int,char*,int) ;
 int FUNC_5 (int *,char*,unsigned char,int ) ;
 int VAR_3 ;
 char* FUNC_6 (int *) ;
 int VAR_4 ;
 TYPE_1__* FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;

void
FUNC_11(tsdn_t *VAR_5) {
 tsd_t *VAR_6;
 prof_tdata_t *VAR_7;

 FUNC_0(VAR_1);

 if (!VAR_2 || FUNC_9(VAR_5) || !FUNC_3()) {
  return;
 }
 VAR_6 = FUNC_10(VAR_5);
 if (FUNC_8(VAR_6) > 0) {
  return;
 }

 VAR_7 = FUNC_7(VAR_6, 0);
 if (VAR_7 == ((void*)0)) {
  return;
 }
 if (VAR_7->enq) {
  VAR_7->enq_gdump = 1;
  return;
 }

 FUNC_1(VAR_5, &VAR_3);
 if (FUNC_6(VAR_5)[0] == '\0') {
  FUNC_2(VAR_5, &VAR_3);
  return;
 }
 char VAR_8[VAR_0];
 FUNC_5(VAR_6, VAR_8, 'u', VAR_4);
 VAR_4++;
 FUNC_2(VAR_5, &VAR_3);
 FUNC_4(VAR_6, 0, VAR_8, 0);
}
