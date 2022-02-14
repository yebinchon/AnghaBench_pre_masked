
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int,char const*,long) ;
 int FUNC_3 (char const*,scalar_t__) ;

int
FUNC_4(const char *VAR_1, pid_t VAR_2)
{
  int VAR_3;

  FUNC_0();
  VAR_3 = FUNC_3(VAR_1, VAR_2);
  FUNC_2(VAR_0, "%d = uu_lock_txfr(\"%s\", %ld)\n", VAR_3, VAR_1,
             (long)VAR_2);
  FUNC_1();
  return VAR_3;
}
