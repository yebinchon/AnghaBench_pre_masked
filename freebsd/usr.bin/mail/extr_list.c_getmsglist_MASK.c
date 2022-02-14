
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int m_flag; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int) ;
 struct message* VAR_1 ;
 size_t VAR_2 ;

int
FUNC_1(char *VAR_3, int *VAR_4, int VAR_5)
{
 int *VAR_6;
 struct message *VAR_7;

 if (VAR_2 == 0) {
  *VAR_4 = 0;
  return (0);
 }
 if (FUNC_0(VAR_3, VAR_5) < 0)
  return (-1);
 VAR_6 = VAR_4;
 for (VAR_7 = &VAR_1[0]; VAR_7 < &VAR_1[VAR_2]; VAR_7++)
  if (VAR_7->m_flag & VAR_0)
   *VAR_6++ = VAR_7 - &VAR_1[0] + 1;
 *VAR_6 = 0;
 return (VAR_6 - VAR_4);
}
