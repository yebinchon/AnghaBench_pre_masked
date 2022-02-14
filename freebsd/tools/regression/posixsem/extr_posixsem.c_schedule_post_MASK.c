
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int tv_sec; int tv_usec; } ;
struct itimerval {TYPE_1__ it_value; } ;
typedef int semid_t ;
typedef int it ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct itimerval*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,struct itimerval*,int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(semid_t VAR_6, u_int VAR_7)
{
 struct itimerval VAR_8;

 if (!VAR_4) {
  if (FUNC_4(VAR_1, VAR_3) == VAR_2) {
   FUNC_2("signal(SIGALRM)");
   return (-1);
  }
  VAR_4 = 1;
 }
 if (VAR_5 != -1) {
  FUNC_1("ksem_post() already scheduled");
  return (-1);
 }
 VAR_5 = VAR_6;
 FUNC_0(&VAR_8, sizeof(VAR_8));
 VAR_8.it_value.tv_sec = VAR_7 / 1000;
 VAR_8.it_value.tv_usec = (VAR_7 % 1000) * 1000;
 if (FUNC_3(VAR_0, &VAR_8, ((void*)0)) < 0) {
  FUNC_2("setitimer");
  return (-1);
 }
 return (0);
}
