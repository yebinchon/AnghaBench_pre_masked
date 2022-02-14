
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct timespec*,int ,int) ;
 int FUNC_4 (char*,int,char*,int,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int,int ,int ) ;
 int FUNC_8 (char*,char*,size_t) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,char) ;
 int VAR_4 ;

void
FUNC_11(struct timespec *VAR_5, char *VAR_6, size_t VAR_7)
{
 struct timespec VAR_8;
 struct timeval VAR_9;
 char VAR_10[VAR_2];




 if (VAR_5 == ((void*)0))
  VAR_5 = &VAR_8;



 FUNC_3(VAR_5, 0, sizeof(struct timespec));
 if (FUNC_0(VAR_0, VAR_5)) {

  FUNC_3(VAR_5, 0, sizeof(struct timespec));
  FUNC_1(&VAR_9, ((void*)0));
  VAR_5->tv_sec = VAR_9.tv_sec;
  VAR_5->tv_nsec = VAR_9.tv_usec * 1000;
 }


 if ((VAR_6 == ((void*)0)) || (VAR_7 < 1))
  return;

 FUNC_7(VAR_10, VAR_2, VAR_1,
   FUNC_2(&VAR_5->tv_sec));
 if (VAR_7 > VAR_2) {
  VAR_7 = VAR_2;
  VAR_6[VAR_2+1] = '\0';
 }
 FUNC_8(VAR_6, VAR_10, VAR_7);
}
