
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mac_t ;


 char* VAR_0 ;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (char const*,char const*,char*,char*) ;
 int FUNC_2 (char*,char**) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;

int
FUNC_9(int VAR_1, char *VAR_2[])
{
 const char *VAR_3;
 mac_t VAR_4;
 int VAR_5;


 if (VAR_1 < 3)
  FUNC_8();

 VAR_5 = FUNC_5(&VAR_4, VAR_2[1]);
 if (VAR_5 != 0) {
  FUNC_7("mac_from_text");
  return (-1);
 }

 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5 != 0) {
  FUNC_7(VAR_2[1]);
  return (-1);
 }

 FUNC_4(VAR_4);

 if (VAR_1 >= 3) {
  FUNC_2(VAR_2[2], VAR_2 + 2);
  FUNC_0(1, "%s", VAR_2[2]);
 } else {
  if (!(VAR_3 = FUNC_3("SHELL")))
   VAR_3 = VAR_0;
  FUNC_1(VAR_3, VAR_3, "-i", (char *)((void*)0));
  FUNC_0(1, "%s", VAR_3);
 }

}
