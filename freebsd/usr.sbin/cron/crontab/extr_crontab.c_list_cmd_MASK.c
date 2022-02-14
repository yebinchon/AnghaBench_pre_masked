
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int n ;
typedef int FILE ;


 char* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,int ,char*,int ) ;
 int FUNC_7 (char*,int,char*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_8() {
 char VAR_8[VAR_2];
 FILE *VAR_9;

 FUNC_6(VAR_4, VAR_3, "LIST", VAR_5);
 (void) FUNC_7(VAR_8, sizeof(VAR_8), FUNC_0(VAR_5));
 if (!(VAR_9 = FUNC_5(VAR_8, "r"))) {
  if (VAR_6 == VAR_0)
   FUNC_3(VAR_1, "no crontab for %s", VAR_5);
  else
   FUNC_2(VAR_1, "%s", VAR_8);
 }



 FUNC_1(VAR_9, VAR_7);
 FUNC_4(VAR_9);
}
