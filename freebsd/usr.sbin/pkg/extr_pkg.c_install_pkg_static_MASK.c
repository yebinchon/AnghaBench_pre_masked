
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char const*,char*,char*,char const*,char const*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int*,int ) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_2, const char *VAR_3, bool VAR_4)
{
 int VAR_5;
 pid_t VAR_6;

 switch ((VAR_6 = FUNC_5())) {
 case -1:
  return (-1);
 case 0:
  if (VAR_4)
   FUNC_4(VAR_2, "pkg-static", "add", "-f", VAR_3,
       (char *)((void*)0));
  else
   FUNC_4(VAR_2, "pkg-static", "add", VAR_3,
       (char *)((void*)0));
  FUNC_3(1);
 default:
  break;
 }

 while (FUNC_6(VAR_6, &VAR_5, 0) == -1)
  if (VAR_1 != VAR_0)
   return (-1);

 if (FUNC_0(VAR_5))
  return (FUNC_0(VAR_5));
 else if (FUNC_1(VAR_5))
  return (128 & (FUNC_2(VAR_5)));
 return (VAR_5);
}
