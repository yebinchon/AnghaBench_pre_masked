
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itimerval {int dummy; } ;
typedef int it ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct itimerval*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,struct itimerval*,int *) ;

__attribute__((used)) static int
FUNC_3(int VAR_4)
{
 struct itimerval VAR_5;

 FUNC_0(&VAR_5, sizeof(VAR_5));
 if (VAR_4) {
  FUNC_2(VAR_0, &VAR_5, ((void*)0));
  VAR_1 = 0;
  VAR_2 = -1;
  return (0);
 }
 if (FUNC_2(VAR_0, &VAR_5, ((void*)0)) < 0) {
  FUNC_1("setitimer");
  return (-1);
 }
 if (VAR_1 != 0 && !VAR_4) {
  VAR_3 = VAR_1;
  FUNC_1("ksem_post() (via timeout)");
  VAR_1 = 0;
  return (-1);
 }
 VAR_2 = -1;

 return (0);
}
