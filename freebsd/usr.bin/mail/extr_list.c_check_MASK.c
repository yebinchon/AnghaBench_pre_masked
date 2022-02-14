
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int m_flag; } ;


 int VAR_0 ;
 struct message* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;

int
FUNC_1(int VAR_3, int VAR_4)
{
 struct message *VAR_5;

 if (VAR_3 < 1 || VAR_3 > VAR_2) {
  FUNC_0("%d: Invalid message number\n", VAR_3);
  return (-1);
 }
 VAR_5 = &VAR_1[VAR_3-1];
 if (VAR_4 != VAR_0 && (VAR_5->m_flag & VAR_0) != 0) {
  FUNC_0("%d: Inappropriate message\n", VAR_3);
  return (-1);
 }
 return (0);
}
