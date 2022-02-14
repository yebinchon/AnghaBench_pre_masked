
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct kevent {int data; int ident; } ;
struct TYPE_2__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct cfjail {int pstatus; int flags; TYPE_1__ timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct cfjail* FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct cfjail*) ;
 int FUNC_3 (int ,struct timespec*) ;
 int FUNC_4 (int,char*) ;
 int VAR_4 ;
 struct cfjail* FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int ,struct kevent*,int,struct timespec*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,int *,int ) ;

struct cfjail *
FUNC_8(int VAR_7)
{
 struct kevent VAR_8;
 struct timespec VAR_9;
 struct timespec *VAR_10;
 struct cfjail *VAR_11;

 if (!FUNC_0(&VAR_6)) {
 again:
  VAR_10 = ((void*)0);
  if ((VAR_11 = FUNC_1(&VAR_6)) && VAR_11->timeout.tv_sec) {
   FUNC_3(VAR_0, &VAR_9);
   VAR_9.tv_sec = VAR_11->timeout.tv_sec - VAR_9.tv_sec;
   VAR_9.tv_nsec = VAR_11->timeout.tv_nsec - VAR_9.tv_nsec;
   if (VAR_9.tv_nsec < 0) {
    VAR_9.tv_sec--;
    VAR_9.tv_nsec += 1000000000;
   }
   if (VAR_9.tv_sec < 0 ||
       (VAR_9.tv_sec == 0 && VAR_9.tv_nsec == 0)) {
    VAR_11->flags |= VAR_2;
    FUNC_2(VAR_11);
    return VAR_11;
   }
   VAR_10 = &VAR_9;
  }
  if (VAR_7) {
   VAR_9.tv_sec = 0;
   VAR_9.tv_nsec = 0;
   VAR_10 = &VAR_9;
  }
  switch (FUNC_6(VAR_5, ((void*)0), 0, &VAR_8, 1, VAR_10)) {
  case -1:
   if (VAR_4 != VAR_1)
    FUNC_4(1, "kevent");
   goto again;
  case 0:
   if (!VAR_7) {
    VAR_11 = FUNC_1(&VAR_6);
    VAR_11->flags |= VAR_2;
    FUNC_2(VAR_11);
    return VAR_11;
   }
   break;
  case 1:
   (void)FUNC_7(VAR_8.ident, ((void*)0), VAR_3);
   if ((VAR_11 = FUNC_5(VAR_8.ident))) {
    VAR_11->pstatus = VAR_8.data;
    return VAR_11;
   }
   goto again;
  }
 }
 return ((void*)0);
}
