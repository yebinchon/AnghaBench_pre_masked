
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int CLIENT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int *,int ,char*,struct timeval) ;
 int * FUNC_1 (char*,int ,int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int,char*,int ) ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 int FUNC_6 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

int
FUNC_7(int VAR_7, char *VAR_8[])
{
 char *VAR_9, VAR_10;
 CLIENT *VAR_11;
 struct timeval VAR_12;

 if ((VAR_7 < 2) || (VAR_7 > 3))
  FUNC_6();

 VAR_9 = VAR_8[1];

 FUNC_5(VAR_8[2]);






 VAR_11 = FUNC_1(VAR_9, VAR_2, VAR_3, "udp");
 if (VAR_11 == ((void*)0)) {




  FUNC_4(1, "%s", FUNC_2(VAR_9));
 }

 VAR_12.tv_sec = 15;
 VAR_12.tv_usec = 0;
 if (FUNC_0(VAR_11, VAR_1, (xdrproc_t)VAR_6, &VAR_4,
     (xdrproc_t)VAR_5, &VAR_10, VAR_12) != VAR_0) {




  FUNC_4(1, "%s", FUNC_3(VAR_11, VAR_9));
 }

 return (0);
}
