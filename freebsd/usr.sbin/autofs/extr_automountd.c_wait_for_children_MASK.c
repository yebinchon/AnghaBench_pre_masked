
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,scalar_t__,...) ;
 int FUNC_4 (char*,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int,int*,int ,int *) ;

__attribute__((used)) static int
FUNC_6(bool VAR_1)
{
 pid_t VAR_2;
 int VAR_3;
 int VAR_4 = 0;

 for (;;) {



  if (VAR_1 && VAR_4 == 0)
   VAR_2 = FUNC_5(-1, &VAR_3, 0, ((void*)0));
  else
   VAR_2 = FUNC_5(-1, &VAR_3, VAR_0, ((void*)0));
  if (VAR_2 <= 0)
   break;
  if (FUNC_1(VAR_3)) {
   FUNC_4("child process %d terminated with signal %d",
       VAR_2, FUNC_2(VAR_3));
  } else if (FUNC_0(VAR_3) != 0) {
   FUNC_3("child process %d terminated with exit status %d",
       VAR_2, FUNC_0(VAR_3));
  } else {
   FUNC_3("child process %d terminated gracefully", VAR_2);
  }
  VAR_4++;
 }

 return (VAR_4);
}
