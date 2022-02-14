
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {unsigned long tv_nsec; int tv_sec; } ;


 int FUNC_0 (struct timespec*,struct timespec*) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0) {
   struct timespec VAR_1 = {
      .tv_sec = 0,
      .tv_nsec = VAR_0 * 1000000L
   };
   while(FUNC_0(&VAR_1,&VAR_1)==-1) {
      continue;
   }
}
