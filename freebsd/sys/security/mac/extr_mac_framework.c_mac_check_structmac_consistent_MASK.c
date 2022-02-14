
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac {int m_buflen; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct mac *VAR_2)
{


 if (VAR_2->m_buflen > VAR_1 ||
     VAR_2->m_buflen <= sizeof(""))
  return (VAR_0);

 return (0);
}
