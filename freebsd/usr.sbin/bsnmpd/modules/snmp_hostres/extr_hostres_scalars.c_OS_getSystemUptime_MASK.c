
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int kernel_boot_timestamp ;


 int VAR_0 ;
 int FUNC_0 (char*,long long,long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct timeval*,int *) ;
 int VAR_6 ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,int ,struct timeval*,size_t*,int *,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(uint32_t *VAR_7)
{
 struct timeval VAR_8;
 uint64_t VAR_9;

 if (VAR_6 == 0) {

  struct timeval VAR_10;
  int VAR_11[2] = { VAR_0, VAR_1 };
  size_t VAR_12 = sizeof(VAR_10);

  if (FUNC_3(VAR_11, FUNC_2(VAR_11), &VAR_10,
      &VAR_12, ((void*)0), 0) == -1) {
   FUNC_4(VAR_2, "sysctl KERN_BOOTTIME failed: %m");
   return (VAR_3);
  }

  FUNC_0("boot timestamp from kernel: {%lld, %ld}",
      (long long)VAR_10.tv_sec,
      (long)VAR_10.tv_usec);

  VAR_6 = ((uint64_t)VAR_10.tv_sec * 100) +
      (VAR_10.tv_usec / 10000);
 }

 if (FUNC_1(&VAR_8, ((void*)0)) < 0) {
  FUNC_4(VAR_2, "gettimeofday failed: %m");
  return (VAR_3);
 }
 VAR_9 = ((uint64_t)VAR_8.tv_sec * 100) + (VAR_8.tv_usec / 10000);

 if (VAR_9 - VAR_6 > VAR_5)
  *VAR_7 = VAR_5;
 else
  *VAR_7 = VAR_9 - VAR_6;

 return (VAR_4);
}
