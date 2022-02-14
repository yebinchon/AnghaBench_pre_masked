
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,char**) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int ,int ) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int*) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (char*,int,char*,int) ;
 char* FUNC_15 (char const*) ;

__attribute__((used)) static int
FUNC_16(const char *VAR_12, pid_t *VAR_13)
{
 int VAR_14[2], VAR_15;
 pid_t VAR_16;
 char *VAR_17[4];
 char VAR_18[200];

 if (FUNC_11(VAR_14) == -1)
  return (-1);
 if ((VAR_15 = FUNC_10(VAR_11, VAR_2)) == -1)

  return (-1);

 switch ((VAR_16 = FUNC_8())) {
 case -1:
  FUNC_2(VAR_15);
  return (-1);

 case 0:
  (void)FUNC_12();
  VAR_17[0] = FUNC_15("sh");
  VAR_17[1] = FUNC_15("-c");
  VAR_17[2] = FUNC_15(VAR_12);
  VAR_17[3] = ((void*)0);
  if (VAR_17[0] == ((void*)0) || VAR_17[1] == ((void*)0) || VAR_17[2] == ((void*)0)) {
   FUNC_9("strdup");
   FUNC_6(1);
  }

  FUNC_1(0);


  (void)FUNC_13(VAR_3, VAR_6);
  (void)FUNC_13(VAR_5, VAR_6);
  (void)FUNC_13(VAR_4, VAR_6);

  FUNC_4(VAR_14[0], VAR_8);
  FUNC_4(VAR_15, VAR_9);
  FUNC_4(VAR_15, VAR_7);
  FUNC_3(VAR_7 + 1);

  (void)FUNC_5(VAR_10, VAR_17);
  FUNC_0(255);
 }
 FUNC_2(VAR_15);
 FUNC_2(VAR_14[0]);
 if (FUNC_7(VAR_14[1], VAR_0, VAR_1) == -1) {

  (void)FUNC_14(VAR_18, sizeof VAR_18,
          "Warning: cannot change pipe to PID %d to "
          "non-blocking behaviour.",
          (int)VAR_16);
  FUNC_9(VAR_18);
 }
 *VAR_13 = VAR_16;
 return (VAR_14[1]);
}
