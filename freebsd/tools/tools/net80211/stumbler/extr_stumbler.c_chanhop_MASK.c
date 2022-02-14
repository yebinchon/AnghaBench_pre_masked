
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {unsigned long tv_sec; unsigned long tv_usec; } ;
struct TYPE_2__ {int chan; int last_hop; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 unsigned long FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (struct timeval*,int *) ;
 unsigned long VAR_1 ;
 int FUNC_3 (int) ;

void FUNC_4(struct timeval* VAR_2) {
 unsigned long VAR_3 = 0;

 if (FUNC_2(VAR_2, ((void*)0)) == -1)
  FUNC_0(1, "gettimeofday()");


 VAR_3 = FUNC_1(VAR_2, &VAR_0.last_hop);


 if (VAR_3 >= VAR_1) {
  int VAR_4;

  VAR_4 = VAR_0.chan + 1;

  if (VAR_4 > 11)
   VAR_4 = 1;

  FUNC_3(VAR_4);

  VAR_3 = VAR_1;
 }

 else {
  VAR_3 = VAR_1 - VAR_3;
 }


 VAR_2->tv_sec = VAR_3/1000;
 VAR_2->tv_usec = (VAR_3 - VAR_2->tv_sec*1000)*1000;
}
