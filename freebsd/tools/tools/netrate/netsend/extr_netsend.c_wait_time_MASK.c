
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct timespec*,struct timespec*) ;

__attribute__((used)) static int
FUNC_4(struct timespec VAR_1, struct timespec *VAR_2, long long *VAR_3)
{
 struct timespec VAR_4;

 VAR_4.tv_sec = 0;
 VAR_4.tv_nsec = 0;

 if (FUNC_0(VAR_0, &VAR_4) == -1) {
  FUNC_1("clock_gettime");
  return (-1);
 }




 while (FUNC_3(&VAR_1, &VAR_4)) {
  if (VAR_3 != ((void*)0))
   (*VAR_3)++;
  if (FUNC_0(VAR_0, &VAR_4) == -1) {
   FUNC_1("clock_gettime");
   return (-1);
  }
 }
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_4;
 return (0);
}
