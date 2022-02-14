
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_2, char *VAR_3, int VAR_4)
{
 int VAR_5;

again:
 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0) {
  if (VAR_1 == VAR_0)
   goto again;

  return (-1);
 }

 return (VAR_5);
}
