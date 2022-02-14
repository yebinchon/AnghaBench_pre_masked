
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int token ;
typedef int cell_t ;


 int FUNC_0 (int ,char const*,int*,int) ;
 int VAR_0 ;
 int FUNC_1 () ;

cell_t
FUNC_2(const char *VAR_1)
{
 cell_t VAR_2;

 if (!FUNC_1())
  return (-1);

 if (FUNC_0(VAR_0, VAR_1, &VAR_2, sizeof(VAR_2)) == -1)
  return (-1);

 return (VAR_2);
}
