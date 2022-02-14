
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int
FUNC_4(void)
{
 int VAR_8, VAR_9;

 if (VAR_6) {

  VAR_4 = "/dev/stdout";
  VAR_5 = VAR_7;
  if (VAR_1)
   return (FUNC_0());
  else
   return (FUNC_2());
 }
 VAR_9 = FUNC_1();
 if (VAR_9 == VAR_0) {
  FUNC_3("%s: missing or bad \"begin\" line", VAR_3);
  return (1);
 }
 for (VAR_8 = VAR_9; VAR_2; VAR_8 |= VAR_9) {
  VAR_9 = FUNC_1();
  if (VAR_9 == VAR_0)
   break;
 }
 return (VAR_8);
}
