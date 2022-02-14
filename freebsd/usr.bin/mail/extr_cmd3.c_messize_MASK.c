
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int m_size; int m_lines; } ;


 struct message* VAR_0 ;
 int FUNC_0 (char*,int,int ,int ) ;

int
FUNC_1(void *VAR_1)
{
 int *VAR_2 = VAR_1;
 struct message *VAR_3;
 int *VAR_4, VAR_5;

 for (VAR_4 = VAR_2; *VAR_4 != 0; VAR_4++) {
  VAR_5 = *VAR_4;
  VAR_3 = &VAR_0[VAR_5-1];
  FUNC_0("%d: %ld/%ld\n", VAR_5, VAR_3->m_lines, VAR_3->m_size);
 }
 return (0);
}
