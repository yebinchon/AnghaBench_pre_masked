
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int*) ;
 int FUNC_5 (int,char*,int) ;

int
FUNC_6(int VAR_5, char **VAR_6)
{
 int VAR_7;
 char VAR_8[VAR_0];
 pthread_t VAR_9;

 if (VAR_5 != 2) {
  (void) FUNC_3("usage: %s <file name>\n", VAR_6[0]);
  FUNC_0(1);
 }

 if ((VAR_7 = FUNC_1(VAR_6[1], VAR_2|VAR_1|VAR_3, 0666)) == -1) {
  FUNC_2("open");
  FUNC_0(1);
 }

 if (FUNC_4(&VAR_9, ((void*)0), VAR_4, &VAR_7) != 0) {
  FUNC_2("pthread_create");
  FUNC_0(1);
 }
 for (;;) {
  if (FUNC_5(VAR_7, VAR_8, sizeof (VAR_8)) == -1) {
   FUNC_2("write");
   FUNC_0(1);
  }
 }


 return (0);
}
