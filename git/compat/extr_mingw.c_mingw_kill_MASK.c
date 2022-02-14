
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;

int FUNC_5(pid_t VAR_6, int VAR_7)
{
 if (VAR_6 > 0 && VAR_7 == VAR_4) {
  HANDLE VAR_8 = FUNC_2(VAR_3, VAR_1, VAR_6);

  if (FUNC_3(VAR_8, -1)) {
   FUNC_0(VAR_8);
   return 0;
  }

  VAR_5 = FUNC_4(FUNC_1());
  FUNC_0(VAR_8);
  return -1;
 } else if (VAR_6 > 0 && VAR_7 == 0) {
  HANDLE VAR_9 = FUNC_2(VAR_2, VAR_1, VAR_6);
  if (VAR_9) {
   FUNC_0(VAR_9);
   return 0;
  }
 }

 VAR_5 = VAR_0;
 return -1;
}
