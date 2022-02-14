
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int ) ;
 int VAR_16 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (char*,int,int ) ;
 int VAR_17 ;
 scalar_t__ FUNC_9 (int*) ;
 int FUNC_10 () ;
 int* VAR_18 ;
 int VAR_19 ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (int ,char*) ;
 int VAR_20 ;
 int FUNC_13 () ;

int
FUNC_14(int VAR_21, char* VAR_22[])
{
 int VAR_23;
 int VAR_24 = 1;
 char *VAR_25;
 int VAR_26 = VAR_6 | VAR_9;

 while ((VAR_23 = FUNC_5(VAR_21, VAR_22, "df:sv")) != -1) {
  switch (VAR_23) {
  case 'd':
   VAR_24 = 0;
   VAR_16++;
   break;
  case 'f':
   VAR_14 = VAR_17;
   break;
  case 's':
   VAR_19 = 1;
   break;
  case 'v':
   VAR_20 = 1;
   break;
  default:
   FUNC_1(1, "unknown option `%c'", VAR_23);
  }
 }

 if (VAR_24)
  FUNC_0(0, 0);





 if (!VAR_24)
  VAR_26 |= VAR_8;

 VAR_25 = FUNC_11(VAR_22[0], '/');
 FUNC_8(VAR_25 ? VAR_25+1 : VAR_22[0], VAR_26, VAR_5);

 FUNC_12(VAR_7, "start");

 if (FUNC_9(VAR_18) < 0)
  FUNC_1(1, "pipe");
 if (FUNC_4(VAR_18[0], VAR_4, VAR_11) < 0)
  FUNC_1(1, "fcntl");

 if ((VAR_15 = FUNC_7(VAR_1, VAR_12)) == -1) {
  FUNC_1(1, "cannot open device file `%s'", VAR_1);
 }

 if (FUNC_4(VAR_15, VAR_3, 1) == -1) {
  FUNC_1(1, "cannot set close-on-exec flag for device file '%s'", VAR_1);
 }

 if ((VAR_13 = FUNC_7(VAR_0, VAR_12)) == -1) {
  FUNC_1(1, "cannot open device file `%s'", VAR_0);
 }

 if (FUNC_4(VAR_13, VAR_3, 1) == -1) {
  FUNC_1(1, "cannot set close-on-exec flag for device file '%s'", VAR_0);
 }

 FUNC_10();
 FUNC_13();
 FUNC_2();
 FUNC_3(VAR_2);
}
