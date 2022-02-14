
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_mtag {int dummy; } ;
struct m_tag {int m_tag_len; int m_tag_free; int m_tag_id; int m_tag_cookie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(void *VAR_3, int VAR_4, int VAR_5)
{
 struct m_tag *VAR_6;

 VAR_6 = (struct m_tag *)VAR_3;
 VAR_6->m_tag_cookie = VAR_0;
 VAR_6->m_tag_id = VAR_1;
 VAR_6->m_tag_len = sizeof(struct pf_mtag);
 VAR_6->m_tag_free = VAR_2;

 return (0);
}
