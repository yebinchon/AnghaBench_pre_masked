
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct termios*) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int*,int*,char*,struct termios*,int *) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_6(char **VAR_3, int *VAR_4, int *VAR_5)
{
 char VAR_6[VAR_1];
 struct termios VAR_7;

 FUNC_0(&VAR_7);

 if (FUNC_2(VAR_4, VAR_5, VAR_6, &VAR_7, ((void*)0)) == -1) {
  FUNC_5(VAR_0, "Could not openpty(). %s", FUNC_4(VAR_2));
  return (-1);
 }

 if ((*VAR_3 = FUNC_3(VAR_6)) == ((void*)0)) {
  FUNC_5(VAR_0, "Could not strdup(). %s", FUNC_4(VAR_2));
  FUNC_1(*VAR_5);
  FUNC_1(*VAR_4);
  return (-1);
 }

 return (0);
}
