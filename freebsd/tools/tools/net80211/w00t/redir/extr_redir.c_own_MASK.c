
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct params {scalar_t__ state; int data_try; int rx; int s; int last; } ;
typedef int fd_set ;


 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,struct timeval*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (struct timeval*,int *) ;
 int FUNC_6 (struct params*) ;
 int FUNC_7 (struct params*) ;
 int FUNC_8 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_9 (struct params*) ;

void FUNC_10(struct params *VAR_3)
{
 struct timeval VAR_4;
 struct timeval *VAR_5 = ((void*)0);
 fd_set VAR_6;
 int VAR_7;
 int VAR_8 = 10*1000;
 int VAR_9 = 2*1000*1000;
 int VAR_10 = (VAR_3->state == VAR_2) ? VAR_9 : VAR_8;

 if (VAR_3->state == VAR_1 || VAR_3->state == VAR_2) {
  int VAR_11;


  if (FUNC_5(&VAR_4, ((void*)0)) == -1)
   FUNC_4(1, "gettimeofday()");

  VAR_11 = FUNC_3(&VAR_3->last, &VAR_4);


  if (VAR_11 >= VAR_10) {
   if (VAR_3->data_try > 3) {
    VAR_3->state = VAR_0;
    return;
   } else {
    FUNC_9(VAR_3);
    VAR_11 = 0;
   }
  }
  VAR_11 = VAR_10 - VAR_11;
  VAR_4.tv_sec = VAR_11/1000/1000;
  VAR_4.tv_usec = VAR_11 - VAR_4.tv_sec*1000*1000;
  VAR_5 = &VAR_4;
 }

 FUNC_2(&VAR_6);
 FUNC_1(VAR_3->rx, &VAR_6);
 FUNC_1(VAR_3->s, &VAR_6);
 VAR_7 = (VAR_3->rx > VAR_3->s) ? VAR_3->rx : VAR_3->s;

 if (FUNC_8(VAR_7+1, &VAR_6, ((void*)0), ((void*)0), VAR_5) == -1)
  FUNC_4(1, "select()");

 if (FUNC_0(VAR_3->rx, &VAR_6))
  FUNC_7(VAR_3);
 if (FUNC_0(VAR_3->s, &VAR_6))
  FUNC_6(VAR_3);
}
