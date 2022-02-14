
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xucred ;
struct xucred {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xucred*,int) ;
 scalar_t__ FUNC_1 (int,int ,int ,struct xucred*,int*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(int VAR_1)
{
 struct xucred VAR_2;
 socklen_t VAR_3;

 if (FUNC_4() < 0)
  return (-1);

 if (FUNC_3(VAR_1) < 0)
  return (-1);

 VAR_3 = sizeof(VAR_2);
 if (FUNC_1(VAR_1, 0, VAR_0, &VAR_2, &VAR_3) < 0) {
  FUNC_2("getsockopt(LOCAL_PEERCRED)");
  return (-1);
 }

 if (FUNC_0(&VAR_2, VAR_3) < 0)
  return (-1);

 return (0);
}
