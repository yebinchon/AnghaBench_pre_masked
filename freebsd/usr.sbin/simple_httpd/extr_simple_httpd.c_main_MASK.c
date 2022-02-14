
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int) ;
 char* VAR_5 ;
 int FUNC_6 () ;
 char* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int,char**,char*) ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_10 () ;
 int VAR_8 ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int ,int) ;
 char* VAR_9 ;
 int FUNC_13 (char*,int ) ;
 char* VAR_10 ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,char*) ;
 int VAR_11 ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 () ;

int
FUNC_22(int VAR_12, char *VAR_13[])
{
 int VAR_14, VAR_15;
 pid_t VAR_16 = 65534;
 pid_t VAR_17;


 FUNC_19 (VAR_6,FUNC_7("HOME"));
 if (!FUNC_8()) FUNC_19 (VAR_6,"/httphome");
    else FUNC_18 (VAR_6,"/httphome");


 if (FUNC_8()) {
     FUNC_19(VAR_9,FUNC_7("HOME"));
     FUNC_18(VAR_9,"/");
     FUNC_18(VAR_9,"jhttp.log");
 } else
   FUNC_19(VAR_9,"/var/log/jhttpd.log");


 while ((VAR_14 = FUNC_9(VAR_12, VAR_13, "d:f:g:l:p:vDh")) != -1)
   switch (VAR_14) {
   case 'd':
     FUNC_19(VAR_6,VAR_10);
     break;
   case 'f':
     VAR_4 = 0;
     VAR_11 = 1;
     VAR_5 = VAR_10;
     break;
   case 'g':
     VAR_16 = FUNC_1(VAR_10);
     break;
   case 'l':
     FUNC_19(VAR_9,VAR_10);
     break;
   case 'p':
     VAR_7 = FUNC_1(VAR_10);
     break;
   case 'v':
     VAR_11 = 1;
     break;
   case 'D':
     VAR_4 = 0;
     break;
   case '?':
   case 'h':
   default:
     FUNC_15("usage: simple_httpd [[-d directory][-g grpid][-l logfile][-p port][-vD]]\n");
     FUNC_5(1);

   }


 if ((VAR_7 == 80) && FUNC_8()) {
   VAR_7 = 1080;
 }


 if (VAR_5 == ((void*)0)) {
   if (FUNC_2(VAR_6)) {
     FUNC_14("chdir");
     FUNC_16(VAR_6);
     FUNC_5(1);
   }
 }


 if ((FUNC_0(VAR_9,VAR_2)) && VAR_4) {
   VAR_15 = FUNC_13 (VAR_9,VAR_0);
   FUNC_3 (VAR_9,00600);
   FUNC_4(VAR_15);
 }

 FUNC_11();

 if (VAR_11) {
   FUNC_15("Server started with options \n");
   FUNC_15("port: %d\n",VAR_7);
   if (VAR_5 == ((void*)0)) FUNC_15("html home: %s\n",VAR_6);
   if (VAR_4) FUNC_15("logfile: %s\n",VAR_9);
 }


 if (VAR_4) {
   if ((VAR_17 = FUNC_6()) != 0) {
     FUNC_20(0,VAR_1,0);
     if (VAR_11) FUNC_15("pid: %d\n",VAR_17);
     FUNC_5(0);
   }
   FUNC_20(0,VAR_1,0);
 }

 if (VAR_5 == ((void*)0))
  FUNC_17((pid_t)0, VAR_16);




 if (FUNC_12(VAR_8,15) < 0) FUNC_5(1);

 label:
 FUNC_21();

 if (FUNC_6()) {
   FUNC_20(0,VAR_1,0);
   FUNC_4(VAR_3);
   goto label;
 }

 FUNC_10();

 FUNC_20(0,VAR_1,0);
 FUNC_5(0);
}
