
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int revents; void* events; } ;
typedef int fd_set ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct pollfd*,size_t) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct pollfd*,size_t,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct pollfd*,int) ;
 int VAR_9 ;
 int FUNC_8 (int ,char*,int) ;
 int VAR_10 ;
 int FUNC_9 () ;

void
FUNC_10(void)
{
 size_t VAR_11;
 struct pollfd VAR_12[VAR_1 + 1];
 int VAR_13, VAR_14;
 int VAR_15;



 register struct pollfd *VAR_16;
 fd_set VAR_17;

 for (;;) {
  VAR_16 = VAR_12;
  VAR_16->fd = VAR_10;
  VAR_16->events = VAR_3;
  VAR_16++;
  for (VAR_15 = 0; VAR_15 <= VAR_9; VAR_15++) {
   if (FUNC_0(VAR_15, &VAR_8)) {
    VAR_16->fd = VAR_15;
    VAR_16->events = VAR_3;
    VAR_16++;
   }
  }
  VAR_11 = VAR_16 - VAR_12;
  VAR_13 = 0;
  VAR_13 = FUNC_6(VAR_12, VAR_11, 30 * 1000);

  if (VAR_5 != 0) {
   FUNC_3(VAR_6);






   FUNC_4(2);
  }

  switch (VAR_13) {
  case -1:





  case 0:
   VAR_17 = VAR_8;
   FUNC_1(&VAR_17, 30, VAR_0);
   continue;
  default:
   if ((VAR_14 = FUNC_2(VAR_12, VAR_11)) ==
       VAR_13)
    continue;
   FUNC_7(VAR_12, VAR_13-VAR_14);
  }





 }
}
