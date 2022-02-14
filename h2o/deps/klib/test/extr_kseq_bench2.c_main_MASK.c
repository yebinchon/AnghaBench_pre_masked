
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ s; scalar_t__ m; scalar_t__ l; } ;
typedef TYPE_1__ kstring_t ;
typedef int kstream_t ;
typedef scalar_t__ clock_t ;
typedef int FILE ;


 int VAR_0 ;
 float VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int ,int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,char,TYPE_1__*,int*) ;
 int * FUNC_9 (int) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;
 int VAR_3 ;

int FUNC_12(int VAR_4, char *VAR_5[])
{
 clock_t VAR_6;
 if (VAR_4 == 1) {
  FUNC_5(VAR_3, "Usage: %s <in.txt>\n", VAR_5[0]);
  return 1;
 }
 {
  FILE *VAR_7;
  char *VAR_8;
  VAR_6 = FUNC_0();
  VAR_8 = FUNC_10(VAR_0);
  VAR_7 = FUNC_4(VAR_5[1], "r");
  while (FUNC_3(VAR_8, VAR_0, VAR_7));
  FUNC_2(VAR_7);
  FUNC_5(VAR_3, "[fgets] %.2f sec\n", (float)(FUNC_0() - VAR_6) / VAR_1);
 }
 {
  int VAR_9, VAR_10;
  kstream_t *VAR_11;
  kstring_t VAR_12;
  VAR_6 = FUNC_0();
  VAR_12.l = VAR_12.m = 0; VAR_12.s = 0;
  VAR_9 = FUNC_11(VAR_5[1], VAR_2);
  VAR_11 = FUNC_9(VAR_9);
  while (FUNC_8(VAR_11, '\n', &VAR_12, &VAR_10) >= 0);
  FUNC_6(VAR_12.s);
  FUNC_7(VAR_11);
  FUNC_1(VAR_9);
  FUNC_5(VAR_3, "[kstream] %.2f sec\n", (float)(FUNC_0() - VAR_6) / VAR_1);
 }
 return 0;
}
