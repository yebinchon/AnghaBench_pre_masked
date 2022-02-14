
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int m_flag; } ;


 int VAR_0 ;
 struct message* VAR_1 ;
 struct message* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct message*) ;

int
FUNC_1(void *VAR_4)
{
 int *VAR_5 = VAR_4;
 int *VAR_6;
 struct message *VAR_7;

 for (VAR_6 = VAR_5; *VAR_6 && VAR_6-VAR_5 < VAR_3; VAR_6++) {
  VAR_7 = &VAR_2[*VAR_6 - 1];
  FUNC_0(VAR_7);
  VAR_1 = VAR_7;
  VAR_7->m_flag &= ~VAR_0;
 }
 return (0);
}
