
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr_in {int dummy; } ;
typedef int CLIENT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (struct sockaddr_in*,scalar_t__,scalar_t__,int*,int ,int ) ;
 int * FUNC_2 (struct sockaddr_in*,scalar_t__,scalar_t__,struct timeval,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static CLIENT *
FUNC_6(struct sockaddr_in *VAR_1, u_long VAR_2, u_long VAR_3,
    int *VAR_4, const char *VAR_5)
{
 CLIENT *VAR_6;

 if (FUNC_5(VAR_5, "tcp") == 0) {
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, 0, 0);
 } else {
  struct timeval VAR_7;

  VAR_7.tv_sec = 5;
  VAR_7.tv_usec = 0;
  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_7, VAR_4);
 }
 if (VAR_6 == (CLIENT *)((void*)0)) {
  FUNC_0("rpcinfo");
  if (VAR_3 == VAR_0)
   FUNC_4("program %lu is not available\n", VAR_2);
  else
   FUNC_4("program %lu version %lu is not available\n",
       VAR_2, VAR_3);
  FUNC_3(1);
 }
 return (VAR_6);
}
