
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int cpuset_t ;
typedef int buf ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char const*,size_t) ;
 scalar_t__ FUNC_9 (char const*,size_t,char*) ;
 int VAR_1 ;
 int FUNC_10 () ;
 int FUNC_11 (char const*,size_t) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,int,char*,int) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_17(const uint8_t *VAR_3, size_t VAR_4)
{





 if (FUNC_9(VAR_3, VAR_4, "qAttached")) {
  FUNC_15();
  FUNC_5('1');
  FUNC_10();
 } else if (FUNC_9(VAR_3, VAR_4, "qC")) {
  FUNC_15();
  FUNC_7("QC");
  FUNC_6(VAR_1 + 1);
  FUNC_10();
 } else if (FUNC_9(VAR_3, VAR_4, "qfThreadInfo")) {
  cpuset_t VAR_5;
  bool VAR_6;
  int VAR_7;

  if (FUNC_1(&VAR_2)) {
   FUNC_13(VAR_0);
   return;
  }
  VAR_5 = VAR_2;
  FUNC_15();
  FUNC_5('m');
  VAR_6 = 1;
  while (!FUNC_1(&VAR_5)) {
   VAR_7 = FUNC_2(&VAR_5) - 1;
   FUNC_0(VAR_7, &VAR_5);
   if (VAR_6)
    VAR_6 = 0;
   else
    FUNC_5(',');
   FUNC_6(VAR_7 + 1);
  }
  FUNC_10();
 } else if (FUNC_9(VAR_3, VAR_4, "qsThreadInfo")) {
  FUNC_15();
  FUNC_5('l');
  FUNC_10();
 } else if (FUNC_9(VAR_3, VAR_4, "qSupported")) {
  VAR_3 += FUNC_16("qSupported");
  VAR_4 -= FUNC_16("qSupported");
  FUNC_8(VAR_3, VAR_4);
 } else if (FUNC_9(VAR_3, VAR_4, "qThreadExtraInfo")) {
  char VAR_8[16];
  int VAR_9;

  VAR_3 += FUNC_16("qThreadExtraInfo");
  VAR_4 -= FUNC_16("qThreadExtraInfo");
  if (*VAR_3 != ',') {
   FUNC_13(VAR_0);
   return;
  }
  VAR_9 = FUNC_11(VAR_3 + 1, VAR_4 - 1);
  if (VAR_9 <= 0 || !FUNC_3(VAR_9 - 1, &VAR_2)) {
   FUNC_13(VAR_0);
   return;
  }

  FUNC_14(VAR_8, sizeof(VAR_8), "vCPU %d", VAR_9 - 1);
  FUNC_15();
  FUNC_4(VAR_8);
  FUNC_10();
 } else
  FUNC_12();
}
