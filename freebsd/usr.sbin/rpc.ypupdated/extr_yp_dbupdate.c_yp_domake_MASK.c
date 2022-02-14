
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char*,char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static int
FUNC_5(char *VAR_5, char *VAR_6)
{
 int VAR_7;

 switch ((VAR_7 = FUNC_2())) {
 case 0:
  FUNC_0(VAR_1, VAR_0, VAR_5, VAR_6, (char *)((void*)0));
  FUNC_4("couldn't exec map update process: %s",
      FUNC_3(VAR_4));
  FUNC_1(1);
  break;
 case -1:
  FUNC_4("fork() failed: %s", FUNC_3(VAR_4));
  return(VAR_2);
  break;
 default:
  VAR_3++;
  break;
 }

 return(0);
}
