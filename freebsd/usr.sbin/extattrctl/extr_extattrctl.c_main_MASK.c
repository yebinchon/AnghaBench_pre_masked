
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int*) ;
 int FUNC_1 (char*,int ,char*,int,char*) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char**) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 () ;

int
FUNC_7(int VAR_4, char *VAR_5[])
{
 int VAR_6 = 0, VAR_7;

 if (VAR_4 < 2)
  FUNC_6();

 if (!FUNC_5(VAR_5[1], "start")) {
  if (VAR_4 != 3)
   FUNC_6();
  VAR_6 = FUNC_1(VAR_5[2], VAR_2, ((void*)0), 0,
      ((void*)0));
  if (VAR_6) {
   FUNC_3("extattrctl start");
   return (-1);
  }
 } else if (!FUNC_5(VAR_5[1], "stop")) {
  if (VAR_4 != 3)
   FUNC_6();
  VAR_6 = FUNC_1(VAR_5[2], VAR_3, ((void*)0), 0,
     ((void*)0));
  if (VAR_6) {
   FUNC_3("extattrctl stop");
   return (-1);
  }
 } else if (!FUNC_5(VAR_5[1], "enable")) {
  if (VAR_4 != 6)
   FUNC_6();
  VAR_6 = FUNC_0(VAR_5[3], &VAR_7);
  if (VAR_6) {
   FUNC_3("extattrctl enable");
   return (-1);
  }
  VAR_6 = FUNC_1(VAR_5[2], VAR_1, VAR_5[5],
      VAR_7, VAR_5[4]);
  if (VAR_6) {
   FUNC_3("extattrctl enable");
   return (-1);
  }
 } else if (!FUNC_5(VAR_5[1], "disable")) {
  if (VAR_4 != 5)
   FUNC_6();
  VAR_6 = FUNC_0(VAR_5[3], &VAR_7);
  if (VAR_6) {
   FUNC_3("extattrctl disable");
   return (-1);
  }
  VAR_6 = FUNC_1(VAR_5[2], VAR_0, ((void*)0),
      VAR_7, VAR_5[4]);
  if (VAR_6) {
   FUNC_3("extattrctl disable");
   return (-1);
  }
 } else if (!FUNC_5(VAR_5[1], "initattr")) {
  VAR_4 -= 2;
  VAR_5 += 2;
  VAR_6 = FUNC_2(VAR_4, VAR_5);
  if (VAR_6)
   return (-1);
 } else if (!FUNC_5(VAR_5[1], "showattr")) {
  VAR_4 -= 2;
  VAR_5 += 2;
  VAR_6 = FUNC_4(VAR_4, VAR_5);
  if (VAR_6)
   return (-1);
 } else
  FUNC_6();

 return (0);
}
