
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct params {int bint; int rx; int tap; int plast; scalar_t__ packet_try; int blast; } ;
typedef int fd_set ;


 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct timeval*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (struct timeval*,int *) ;
 int FUNC_6 (struct params*) ;
 int FUNC_7 (struct params*) ;
 scalar_t__ FUNC_8 (struct params*) ;
 int FUNC_9 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_10 (struct params*) ;

void FUNC_11(struct params *VAR_0)
{
 struct timeval VAR_1, VAR_2;
 int VAR_3;
 int VAR_4;
 fd_set VAR_5;
 int VAR_6 = 3*1000;


 if (FUNC_5(&VAR_2, ((void*)0)) == -1)
  FUNC_4(1, "gettimeofday()");


 VAR_3 = FUNC_3(&VAR_0->blast, &VAR_2);
 if (VAR_3 >= VAR_0->bint) {
  FUNC_10(VAR_0);
  VAR_3 = 0;
 }
 VAR_3 = VAR_0->bint - VAR_3;
 VAR_1.tv_sec = VAR_3/1000/1000;
 VAR_1.tv_usec = VAR_3 - VAR_1.tv_sec*1000*1000;


 if (VAR_0->packet_try) {
  VAR_3 = FUNC_3(&VAR_0->plast, &VAR_2);
  if (VAR_3 >= VAR_6) {

   if (FUNC_8(VAR_0)) {
    VAR_3 = 0;
   }
   else
    VAR_3 = -1;
  }


  if (VAR_3 != -1) {
   VAR_3 = VAR_6 - VAR_3;
   if ((VAR_1.tv_sec*1000*1000 + VAR_1.tv_usec) > VAR_3) {
    VAR_1.tv_sec = VAR_3/1000/1000;
    VAR_1.tv_usec = VAR_3 - VAR_1.tv_sec*1000*1000;
   }
  }
 }


 FUNC_2(&VAR_5);
 FUNC_1(VAR_0->rx, &VAR_5);
 FUNC_1(VAR_0->tap, &VAR_5);
 VAR_4 = VAR_0->rx > VAR_0->tap ? VAR_0->rx : VAR_0->tap;
 if (FUNC_9(VAR_4+1, &VAR_5, ((void*)0), ((void*)0), &VAR_1) == -1)
  FUNC_4(1, "select()");

 if (FUNC_0(VAR_0->tap, &VAR_5))
  FUNC_6(VAR_0);
 if (FUNC_0(VAR_0->rx, &VAR_5))
  FUNC_7(VAR_0);
}
