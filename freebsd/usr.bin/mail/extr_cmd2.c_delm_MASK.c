
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int m_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct message* VAR_5 ;
 int FUNC_0 (int ,int) ;
 struct message* VAR_6 ;
 int FUNC_1 (struct message*) ;

int
FUNC_2(int *VAR_7)
{
 struct message *VAR_8;
 int *VAR_9, VAR_10;

 VAR_10 = 0;
 for (VAR_9 = VAR_7; *VAR_9 != 0; VAR_9++) {
  VAR_8 = &VAR_6[*VAR_9 - 1];
  FUNC_1(VAR_8);
  VAR_8->m_flag |= VAR_1|VAR_4;
  VAR_8->m_flag &= ~(VAR_2|VAR_3|VAR_0);
  VAR_10 = *VAR_9;
 }
 if (VAR_10 != 0) {
  VAR_5 = &VAR_6[VAR_10-1];
  VAR_10 = FUNC_0(0, VAR_1);
  if (VAR_10 != 0) {
   VAR_5 = &VAR_6[VAR_10-1];
   return (0);
  }
  else {
   VAR_5 = &VAR_6[0];
   return (-1);
  }
 }





 return (-1);
}
