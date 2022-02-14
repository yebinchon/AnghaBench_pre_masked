
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {unsigned int tv_nsec; unsigned int tv_sec; } ;


 int FUNC_0 (unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,int*,int*,int*) ;
 int FUNC_1 (unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,int*,int*,int*) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;

int FUNC_3(const struct timespec* VAR_3, struct timespec* VAR_4) {
  unsigned VAR_5;
  unsigned VAR_6;
  unsigned VAR_7;
  unsigned VAR_8;
  unsigned VAR_9;
  int VAR_10;
  int VAR_11;
  int VAR_12;

  VAR_5 = (int)VAR_3->tv_nsec;
  VAR_6 = VAR_3->tv_sec;
  VAR_7 = VAR_0;


  FUNC_1(&VAR_6, &VAR_5, &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11, &VAR_12);




  FUNC_2(VAR_10 == -1 && VAR_2 == VAR_1);

  if(VAR_4 != ((void*)0)) {
    VAR_4->tv_nsec = VAR_9;
    VAR_4->tv_sec = VAR_8;
  }

  return 0;
}
