
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct node_info {struct node_info* next; scalar_t__ signal; int seen; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct node_info*) ;
 unsigned long FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 (struct timeval*,int *) ;
 struct node_info* VAR_0 ;
 int FUNC_4 () ;
 unsigned long VAR_1 ;

void FUNC_5(struct timeval* VAR_2) {
 unsigned long VAR_3 = 0;
 struct timeval VAR_4;
 int VAR_5 = 0;
 unsigned long VAR_6 = 0;
 unsigned long VAR_7;

 VAR_7 = VAR_2->tv_sec*1000+VAR_2->tv_usec/1000;
 VAR_6 = VAR_7;

 struct node_info* VAR_8 = VAR_0;

 if (FUNC_3(&VAR_4, ((void*)0)) == -1)
  FUNC_0(1, "gettimeofday()");

 while(VAR_8) {
  if (VAR_8->signal) {
   VAR_3 = FUNC_2(&VAR_4, &VAR_8->seen);


   if (VAR_3 >= VAR_1) {
    VAR_8->signal = 0;
    FUNC_1(VAR_8);
    VAR_5 = 1;
   }


   else {
    unsigned long VAR_9;

    VAR_9 = VAR_1 - VAR_3;
    if (VAR_9 < VAR_6)
     VAR_9 = VAR_6;
   }
  }
  VAR_8 = VAR_8->next;
 }

 if (VAR_5)
  FUNC_4();


 if (VAR_6 < VAR_7) {
  VAR_2->tv_sec = VAR_6/1000;
  VAR_2->tv_usec = (VAR_6 - VAR_2->tv_sec*1000)*1000;
 }
}
