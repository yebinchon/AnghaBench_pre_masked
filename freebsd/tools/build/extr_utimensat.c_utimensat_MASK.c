
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char const*,struct stat*,int) ;
 int FUNC_1 (int,char const*,struct timeval*) ;
 int FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 (char const*,struct timeval*) ;

int
FUNC_4(int VAR_7, const char *VAR_8, const struct timespec VAR_9[2], int VAR_10)
{
 struct timeval VAR_11, VAR_12[2], *VAR_13;
 struct stat VAR_14;
 int VAR_15;

 if ((VAR_10 & ~VAR_1) != 0) {
  VAR_6 = VAR_2;
  return (-1);
 }
 if (VAR_9 == ((void*)0) || (VAR_9[0].tv_nsec == VAR_4 &&
     VAR_9[1].tv_nsec == VAR_4))
  VAR_13 = ((void*)0);
 else if (VAR_9[0].tv_nsec == VAR_5 &&
     VAR_9[1].tv_nsec == VAR_5)
  return (0);
 else {
  if ((VAR_9[0].tv_nsec < 0 || VAR_9[0].tv_nsec > 999999999) &&
      VAR_9[0].tv_nsec != VAR_4 &&
      VAR_9[0].tv_nsec != VAR_5) {
   VAR_6 = VAR_2;
   return (-1);
  }
  if ((VAR_9[1].tv_nsec < 0 || VAR_9[1].tv_nsec > 999999999) &&
      VAR_9[1].tv_nsec != VAR_4 &&
      VAR_9[1].tv_nsec != VAR_5) {
   VAR_6 = VAR_2;
   return (-1);
  }
  VAR_12[0].tv_sec = VAR_9[0].tv_sec;
  VAR_12[0].tv_usec = VAR_9[0].tv_nsec / 1000;
  VAR_12[1].tv_sec = VAR_9[1].tv_sec;
  VAR_12[1].tv_usec = VAR_9[1].tv_nsec / 1000;
  VAR_13 = VAR_12;
  if (VAR_9[0].tv_nsec == VAR_5 ||
      VAR_9[1].tv_nsec == VAR_5) {
   if (FUNC_0(VAR_7, VAR_8, &VAR_14, VAR_10) == -1)
    return (-1);
   if (VAR_9[0].tv_nsec == VAR_5) {
    VAR_12[0].tv_sec = VAR_14.st_atim.tv_sec;
    VAR_12[0].tv_usec = VAR_14.st_atim.tv_nsec / 1000;
   }
   if (VAR_9[1].tv_nsec == VAR_5) {
    VAR_12[1].tv_sec = VAR_14.st_mtim.tv_sec;
    VAR_12[1].tv_usec = VAR_14.st_mtim.tv_nsec / 1000;
   }
  }
  if (VAR_9[0].tv_nsec == VAR_4 ||
      VAR_9[1].tv_nsec == VAR_4) {
   if (FUNC_2(&VAR_11, ((void*)0)) == -1)
    return (-1);
   if (VAR_9[0].tv_nsec == VAR_4)
    VAR_12[0] = VAR_11;
   if (VAR_9[1].tv_nsec == VAR_4)
    VAR_12[1] = VAR_11;
  }
 }
 if ((VAR_10 & VAR_1) == 0)
  return (FUNC_1(VAR_7, VAR_8, VAR_13));
 else if ((VAR_10 & VAR_1) != 0 &&
     (VAR_7 == VAR_0 || VAR_8[0] == '/'))
  return (FUNC_3(VAR_8, VAR_13));
 else {
  VAR_6 = VAR_3;
  return (-1);
 }
}
