
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct timespec {int tv_sec; int tv_nsec; } ;
typedef int semid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,struct timespec*) ;
 int FUNC_4 (struct timespec*,struct timespec*,struct timespec*) ;
 int FUNC_5 (struct timespec*,struct timespec*,struct timespec*) ;

__attribute__((used)) static int
FUNC_6(semid_t VAR_2, u_int VAR_3, u_int *VAR_4, int VAR_5)
{
 struct timespec VAR_6, VAR_7;

 if (FUNC_0(VAR_0, &VAR_6) < 0) {
  FUNC_2("clock_gettime(CLOCK_REALTIME)");
  return (-1);
 }
 VAR_7.tv_sec = VAR_3 / 1000;
 VAR_7.tv_nsec = VAR_3 % 1000 * 1000000;
 FUNC_4(&VAR_7, &VAR_6, &VAR_7);
 if (FUNC_3(VAR_2, &VAR_7) < 0) {
  if (VAR_1 != VAR_5) {
   FUNC_2("ksem_timedwait");
   return (-1);
  }
 } else if (VAR_5 != 0) {
  FUNC_1("ksem_timedwait() didn't fail");
  return (-1);
 }
 if (FUNC_0(VAR_0, &VAR_7) < 0) {
  FUNC_2("clock_gettime(CLOCK_REALTIME)");
  return (-1);
 }
 FUNC_5(&VAR_7, &VAR_6, &VAR_7);
 *VAR_4 = VAR_7.tv_nsec / 1000000;
 *VAR_4 += VAR_7.tv_sec * 1000;
 return (0);
}
