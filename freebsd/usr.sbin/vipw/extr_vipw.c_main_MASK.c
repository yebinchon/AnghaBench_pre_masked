
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ,size_t*) ;
 int FUNC_6 (int,char**,char*) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char const*,int *) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;

int
FUNC_16(int VAR_4, char *VAR_5[])
{
 const char *VAR_6 = ((void*)0);
 int VAR_7, VAR_8, VAR_9;
 char *VAR_10;
 size_t VAR_11;

 while ((VAR_7 = FUNC_6(VAR_4, VAR_5, "d:")) != -1)
  switch (VAR_7) {
  case 'd':
   VAR_6 = VAR_0;
   break;
  case '?':
  default:
   FUNC_15();
  }

 VAR_4 -= VAR_1;
 VAR_5 += VAR_1;

 if (VAR_4 != 0)
  FUNC_15();

 if (FUNC_10(VAR_6, ((void*)0)) == -1)
  FUNC_1(1, "pw_init()");
 if ((VAR_8 = FUNC_11()) == -1) {
  FUNC_9();
  FUNC_1(1, "pw_lock()");
 }
 if ((VAR_9 = FUNC_13(VAR_8)) == -1) {
  FUNC_9();
  FUNC_1(1, "pw_tmp()");
 }
 (void)FUNC_0(VAR_9);

 (void)FUNC_14(077);

 for (;;) {
  switch (FUNC_8(0)) {
  case -1:
   FUNC_9();
   FUNC_1(1, "pw_edit()");
  case 0:
   FUNC_9();
   FUNC_2(0, "no changes made");
  default:
   break;
  }
  if (FUNC_12(((void*)0)) == 0) {
   FUNC_9();
   FUNC_2(0, "password list updated");
  }
  FUNC_7("re-edit the password file? ");
  FUNC_4(VAR_3);
  if ((VAR_10 = FUNC_5(VAR_2, &VAR_11)) == ((void*)0)) {
   FUNC_9();
   FUNC_1(1, "fgetln()");
  }
  if (VAR_11 > 0 && (*VAR_10 == 'N' || *VAR_10 == 'n'))
   break;
 }
 FUNC_9();
 FUNC_3(0);
}
