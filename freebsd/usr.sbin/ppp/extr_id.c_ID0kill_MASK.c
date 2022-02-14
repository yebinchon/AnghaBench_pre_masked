
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ,char*,int,long,int) ;

int
FUNC_4(pid_t VAR_1, int VAR_2)
{
  int VAR_3;

  FUNC_0();
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  FUNC_3(VAR_0, "%d = kill(%ld, %d)\n", VAR_3, (long)VAR_1, VAR_2);
  FUNC_1();
  return VAR_3;
}
