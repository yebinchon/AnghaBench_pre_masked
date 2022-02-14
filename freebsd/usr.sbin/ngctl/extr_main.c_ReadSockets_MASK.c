
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int fd_set ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ,int **,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static void
FUNC_8(fd_set *VAR_4)
{

 if (FUNC_1(VAR_2, VAR_4))
  FUNC_2();


 if (FUNC_1(VAR_3, VAR_4)) {
  char VAR_5[VAR_1];
  u_char *VAR_6;
  int VAR_7;


  if ((VAR_7 = FUNC_3(VAR_3, &VAR_6, VAR_5)) < 0)
   FUNC_4(VAR_0, "reading hook \"%s\"", VAR_5);
  if (VAR_7 == 0)
   FUNC_5(VAR_0, "EOF from hook \"%s\"?", VAR_5);


  FUNC_7("Rec'd data packet on hook \"%s\":\n", VAR_5);
  FUNC_0(VAR_6, VAR_7);
  FUNC_6(VAR_6);
 }
}
