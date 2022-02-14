
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rusage {int dummy; } ;
typedef int pid_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int*,int ,struct rusage*) ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_3, pid_t VAR_4)
{
 int VAR_5;
 pid_t VAR_6;




 (void)FUNC_0(VAR_3);

 FUNC_1(VAR_4, VAR_1);
 do {
  VAR_6 = FUNC_2(VAR_4, &VAR_5, 0, (struct rusage *)0);
 } while (VAR_6 == -1 && VAR_2 == VAR_0);
}
