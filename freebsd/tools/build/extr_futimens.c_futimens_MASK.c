
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct TYPE_3__ {int tv_nsec; int tv_sec; } ;
struct stat {TYPE_2__ st_mtim; TYPE_1__ st_atim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct stat*) ;
 int FUNC_1 (int,struct timeval*) ;
 int FUNC_2 (struct timeval*,int *) ;

int
FUNC_3(int VAR_4, const struct timespec VAR_5[2])
{
 struct timeval VAR_6, VAR_7[2], *VAR_8;
 struct stat VAR_9;
 int VAR_10;

 if (VAR_5 == ((void*)0) || (VAR_5[0].tv_nsec == VAR_1 &&
     VAR_5[1].tv_nsec == VAR_1))
  VAR_8 = ((void*)0);
 else if (VAR_5[0].tv_nsec == VAR_2 &&
     VAR_5[1].tv_nsec == VAR_2)
  return (0);
 else {
  if ((VAR_5[0].tv_nsec < 0 || VAR_5[0].tv_nsec > 999999999) &&
      VAR_5[0].tv_nsec != VAR_1 &&
      VAR_5[0].tv_nsec != VAR_2) {
   VAR_3 = VAR_0;
   return (-1);
  }
  if ((VAR_5[1].tv_nsec < 0 || VAR_5[1].tv_nsec > 999999999) &&
      VAR_5[1].tv_nsec != VAR_1 &&
      VAR_5[1].tv_nsec != VAR_2) {
   VAR_3 = VAR_0;
   return (-1);
  }
  VAR_7[0].tv_sec = VAR_5[0].tv_sec;
  VAR_7[0].tv_usec = VAR_5[0].tv_nsec / 1000;
  VAR_7[1].tv_sec = VAR_5[1].tv_sec;
  VAR_7[1].tv_usec = VAR_5[1].tv_nsec / 1000;
  VAR_8 = VAR_7;
  if (VAR_5[0].tv_nsec == VAR_2 ||
      VAR_5[1].tv_nsec == VAR_2) {
   if (FUNC_0(VAR_4, &VAR_9) == -1)
    return (-1);
   if (VAR_5[0].tv_nsec == VAR_2) {
    VAR_7[0].tv_sec = VAR_9.st_atim.tv_sec;
    VAR_7[0].tv_usec = VAR_9.st_atim.tv_nsec / 1000;
   }
   if (VAR_5[1].tv_nsec == VAR_2) {
    VAR_7[1].tv_sec = VAR_9.st_mtim.tv_sec;
    VAR_7[1].tv_usec = VAR_9.st_mtim.tv_nsec / 1000;
   }
  }
  if (VAR_5[0].tv_nsec == VAR_1 ||
      VAR_5[1].tv_nsec == VAR_1) {
   if (FUNC_2(&VAR_6, ((void*)0)) == -1)
    return (-1);
   if (VAR_5[0].tv_nsec == VAR_1)
    VAR_7[0] = VAR_6;
   if (VAR_5[1].tv_nsec == VAR_1)
    VAR_7[1] = VAR_6;
  }
 }
 return (FUNC_1(VAR_4, VAR_8));
}
