
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct printer {int dummy; } ;
typedef int fd_set ;


 int FUNC_0 (struct printer*,char*,int) ;
 int FUNC_1 (int ,int *,int *,int *,struct timeval*) ;

void
FUNC_2(int VAR_0)
{
 struct timeval VAR_1;

 if (VAR_0 <= 0 || VAR_0 > 10000)
  FUNC_0((struct printer *)0,
      "unreasonable delay period (%d)", VAR_0);
 VAR_1.tv_sec = VAR_0 / 1000;
 VAR_1.tv_usec = VAR_0 * 1000 % 1000000;
 (void) FUNC_1(0, (fd_set *)0, (fd_set *)0, (fd_set *)0, &VAR_1);
}
