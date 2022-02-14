
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sname ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int *,int *) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char**) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,char**,char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 char* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (int ,int ,int ,int*,int) ;
 int FUNC_11 (char*,int,char*,int) ;
 scalar_t__ FUNC_12 (char*) ;

int
FUNC_13(int VAR_9, char **VAR_10)
{
 int VAR_11;
 char VAR_12[VAR_0];
 int VAR_13 = VAR_3;


 while ((VAR_11 = FUNC_7(VAR_9, VAR_10, "d:")) != -1) {
  switch (VAR_11) {
  case 'd':
   FUNC_1(FUNC_2(VAR_7));
   break;
  }
 }

 VAR_9 -= VAR_8;
 VAR_10 += VAR_8;
 VAR_6 = VAR_10[0];
 if (VAR_6 == ((void*)0) || (FUNC_12(VAR_6) > VAR_1))
  FUNC_9();
 VAR_9--;
 VAR_10++;


 FUNC_11(VAR_12, sizeof(VAR_12), "flowctl%i", FUNC_8());

 if (FUNC_0(VAR_12, &VAR_5, ((void*)0)) == -1)
  FUNC_4(1, "NgMkSockNode");


 if (FUNC_10(VAR_5, VAR_2, VAR_4, &VAR_13, sizeof(int)) == -1)
  FUNC_4(1, "setsockopt(SOL_SOCKET, SO_RCVBUF)");


 FUNC_5(VAR_9, VAR_10);

 FUNC_3(VAR_5);

 FUNC_6(0);
}
