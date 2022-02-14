
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 char* FUNC_3 (int ) ;

void
FUNC_4(void)
{
 char *VAR_2;
 struct stat VAR_3;

 if ((VAR_2 = FUNC_3(VAR_0)) == ((void*)0))
  FUNC_0(1, "ttyname");
 if (FUNC_2(VAR_2, &VAR_3) < 0)
  FUNC_0(1, "%s", VAR_2);
 if (!(VAR_3.st_mode & VAR_1))
  FUNC_1(1, "The callee cannot write to this terminal, use \"mesg y\".");
}
