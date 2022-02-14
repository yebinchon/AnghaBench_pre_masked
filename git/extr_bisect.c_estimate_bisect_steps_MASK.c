
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

int FUNC_2(int VAR_0)
{
 int VAR_1, VAR_2, VAR_3;

 if (VAR_0 < 3)
  return 0;

 VAR_1 = FUNC_1(VAR_0);
 VAR_3 = FUNC_0(VAR_1);
 VAR_2 = VAR_0 - VAR_3;

 return (VAR_3 < 3 * VAR_2) ? VAR_1 : VAR_1 - 1;
}
