
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_set ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static int
FUNC_1(int VAR_0, fd_set *VAR_1, int VAR_2)
{




 if (VAR_0 <= 0)
  return (VAR_2);

 FUNC_0(VAR_0, VAR_1);
 if (VAR_0 > VAR_2)
  VAR_2 = VAR_0;
 return (VAR_2);
}
