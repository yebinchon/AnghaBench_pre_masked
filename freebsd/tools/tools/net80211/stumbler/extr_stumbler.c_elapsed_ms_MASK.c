
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; int tv_usec; } ;


 int FUNC_0 (int) ;

unsigned long FUNC_1(struct timeval* VAR_0, struct timeval* VAR_1) {
 unsigned long VAR_2 = 0;

 if (VAR_0->tv_sec > VAR_1->tv_sec)
  VAR_2 = 1000*1000 - VAR_1->tv_usec +
     VAR_0->tv_usec;
 else {
  FUNC_0(VAR_0->tv_sec == VAR_1->tv_sec);
  VAR_2 = VAR_0->tv_usec - VAR_1->tv_usec;
 }
 VAR_2 /= 1000;

 VAR_2 += (VAR_0->tv_sec - VAR_1->tv_sec)*1000;
 return VAR_2;
}
