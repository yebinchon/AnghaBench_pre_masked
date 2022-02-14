
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int mac_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char**) ;
 size_t VAR_2 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 () ;

int
FUNC_14(int VAR_3, char *VAR_4[])
{
 char *VAR_5, *VAR_6;
 mac_t VAR_7;
 pid_t VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_11 = 0;
 VAR_8 = 0;
 VAR_5 = ((void*)0);
 while ((VAR_9 = FUNC_3(VAR_3, VAR_4, "l:p:")) != -1) {
  switch (VAR_9) {
  case 'l':
   if (VAR_5 != ((void*)0))
    FUNC_13();
   VAR_5 = VAR_4[VAR_2 - 1];
   break;
  case 'p':
   if (VAR_11)
    FUNC_13();
   VAR_8 = FUNC_0(VAR_4[VAR_2 - 1]);
   VAR_11 = 1;
   break;
  default:
   FUNC_13();
  }

 }

 VAR_3 -= VAR_2;
 VAR_4 += VAR_2;

 if (VAR_3 != 0)
  FUNC_13();

 if (VAR_5 != ((void*)0))
  VAR_10 = FUNC_7(&VAR_7, VAR_5);
 else
  VAR_10 = FUNC_8(&VAR_7);
 if (VAR_10 != 0) {
  FUNC_10("mac_prepare");
  return (-1);
 }

 if (VAR_11) {
  VAR_10 = FUNC_5(VAR_8, VAR_7);
  if (VAR_10)
   FUNC_10("mac_get_pid");
 } else {
  VAR_10 = FUNC_6(VAR_7);
  if (VAR_10)
   FUNC_10("mac_get_proc");
 }
 if (VAR_10) {
  FUNC_4(VAR_7);
  FUNC_1 (-1);
 }
 VAR_10 = FUNC_9(VAR_7, &VAR_6);
 if (VAR_10 != 0) {
  FUNC_10("mac_to_text");
  FUNC_1(VAR_0);
 }

 if (FUNC_12(VAR_6) > 0)
  FUNC_11("%s\n", VAR_6);

 FUNC_4(VAR_7);
 FUNC_2(VAR_6);
 FUNC_1(VAR_1);
}
