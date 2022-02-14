
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct sockaddr {int dummy; } ;
typedef int nlm4_res ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ,int *,int ,char*,struct timeval) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int * FUNC_2 (struct sockaddr*,int ) ;
 int FUNC_3 (int ,char*,int,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_4(int VAR_5, nlm4_res *VAR_6, struct sockaddr *VAR_7)
{
 static char VAR_8;
 CLIENT *VAR_9;
 struct timeval VAR_10;
 int VAR_11;

 if ((VAR_9 = FUNC_2(VAR_7, VAR_1)) != ((void*)0)) {
  VAR_10.tv_sec = 0;
  VAR_10.tv_usec = 0;

  VAR_11 = FUNC_0(VAR_9, VAR_5,
      (xdrproc_t)VAR_3, VAR_6,
      (xdrproc_t)VAR_4, &VAR_8, VAR_10);

  if (VAR_2 > 2)
   FUNC_3(VAR_0, "clnt_call returns %d(%s)",
       VAR_11, FUNC_1(VAR_11));
 }
}
