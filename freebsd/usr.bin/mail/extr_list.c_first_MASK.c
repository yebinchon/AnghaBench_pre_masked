
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int m_flag; } ;


 int VAR_0 ;
 struct message* VAR_1 ;
 struct message* VAR_2 ;
 size_t VAR_3 ;

int
FUNC_0(int VAR_4, int VAR_5)
{
 struct message *VAR_6;

 if (VAR_3 == 0)
  return (0);
 VAR_4 &= VAR_0;
 VAR_5 &= VAR_0;
 for (VAR_6 = VAR_1; VAR_6 < &VAR_2[VAR_3]; VAR_6++)
  if ((VAR_6->m_flag & VAR_5) == VAR_4)
   return (VAR_6 - VAR_2 + 1);
 for (VAR_6 = VAR_1-1; VAR_6 >= &VAR_2[0]; VAR_6--)
  if ((VAR_6->m_flag & VAR_5) == VAR_4)
   return (VAR_6 - VAR_2 + 1);
 return (0);
}
