
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (int *,int ,int) ;
 struct timespec FUNC_2 (struct timespec,struct timespec) ;

__attribute__((used)) static struct timespec
FUNC_3(struct timespec VAR_1)
{
 for (;;) {
  struct timespec VAR_2, VAR_3;
  FUNC_0(VAR_0, &VAR_3);
  VAR_2 = FUNC_2(VAR_1, VAR_3);
  if (VAR_2.tv_sec < 0)
   return VAR_3;
  else if (VAR_2.tv_sec > 0 || VAR_2.tv_nsec > 1000000)
   FUNC_1(((void*)0), 0, 1);
 }
}
