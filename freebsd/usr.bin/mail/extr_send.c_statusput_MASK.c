
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int m_flag; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*,char*) ;

void
FUNC_1(struct message *VAR_2, FILE *VAR_3, char *VAR_4)
{
 char VAR_5[3];
 char *VAR_6 = VAR_5;

 if (VAR_2->m_flag & VAR_1)
  *VAR_6++ = 'R';
 if ((VAR_2->m_flag & VAR_0) == 0)
  *VAR_6++ = 'O';
 *VAR_6 = '\0';
 if (VAR_5[0] != '\0')
  FUNC_0(VAR_3, "%sStatus: %s\n",
   VAR_4 == ((void*)0) ? "" : VAR_4, VAR_5);
}
