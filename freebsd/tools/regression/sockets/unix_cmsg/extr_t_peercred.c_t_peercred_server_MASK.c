
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
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(int VAR_1)
{
 struct xucred VAR_2;
 socklen_t VAR_3;
 int VAR_4, VAR_5;

 if (FUNC_5() < 0)
  return (-2);

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4 < 0)
  return (-2);

 VAR_3 = sizeof(VAR_2);
 if (FUNC_1(VAR_4, 0, VAR_0, &VAR_2, &VAR_3) < 0) {
  FUNC_2("getsockopt(LOCAL_PEERCRED)");
  VAR_5 = -2;
  goto done;
 }

 if (FUNC_0(&VAR_2, VAR_3) < 0) {
  VAR_5 = -1;
  goto done;
 }

 VAR_5 = 0;
done:
 if (FUNC_4(VAR_4) < 0)
  VAR_5 = -2;
 return (VAR_5);
}
