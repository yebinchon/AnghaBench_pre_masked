
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct timespec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*,struct timespec*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char const*,char const*,int,long,int) ;
 char* VAR_4 ;
 int FUNC_2 (struct timeval*,struct timeval*,struct timeval*) ;
 int FUNC_3 (char*,char const*,char const*,int,long,int) ;
 scalar_t__ FUNC_4 (struct timespec*) ;

__attribute__((used)) static long
FUNC_5(struct timespec *VAR_5,
    struct timespec *VAR_6)
{
 struct timeval VAR_7, VAR_8, VAR_9, VAR_10;
 const char *VAR_11, *VAR_12;
 struct timespec VAR_13;
 int VAR_14;

 if (!VAR_3)
  return (0);

 FUNC_0(&VAR_7, VAR_5);
 FUNC_0(&VAR_8, VAR_6);
 FUNC_2(&VAR_8, &VAR_7, &VAR_10);
 VAR_14 = VAR_10.tv_sec;
 if (VAR_14 < VAR_1)
  return (VAR_14);

 if (VAR_4) {
  VAR_11 = "Watchdog program";
  VAR_12 = VAR_4;
 } else {
  VAR_11 = "Watchdog operation";
  VAR_12 = "stat(\"/etc\", &sb)";
 }
 if (VAR_2)
  FUNC_1(VAR_0, "%s: '%s' took too long: "
      "%d.%06ld seconds >= %d seconds threshold",
      VAR_11, VAR_12, VAR_14, (long)VAR_10.tv_usec,
      VAR_1);
 else
  FUNC_3("%s: '%s' took too long: "
      "%d.%06ld seconds >= %d seconds threshold",
      VAR_11, VAR_12, VAR_14, (long)VAR_10.tv_usec,
      VAR_1);





 if (FUNC_4(&VAR_13))
  return (VAR_14);
 FUNC_0(&VAR_9, &VAR_13);
 FUNC_2(&VAR_9, &VAR_7, &VAR_10);
 VAR_14 = VAR_10.tv_sec;

 return (VAR_14);
}
