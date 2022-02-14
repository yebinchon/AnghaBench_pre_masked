
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct timespec {int tv_nsec; int tv_sec; } ;
typedef int semid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct timespec*,struct timespec*,struct timespec*) ;

__attribute__((used)) static int
FUNC_4(semid_t VAR_1, u_int *VAR_2)
{
 struct timespec VAR_3, VAR_4;

 if (FUNC_0(VAR_0, &VAR_3) < 0) {
  FUNC_1("clock_gettime(CLOCK_REALTIME)");
  return (-1);
 }
 if (FUNC_2(VAR_1) < 0) {
  FUNC_1("ksem_wait");
  return (-1);
 }
 if (FUNC_0(VAR_0, &VAR_4) < 0) {
  FUNC_1("clock_gettime(CLOCK_REALTIME)");
  return (-1);
 }
 FUNC_3(&VAR_4, &VAR_3, &VAR_4);
 *VAR_2 = VAR_4.tv_nsec / 1000000;
 *VAR_2 += VAR_4.tv_sec * 1000;
 return (0);
}
