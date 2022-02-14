
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
typedef int fd_set ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 () ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (struct timeval*,int *) ;
 scalar_t__ FUNC_7 (int) ;
 char* VAR_6 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__,int *,int *,int *,struct timeval*) ;

int
FUNC_11(void)
{
 int VAR_7, VAR_8;
 struct timeval VAR_9, VAR_10, VAR_11, VAR_12;
 fd_set VAR_13;


 FUNC_6(&VAR_9, ((void*)0));
 VAR_10.tv_sec = VAR_4 / 1000000;
 VAR_10.tv_usec = VAR_4 % 1000000;
 for (;;) {
  VAR_3 = 0;
  FUNC_8(VAR_0, 0);
  for (;;) {

   (void)FUNC_6(&VAR_11, ((void*)0));
   VAR_12.tv_sec = VAR_9.tv_sec + VAR_10.tv_sec - VAR_11.tv_sec;
   VAR_12.tv_usec = VAR_9.tv_usec + VAR_10.tv_usec - VAR_11.tv_usec;
   while (VAR_12.tv_usec < 0) {
    VAR_12.tv_usec += 1000000;
    VAR_12.tv_sec--;
   }
   while (VAR_12.tv_usec >= 1000000) {
    VAR_12.tv_usec -= 1000000;
    VAR_12.tv_sec++;
   }
   if (VAR_12.tv_sec < 0) {

    FUNC_3();
    FUNC_6(&VAR_9, ((void*)0));
    continue;
   }


   FUNC_1(&VAR_13);
   FUNC_0(VAR_2, &VAR_13);
   VAR_8 = FUNC_10(VAR_2 + 1, &VAR_13, ((void*)0), ((void*)0), &VAR_12);

   if (VAR_8 > 0) {

    VAR_7 = FUNC_5();

    if (FUNC_7(VAR_7) == 0) {
     FUNC_9();
     continue;
    }

    VAR_6[VAR_3] = '\0';
    FUNC_2(VAR_6 + 1);

    VAR_10.tv_sec = VAR_4 / 1000000;
    VAR_10.tv_usec = VAR_4 % 1000000;
    FUNC_9();
    break;
   }

   if (VAR_8 < 0 && VAR_5 != VAR_1)
    FUNC_4(1);


   FUNC_3();
   FUNC_6(&VAR_9, ((void*)0));
  }
 }
}
