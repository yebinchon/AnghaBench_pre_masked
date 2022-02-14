
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtprio {int type; void* prio; } ;
typedef void* pid_t ;


 int VAR_0 ;




 int VAR_1 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (char*,char**) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 () ;
 int FUNC_6 (char) ;
 void* FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,void*,struct rtprio*) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,...) ;

int
FUNC_12(int VAR_2, char *VAR_3[])
{
 struct rtprio VAR_4;
 const char *VAR_5;
 pid_t VAR_6 = 0;

 VAR_5 = FUNC_5();

 if (FUNC_9(VAR_5, "rtprio") == 0)
  VAR_4.type = 128;
 else if (FUNC_9(VAR_5, "idprio") == 0)
  VAR_4.type = 130;
 else
  FUNC_2(1, "invalid progname");

 switch (VAR_2) {
 case 2:
  VAR_6 = FUNC_7(VAR_3[1], "pid");
  VAR_6 = FUNC_0(VAR_6);

 case 1:
  if (FUNC_8(VAR_0, VAR_6, &VAR_4) != 0)
   FUNC_1(1, "RTP_LOOKUP");
  switch (VAR_4.type) {
  case 128:
  case 131:
   FUNC_11("realtime priority %d", VAR_4.prio);
   break;
  case 129:
   FUNC_11("normal priority");
   break;
  case 130:
   FUNC_11("idle priority %d", VAR_4.prio);
   break;
  default:
   FUNC_2(1, "invalid priority type %d", VAR_4.type);
   break;
  }
  FUNC_4(0);
 default:
  if (VAR_3[1][0] == '-' || FUNC_6(VAR_3[1][0])) {
   if (VAR_3[1][0] == '-') {
    if (FUNC_9(VAR_3[1], "-t") == 0) {
     VAR_4.type = 129;
     VAR_4.prio = 0;
    } else {
     FUNC_10();
     break;
    }
   } else
    VAR_4.prio = FUNC_7(VAR_3[1], "priority");
  } else {
   FUNC_10();
   break;
  }

  if (VAR_3[2][0] == '-') {
   VAR_6 = FUNC_7(VAR_3[2], "pid");
   VAR_6 = FUNC_0(VAR_6);
  }

  if (FUNC_8(VAR_1, VAR_6, &VAR_4) != 0)
   FUNC_1(1, "RTP_SET");

  if (VAR_6 == 0) {
   FUNC_3(VAR_3[2], &VAR_3[2]);
   FUNC_1(1, "execvp: %s", VAR_3[2]);
  }
  FUNC_4(0);
 }

}
