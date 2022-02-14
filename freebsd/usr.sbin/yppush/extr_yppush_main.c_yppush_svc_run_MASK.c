
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(int VAR_4)
{
 int VAR_5;
 fd_set VAR_6;
 struct timeval VAR_7;

 VAR_7.tv_usec = 0;
 VAR_7.tv_sec = VAR_4;

retry:
 VAR_6 = VAR_2;
 VAR_5 = FUNC_0(VAR_3 + 1, &VAR_6, ((void*)0), ((void*)0), &VAR_7);
 switch (VAR_5) {
 case -1:
  if (VAR_1 == VAR_0)
   goto retry;
  FUNC_3("select failed: %s", FUNC_1(VAR_1));
  break;
 case 0:
  FUNC_3("select() timed out");
  break;
 default:
  FUNC_2(&VAR_6);
  break;
 }
 return VAR_5;
}
