
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int m_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct message* VAR_2 ;
 scalar_t__ VAR_3 ;
 struct message* VAR_4 ;
 int FUNC_0 (char*) ;

int
FUNC_1(void *VAR_5)
{
 int *VAR_6 = VAR_5;
 int *VAR_7, VAR_8;
 struct message *VAR_9;

 if (VAR_3) {
  FUNC_0("Cannot \"preserve\" in edit mode\n");
  return (1);
 }
 for (VAR_7 = VAR_6; *VAR_7 != 0; VAR_7++) {
  VAR_8 = *VAR_7;
  VAR_9 = &VAR_4[VAR_8-1];
  VAR_9->m_flag |= VAR_1;
  VAR_9->m_flag &= ~VAR_0;
  VAR_2 = VAR_9;
 }
 return (0);
}
