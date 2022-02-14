
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; int * buf; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ,int ,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_2__* VAR_8 ;
 TYPE_1__ VAR_9 ;
 size_t VAR_10 ;

void FUNC_7(void) {
 char *VAR_11, *VAR_12;
 int VAR_13 = VAR_3;

 FUNC_2("CL_PlayCinematic_f\n");
 if (VAR_9.state == VAR_0) {
  FUNC_5();
 }

 VAR_11 = FUNC_1( 1 );
 VAR_12 = FUNC_1(2);

 if ((VAR_12 && VAR_12[0] == '1') || FUNC_3(VAR_11,"demoend.roq")==0 || FUNC_3(VAR_11,"end.roq")==0) {
  VAR_13 |= VAR_1;
 }
 if (VAR_12 && VAR_12[0] == '2') {
  VAR_13 |= VAR_2;
 }

 FUNC_6 ();

 VAR_4 = FUNC_0( VAR_11, 0, 0, VAR_7, VAR_6, VAR_13 );
 if (VAR_4 >= 0) {
  do {
   FUNC_4();
  } while (VAR_8[VAR_10].buf == ((void*)0) && VAR_8[VAR_10].status == VAR_5);
 }
}
