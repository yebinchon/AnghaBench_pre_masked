
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct params {scalar_t__ state; scalar_t__ rx; TYPE_1__* q; int last; } ;
typedef int fd_set ;
struct TYPE_2__ {scalar_t__ live; } ;


 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,struct timeval*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (struct timeval*,int *) ;
 int FUNC_6 (struct params*) ;
 int FUNC_7 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_8 (struct params*) ;

void FUNC_9(struct params *VAR_2)
{
 struct timeval VAR_3;
 struct timeval *VAR_4 = ((void*)0);
 fd_set VAR_5;
 int VAR_6 = 10*1000;

 if (VAR_2->state == VAR_1) {
  int VAR_7;


  if (FUNC_5(&VAR_3, ((void*)0)) == -1)
   FUNC_4(1, "gettimeofday()");

  VAR_7 = FUNC_3(&VAR_2->last, &VAR_3);


  if (VAR_7 >= VAR_6) {
   if (VAR_2->q && VAR_2->q->live) {
    FUNC_8(VAR_2);
    VAR_7 = 0;
   } else {
    VAR_2->state = VAR_0;
    return;
   }
  }
  VAR_7 = VAR_6 - VAR_7;
  VAR_3.tv_sec = VAR_7/1000/1000;
  VAR_3.tv_usec = VAR_7 - VAR_3.tv_sec*1000*1000;
  VAR_4 = &VAR_3;
 }

 FUNC_2(&VAR_5);
 FUNC_1(VAR_2->rx, &VAR_5);

 if (FUNC_7(VAR_2->rx+1, &VAR_5, ((void*)0), ((void*)0), VAR_4) == -1)
  FUNC_4(1, "select()");

 if (FUNC_0(VAR_2->rx, &VAR_5))
  FUNC_6(VAR_2);
}
