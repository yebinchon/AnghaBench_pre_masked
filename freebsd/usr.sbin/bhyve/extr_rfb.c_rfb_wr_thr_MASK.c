
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct rfb_softc {int cfd; } ;
typedef int int64_t ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct timeval*,int *) ;
 scalar_t__ FUNC_3 (struct rfb_softc*,int,int ) ;
 int FUNC_4 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_5 (struct timeval*,struct timeval*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void *
FUNC_7(void *VAR_0)
{
 struct rfb_softc *VAR_1;
 fd_set VAR_2;
 struct timeval VAR_3;
 struct timeval VAR_4;
 int64_t VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_1 = VAR_0;
 VAR_6 = VAR_1->cfd;

 VAR_4.tv_sec = 0;
 VAR_4.tv_usec = 0;
 while (VAR_1->cfd >= 0) {
  FUNC_1(&VAR_2);
  FUNC_0(VAR_6, &VAR_2);
  VAR_3.tv_sec = 0;
  VAR_3.tv_usec = 10000;

  VAR_7 = FUNC_4(VAR_6+1, &VAR_2, ((void*)0), ((void*)0), &VAR_3);
  if (VAR_7 < 0)
   return (((void*)0));


  FUNC_2(&VAR_3, ((void*)0));
  VAR_5 = FUNC_5(&VAR_4, &VAR_3);
  if (VAR_5 > 40000) {
   VAR_4.tv_sec = VAR_3.tv_sec;
   VAR_4.tv_usec = VAR_3.tv_usec;
   if (FUNC_3(VAR_1, VAR_6, 0) <= 0) {
    return (((void*)0));
   }
  } else {

   FUNC_6(40000 - VAR_5);
  }
 }

 return (((void*)0));
}
