
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_cmd_exec {int line; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,char*,int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int*,int ) ;
 int FUNC_5 (char*) ;

int
FUNC_6(void *VAR_7)
{
 struct event_cmd_exec * VAR_8 = VAR_7;
 int VAR_9 = -1;
 pid_t VAR_10;

 switch ((VAR_10 = FUNC_2())) {
 case -1:
  FUNC_5("cannot fork");
  break;
 case 0:

  FUNC_3(VAR_2, VAR_4);
  FUNC_3(VAR_1, VAR_4);
  FUNC_3(VAR_3, VAR_4);
  FUNC_1(VAR_5, "sh", "-c", VAR_8->line, (char *)((void*)0));
  FUNC_0(127);
 default:

  do {
   VAR_10 = FUNC_4(VAR_10, &VAR_9, 0);
  } while (VAR_10 == -1 && VAR_6 == VAR_0);
  break;
 }
 return VAR_9;
}
