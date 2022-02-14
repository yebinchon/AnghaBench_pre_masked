
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SOCKET ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int,int,int,int *,int ,int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 SOCKET VAR_8;

 FUNC_4();
 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6, ((void*)0), 0, 0);
 if (VAR_8 == VAR_0) {
  VAR_3 = FUNC_0();
  return -1;
 }

 if ((VAR_7 = FUNC_2(VAR_8, VAR_2|VAR_1)) < 0) {
  FUNC_3(VAR_8);
  return FUNC_5("unable to make a socket file descriptor: %s",
   FUNC_6(VAR_3));
 }
 return VAR_7;
}
