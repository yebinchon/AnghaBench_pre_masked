
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int dummy; } ;
struct iovec {int dummy; } ;


 scalar_t__ FUNC_0 (int,struct msghdr*) ;
 int FUNC_1 (struct msghdr*,struct iovec*,int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(int VAR_0, int VAR_1)
{
 struct msghdr VAR_2;
 struct iovec VAR_3[1];
 int VAR_4;

 if (FUNC_3() < 0)
  return (-2);

 VAR_4 = -2;

 FUNC_1(&VAR_2, VAR_3, ((void*)0), 0, 0, 0);

 if (FUNC_2(VAR_1) < 0)
  goto done;

 if (VAR_0 == 2)
  if (FUNC_3() < 0)
   goto done;

 if (FUNC_0(VAR_1, &VAR_2) < 0)
  goto done;

 VAR_4 = 0;
done:
 return (VAR_4);
}
