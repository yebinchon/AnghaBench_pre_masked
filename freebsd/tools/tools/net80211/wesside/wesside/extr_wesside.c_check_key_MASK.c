
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; } ;
typedef int buf ;
struct TYPE_2__ {double tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int,char*,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_7 (char*,char*) ;

void FUNC_8() {
 char VAR_3[1024];
 int VAR_4;
 int VAR_5;
 struct timeval VAR_6;

 VAR_4 = FUNC_3(VAR_0, VAR_1);

 if (VAR_4 == -1) {
  return;
 }

 VAR_5 = FUNC_6(VAR_4, VAR_3, sizeof(VAR_3) -1);
 if (VAR_5 == -1) {
  FUNC_4("read()");
  FUNC_1(1);
 }

 VAR_3[VAR_5] = 0;

 FUNC_0(VAR_4);

 FUNC_5 ("\n\n");
 FUNC_7("KEY=(%s)\n", VAR_3);

 if (FUNC_2(&VAR_6, ((void*)0)) == -1) {
  FUNC_4("gettimeofday()");
  FUNC_1(1);
 }

 FUNC_5 ("Owned in %.02f minutes\n",
  ((double) VAR_6.tv_sec - VAR_2.tv_sec)/60.0);
 FUNC_1(0);
}
