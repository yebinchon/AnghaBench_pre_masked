
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int m_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_0(struct message *VAR_3)
{

 VAR_3->m_flag |= VAR_2;
 if ((VAR_3->m_flag & VAR_0) == 0)
  VAR_3->m_flag |= VAR_0|VAR_1;
}
