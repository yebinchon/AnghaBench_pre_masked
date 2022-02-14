
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {double tv_sec; } ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (struct timespec*,int *) ;
 int FUNC_3 (char*) ;
 double VAR_0 ;
 double VAR_1 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_6 (int) ;

void FUNC_7(int VAR_2, struct sockaddr_in* VAR_3) {
 char VAR_4[64];
 int VAR_5 = 10;
 int VAR_6;
 int VAR_7 = 10*1000;
 unsigned int VAR_8 = 0;
 struct timeval VAR_9, VAR_10;
 struct timespec VAR_11;
 int VAR_12 = 1;
 int VAR_13;

 VAR_7 = (int) ((double)1.0/VAR_1*1000.0*1000.0);

 if (VAR_7 <= 5000) {
  VAR_12 = 10;




  VAR_7 *= VAR_12;

  VAR_7 = (int) (0.90*VAR_7);
 }

 VAR_13 = VAR_12;
 VAR_5 = VAR_0*VAR_1;




 VAR_11.tv_sec = 0;
 VAR_11.tv_nsec = VAR_7*1000;


 if (FUNC_1(&VAR_9, ((void*)0)) == -1) {
  FUNC_3("gettimeofday()");
  FUNC_0(1);
 }

 for(VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if( FUNC_5(VAR_2, VAR_4, 6, 0, (struct sockaddr *)VAR_3, sizeof(*VAR_3)) != 6) {
   FUNC_4("messed up a bit\n");
   return;
  }
  VAR_13--;

  if (!VAR_13) {
   if (FUNC_2(&VAR_11, ((void*)0)) == -1) {
    FUNC_3("nanosleep()");
    FUNC_0(1);
   }

   VAR_13 = VAR_12;
  }


  VAR_8++;
 }

 if (FUNC_1(&VAR_10, ((void*)0)) == -1) {
  FUNC_3("gettimeofday()");
  FUNC_0(1);
 }

 FUNC_4 ("Sent %.03f p/s\n", ((double)VAR_8)/(((double)VAR_10.tv_sec) - VAR_9.tv_sec));


}
