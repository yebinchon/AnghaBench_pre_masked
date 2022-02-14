
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(int *VAR_4, int VAR_5)
{
 cap_rights_t VAR_6;
 int VAR_7;

 if (*VAR_4 >= 0)
  return (0);

 if ((VAR_7 = FUNC_2(VAR_0, VAR_3, VAR_5)) < 0)
  return (-1);
 FUNC_0(&VAR_6, VAR_1, VAR_2);
 if (FUNC_1(VAR_7, &VAR_6) != 0)
  return (-1);
 *VAR_4 = VAR_7;

 return (0);
}
