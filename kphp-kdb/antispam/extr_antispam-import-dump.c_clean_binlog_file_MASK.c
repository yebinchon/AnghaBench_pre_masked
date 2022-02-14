
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_start {int member_3; int member_5; int member_4; int member_2; int member_1; int member_0; } ;
typedef int record ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (struct lev_start*,int,int,int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5 () {
  FILE *VAR_4 = FUNC_2 (VAR_2, "wb");
  if (VAR_4 == 0) {
    FUNC_3 (VAR_3, "fatal: can't open binlogname=%s, to cleanup (-c option)\n", VAR_2);
    FUNC_0 (1);
  }
  struct lev_start VAR_5 = {VAR_1, VAR_0, 0, 1, 0, 1};
  FUNC_4 (&VAR_5, sizeof (VAR_5) - 4, 1, VAR_4);
  FUNC_1 (VAR_4);
}
